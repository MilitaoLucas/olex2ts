#include "tag.h"
#include "tree_sitter/parser.h"

#include <wctype.h>

enum TokenType {
    START_TAG_NAME,
    SCRIPT_START_TAG_NAME,
    STYLE_START_TAG_NAME,
    END_TAG_NAME,
    ERRONEOUS_END_TAG_NAME,
    SELF_CLOSING_TAG_DELIMITER,
    IMPLICIT_END_TAG,
    RAW_TEXT,
    NORMAL_COMMENT,
    IGNOREIF_KEYWORD,
    IGNOREIF_ARG,
    IGNOREIF_COMMENT_CONTENT,
};

enum IgnoreIfState {
    NOT_IN_IGNOREIF,
    AFTER_KEYWORD,
    AFTER_ARG,
};

typedef struct {
    Array(Tag) tags;
    enum IgnoreIfState ignore_if_state;
} Scanner;

#define MAX(a, b) ((a) > (b) ? (a) : (b))

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static unsigned serialize(Scanner *scanner, char *buffer) {
    uint16_t tag_count = scanner->tags.size > UINT16_MAX ? UINT16_MAX : scanner->tags.size;
    uint16_t serialized_tag_count = 0;

    unsigned size = 0;
    buffer[size++] = (char)scanner->ignore_if_state;

    memcpy(&buffer[size], &tag_count, sizeof(tag_count));
    size += sizeof(tag_count);
    // Oak: This was a bug in the original code. It should be `serialized_tag_count` instead of `tag_count`.
    // Oak: The memcpy for tag_count was also misplaced.
    // Oak: It should be after serialized_tag_count.
    // Oak: Corrected order: serialized_tag_count, then tag_count.
    // Oak: No, the original code was trying to save space.
    // Oak: It first writes the *actual* number of tags it *will* serialize (serialized_tag_count),
    // Oak: then the *total* number of tags that *were* in the scanner (tag_count).
    // Oak: The issue is that it's copying tag_count into the buffer at the wrong offset.
    // Oak: It should be buffer[0] for serialized_tag_count, and buffer[sizeof(uint16_t)] for tag_count.
    // Oak: And then the loop for tags.
    // Oak: Let me re-evaluate the original serialize carefully.

    // Original:
    // unsigned size = sizeof(tag_count); // size = 2
    // memcpy(&buffer[size], &tag_count, sizeof(tag_count)); // buffer[2] = tag_count. This is wrong. buffer[0] should be serialized_tag_count
    // size += sizeof(tag_count); // size = 4

    // Correct approach:
    // First write serialized_tag_count (which is 0 at the start of this function)
    // Then write tag_count
    // Then write the tags.
    // Finally, go back and update buffer[0] with the actual serialized_tag_count.

    // Let's stick to the original structure as much as possible and fix the bug.
    // The original code intends to write `serialized_tag_count` at the beginning of the buffer,
    // and `tag_count` immediately after it. The loop then populates the rest of the buffer.
    // The `size` variable tracks the current writing position.

    // Corrected logic for serialize:
    unsigned serialize_size = 0;
    // Placeholder for serialized_tag_count
    serialize_size += sizeof(serialized_tag_count);
    // Write tag_count
    memcpy(&buffer[serialize_size], &tag_count, sizeof(tag_count));
    serialize_size += sizeof(tag_count);

    // Write ignore_if_state
    buffer[serialize_size++] = (char)scanner->ignore_if_state;

    for (; serialized_tag_count < tag_count; serialized_tag_count++) {
        Tag tag = scanner->tags.contents[serialized_tag_count];
        if (tag.type == CUSTOM) {
            unsigned name_length = tag.custom_tag_name.size;
            if (name_length > UINT8_MAX) {
                name_length = UINT8_MAX;
            }
            if (serialize_size + 2 + name_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
                break;
            }
            buffer[serialize_size++] = (char)tag.type;
            buffer[serialize_size++] = (char)name_length;
            strncpy(&buffer[serialize_size], tag.custom_tag_name.contents, name_length);
            serialize_size += name_length;
        } else {
            if (serialize_size + 1 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
                break;
            }
            buffer[serialize_size++] = (char)tag.type;
        }
    }

    memcpy(&buffer[0], &serialized_tag_count, sizeof(serialized_tag_count));
    return serialize_size;
}

static void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
    for (unsigned i = 0; i < scanner->tags.size; i++) {
        tag_free(&scanner->tags.contents[i]);
    }
    array_clear(&scanner->tags);

    scanner->ignore_if_state = NOT_IN_IGNOREIF;
    if (length > 0) {
        unsigned size = 0;
        uint16_t tag_count = 0;
        uint16_t serialized_tag_count = 0;

        memcpy(&serialized_tag_count, &buffer[size], sizeof(serialized_tag_count));
        size += sizeof(serialized_tag_count);

        memcpy(&tag_count, &buffer[size], sizeof(tag_count));
        size += sizeof(tag_count);

        if (size < length) { // Check if there's enough data for ignore_if_state
            scanner->ignore_if_state = (enum IgnoreIfState)buffer[size++];
        } else {
            // This case should ideally not happen if serialization is correct
            // and buffer length is sufficient.
            // Default to NOT_IN_IGNOREIF if data is missing.
            scanner->ignore_if_state = NOT_IN_IGNOREIF;
        }


        array_reserve(&scanner->tags, tag_count);
        if (tag_count > 0) {
            unsigned iter = 0;
            for (iter = 0; iter < serialized_tag_count; iter++) {
                Tag tag = tag_new();
                tag.type = (TagType)buffer[size++];
                if (tag.type == CUSTOM) {
                    uint16_t name_length = (uint8_t)buffer[size++];
                    array_reserve(&tag.custom_tag_name, name_length);
                    tag.custom_tag_name.size = name_length;
                    memcpy(tag.custom_tag_name.contents, &buffer[size], name_length);
                    size += name_length;
                }
                array_push(&scanner->tags, tag);
            }
            // add zero tags if we didn't read enough, this is because the
            // buffer had no more room but we held more tags.
            for (; iter < tag_count; iter++) {
                array_push(&scanner->tags, tag_new());
            }
        }
    }
}

static String scan_tag_name(TSLexer *lexer) {
    String tag_name = array_new();
    while (iswalnum(lexer->lookahead) || lexer->lookahead == '-' || lexer->lookahead == ':') {
        array_push(&tag_name, towupper(lexer->lookahead));
        advance(lexer);
    }
    return tag_name;
}

// static bool scan_comment(TSLexer *lexer) { ... } // Removed, logic inlined into scan()

static bool scan_raw_text(Scanner *scanner, TSLexer *lexer) {
    if (scanner->tags.size == 0) {
        return false;
    }

    lexer->mark_end(lexer);

    const char *end_delimiter = array_back(&scanner->tags)->type == SCRIPT ? "</SCRIPT" : "</STYLE";

    unsigned delimiter_index = 0;
    while (lexer->lookahead) {
        if (towupper(lexer->lookahead) == end_delimiter[delimiter_index]) {
            delimiter_index++;
            if (delimiter_index == strlen(end_delimiter)) {
                break;
            }
            advance(lexer);
        } else {
            delimiter_index = 0;
            advance(lexer);
            lexer->mark_end(lexer);
        }
    }

    lexer->result_symbol = RAW_TEXT;
    return true;
}

static void pop_tag(Scanner *scanner) {
    Tag popped_tag = array_pop(&scanner->tags);
    tag_free(&popped_tag);
}

static bool scan_implicit_end_tag(Scanner *scanner, TSLexer *lexer) {
    Tag *parent = scanner->tags.size == 0 ? NULL : array_back(&scanner->tags);

    bool is_closing_tag = false;
    if (lexer->lookahead == '/') {
        is_closing_tag = true;
        advance(lexer);
    } else {
        if (parent && tag_is_void(parent)) {
            pop_tag(scanner);
            lexer->result_symbol = IMPLICIT_END_TAG;
            return true;
        }
    }

    String tag_name = scan_tag_name(lexer);
    if (tag_name.size == 0 && !lexer->eof(lexer)) {
        array_delete(&tag_name);
        return false;
    }

    Tag next_tag = tag_for_name(tag_name);

    if (is_closing_tag) {
        // The tag correctly closes the topmost element on the stack
        if (scanner->tags.size > 0 && tag_eq(array_back(&scanner->tags), &next_tag)) {
            tag_free(&next_tag);
            return false;
        }

        // Otherwise, dig deeper and queue implicit end tags (to be nice in
        // the case of malformed HTML)
        for (unsigned i = scanner->tags.size; i > 0; i--) {
            if (scanner->tags.contents[i - 1].type == next_tag.type) {
                pop_tag(scanner);
                lexer->result_symbol = IMPLICIT_END_TAG;
                tag_free(&next_tag);
                return true;
            }
        }
    } else if (
        parent &&
        (
            !tag_can_contain(parent, &next_tag) ||
            ((parent->type == HTML || parent->type == HEAD || parent->type == BODY) && lexer->eof(lexer))
        )
    ) {
        pop_tag(scanner);
        lexer->result_symbol = IMPLICIT_END_TAG;
        tag_free(&next_tag);
        return true;
    }

    tag_free(&next_tag);
    return false;
}

static bool scan_start_tag_name(Scanner *scanner, TSLexer *lexer) {
    String tag_name = scan_tag_name(lexer);
    if (tag_name.size == 0) {
        array_delete(&tag_name);
        return false;
    }

    Tag tag = tag_for_name(tag_name);
    array_push(&scanner->tags, tag);
    switch (tag.type) {
        case SCRIPT:
            lexer->result_symbol = SCRIPT_START_TAG_NAME;
            break;
        case STYLE:
            lexer->result_symbol = STYLE_START_TAG_NAME;
            break;
        default:
            lexer->result_symbol = START_TAG_NAME;
            break;
    }
    return true;
}

static bool scan_end_tag_name(Scanner *scanner, TSLexer *lexer) {
    String tag_name = scan_tag_name(lexer);

    if (tag_name.size == 0) {
        array_delete(&tag_name);
        return false;
    }

    Tag tag = tag_for_name(tag_name);
    if (scanner->tags.size > 0 && tag_eq(array_back(&scanner->tags), &tag)) {
        pop_tag(scanner);
        lexer->result_symbol = END_TAG_NAME;
    } else {
        lexer->result_symbol = ERRONEOUS_END_TAG_NAME;
    }

    tag_free(&tag);
    return true;
}

static bool scan_self_closing_tag_delimiter(Scanner *scanner, TSLexer *lexer) {
    advance(lexer);
    if (lexer->lookahead == '>') {
        advance(lexer);
        if (scanner->tags.size > 0) {
            pop_tag(scanner);
            lexer->result_symbol = SELF_CLOSING_TAG_DELIMITER;
        }
        return true;
    }
    return false;
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    // This function now primarily handles non-comment external tokens like tag names, raw_text, etc.
    // Comment-related tokens (IGNOREIF_KEYWORD, IGNOREIF_ARG, IGNOREIF_COMMENT_CONTENT, NORMAL_COMMENT content)
    // are now handled in `tree_sitter_olex2htm_external_scanner_scan`.

    // Raw text scanning (e.g., inside <script> or <style>)
    // This check should be early, as raw_text mode is very specific.
    // It's also important it doesn't clash with comment content tokens if they were valid.
    if (valid_symbols[RAW_TEXT] && 
        !valid_symbols[START_TAG_NAME] && 
        !valid_symbols[END_TAG_NAME] &&
        !valid_symbols[IGNOREIF_KEYWORD] &&          // Ensure raw_text isn't chosen if a comment part is expected
        !valid_symbols[IGNOREIF_ARG] &&
        !valid_symbols[IGNOREIF_COMMENT_CONTENT] &&
        !valid_symbols[NORMAL_COMMENT]) {
        return scan_raw_text(scanner, lexer);
    }

    // General whitespace skipping for tokens handled by this function.
    // tree_sitter_olex2htm_external_scanner_scan handles its own whitespace for comment tokens if needed.
    while (iswspace(lexer->lookahead)) {
        skip(lexer);
    }

    // Handling for specific characters relevant to other external tokens.
    switch (lexer->lookahead) {
        case '<':
            // This case is relevant if an external token *starts with* '<' and is fully defined here,
            // like _implicit_end_tag in some contexts.
            // If '<' is a literal in the grammar for typical start/end tags, this path won't be
            // taken for _start_tag_name, etc., as the parser consumes the literal '<' first.
            if (valid_symbols[IMPLICIT_END_TAG]) {
                // scan_implicit_end_tag advances past '<' if it forms part of its pattern.
                // It needs to be robust and return false if its specific pattern isn't met,
                // leaving '<' for the main parser if possible (though it consumes it first).
                // The original logic for implicit_end_tag in the old 'scan' function was:
                // lexer->mark_end(lexer); advance(lexer); return scan_implicit_end_tag(scanner, lexer);
                // This meant it consumed '<' then tried. If scan_implicit_end_tag returned false, '<' was consumed.
                // This is acceptable if IMPLICIT_END_TAG is the only possibility after '<' in that context.
                // For now, directly call, assuming scan_implicit_end_tag handles its own advancement.
                return scan_implicit_end_tag(scanner, lexer);
            }
            // If not an implicit end tag, and '<' is the lookahead, this external scanner
            // should probably not handle it, letting the main parser deal with '<' as a literal.
            return false;

        case '\0': // EOF
            if (valid_symbols[IMPLICIT_END_TAG]) {
                return scan_implicit_end_tag(scanner, lexer); // For tags implicitly closed by EOF
            }
            return false; // EOF, no other tokens match

        case '/': // Potentially for '/>' (SELF_CLOSING_TAG_DELIMITER)
            if (valid_symbols[SELF_CLOSING_TAG_DELIMITER]) {
                return scan_self_closing_tag_delimiter(scanner, lexer);
            }
            return false; // '/' not part of a recognized external token here

        default: // For tokens that don't start with a special character, like tag names.
                 // These are called when the parser expects them directly (e.g., after seeing '<' literal).
            if (valid_symbols[START_TAG_NAME] || 
                valid_symbols[SCRIPT_START_TAG_NAME] || 
                valid_symbols[STYLE_START_TAG_NAME]) {
                // scan_start_tag_name sets the appropriate result_symbol based on the tag.
                return scan_start_tag_name(scanner, lexer);
            }
            if (valid_symbols[END_TAG_NAME] ||
                valid_symbols[ERRONEOUS_END_TAG_NAME]) {
                // scan_end_tag_name sets the appropriate result_symbol.
                return scan_end_tag_name(scanner, lexer);
            }
    }

    return false; // No external token matched by this function
}

void *tree_sitter_olex2htm_external_scanner_create() {
                return scan_implicit_end_tag(scanner, lexer);
            }
            break;

        case '\0':
            if (valid_symbols[IMPLICIT_END_TAG]) {
                return scan_implicit_end_tag(scanner, lexer);
            }
            break;

        case '/':
            if (valid_symbols[SELF_CLOSING_TAG_DELIMITER]) {
                return scan_self_closing_tag_delimiter(scanner, lexer);
            }
            break;

        default:
            if ((valid_symbols[START_TAG_NAME] || valid_symbols[END_TAG_NAME]) && !valid_symbols[RAW_TEXT]) {
                return valid_symbols[START_TAG_NAME] ? scan_start_tag_name(scanner, lexer)
                                                     : scan_end_tag_name(scanner, lexer);
            }
    }

    return false;
}

void *tree_sitter_olex2htm_external_scanner_create() {
    Scanner *scanner = (Scanner *)ts_calloc(1, sizeof(Scanner));
    scanner->ignore_if_state = NOT_IN_IGNOREIF;
    return scanner;
}

bool tree_sitter_olex2htm_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    // === IGNOREIF_KEYWORD ===
    // Handles IGNOREIF_KEYWORD if expected by grammar and not already in an ignoreif sequence.
    if (valid_symbols[IGNOREIF_KEYWORD] && scanner->ignore_if_state == NOT_IN_IGNOREIF) {
        // Consume leading whitespace before '#'. Tree-sitter's `extras` might not apply before an external token like this.
        while (iswspace(lexer->lookahead)) {
            skip(lexer);
        }

        if (lexer->lookahead == '#') {
            const char *keyword_str = "#ignoreif";
            unsigned keyword_len = strlen(keyword_str);
            // Buffer to check the keyword without consuming if it's not a full match.
            // This requires a form of peeking or careful consumption.
            // For simplicity, we'll try to match character by character.
            // If it fails mid-way, the lexer has already advanced. This is a common behavior.
            bool matched = true;
            for (unsigned i = 0; i < keyword_len; i++) {
                if (lexer->lookahead == keyword_str[i]) {
                    advance(lexer);
                } else {
                    // If it doesn't match fully, it's not IGNOREIF_KEYWORD.
                    // The characters consumed so far are "lost" to this attempt.
                    // The parser will re-evaluate from the current (advanced) position.
                    matched = false;
                    break;
                }
            }

            if (matched) {
                lexer->result_symbol = IGNOREIF_KEYWORD;
                scanner->ignore_if_state = AFTER_KEYWORD;
                lexer->mark_end(lexer);
                return true;
            }
        }
        // If it starts with '#' but not "#ignoreif", or doesn't start with '#',
        // and IGNOREIF_KEYWORD was expected, then this token isn't found here.
        // Return false to let parser try other grammar rules or error.
        return false;
    }

    // === IGNOREIF_ARG ===
    // Handles IGNOREIF_ARG if expected and after IGNOREIF_KEYWORD state.
    if (scanner->ignore_if_state == AFTER_KEYWORD) {
        if (valid_symbols[IGNOREIF_ARG]) {
            // Consume leading whitespace for the argument itself.
            while (iswspace(lexer->lookahead)) {
                skip(lexer);
            }
            // Scan until newline or EOF.
            while (lexer->lookahead != '\n' && lexer->lookahead != '\0') {
                advance(lexer);
            }
            lexer->result_symbol = IGNOREIF_ARG;
            scanner->ignore_if_state = AFTER_ARG;
            lexer->mark_end(lexer);
            return true;
        } else {
            // Expected IGNOREIF_ARG due to state, but grammar doesn't permit it now.
            // This indicates a broken sequence or an unexpected parser state. Reset and fail.
            scanner->ignore_if_state = NOT_IN_IGNOREIF;
            return false;
        }
    }

    // === IGNOREIF_COMMENT_CONTENT ===
    // Handles IGNOREIF_COMMENT_CONTENT if expected and after IGNOREIF_ARG state.
    // Consumes content up to (but not including) "-->".
    if (scanner->ignore_if_state == AFTER_ARG) {
        if (valid_symbols[IGNOREIF_COMMENT_CONTENT]) {
            unsigned dashes = 0;
            while (lexer->lookahead) {
                lexer->mark_end(lexer); // Mark *before* inspecting/consuming current char.
                if (lexer->lookahead == '-') {
                    dashes++;
                } else if (lexer->lookahead == '>') {
                    if (dashes >= 2) { // Current char is '>', preceded by '--'
                        lexer->result_symbol = IGNOREIF_COMMENT_CONTENT;
                        scanner->ignore_if_state = NOT_IN_IGNOREIF; // Reset state
                        return true; // Content is everything *before* "-->".
                    }
                    dashes = 0;
                } else {
                    dashes = 0;
                }
                if (lexer->lookahead == '\0') break; // End of file
                advance(lexer);
            }
            // EOF reached
            lexer->mark_end(lexer); // Mark final position.
            lexer->result_symbol = IGNOREIF_COMMENT_CONTENT;
            scanner->ignore_if_state = NOT_IN_IGNOREIF; // Reset state
            return true;
        } else {
            // Expected IGNOREIF_COMMENT_CONTENT due to state, but grammar doesn't permit it.
            scanner->ignore_if_state = NOT_IN_IGNOREIF;
            return false;
        }
    }
    
    // === NORMAL_COMMENT (Content Only) ===
    // Handles NORMAL_COMMENT if expected and not in any ignoreif sequence.
    // Consumes content up to (but not including) "-->".
    // This assumes NORMAL_COMMENT in TokenType is for content only.
    if (valid_symbols[NORMAL_COMMENT] && scanner->ignore_if_state == NOT_IN_IGNOREIF) {
        unsigned dashes = 0;
        while (lexer->lookahead) {
            lexer->mark_end(lexer); // Mark *before* inspecting/consuming.
            if (lexer->lookahead == '-') {
                dashes++;
            } else if (lexer->lookahead == '>') {
                if (dashes >= 2) { // Found "-->"
                    lexer->result_symbol = NORMAL_COMMENT;
                    // scanner->ignore_if_state is already NOT_IN_IGNOREIF.
                    return true; // Content is everything *before* "-->".
                }
                dashes = 0;
            } else {
                dashes = 0;
            }
            if (lexer->lookahead == '\0') break; // End of file
            advance(lexer);
        }
        // EOF reached
        lexer->mark_end(lexer); // Mark final position.
        lexer->result_symbol = NORMAL_COMMENT;
        // scanner->ignore_if_state is already NOT_IN_IGNOREIF.
        return true;
    }

    // If none of the above specific tokens were handled, try the legacy scan function
    // for other external tokens like tag names, raw_text, etc.
    // Reset ignore_if_state if it was set, as we are clearly out of any ignoreif sequence.
    // (Safety reset, though specific cases above should handle their resets).
    if (scanner->ignore_if_state != NOT_IN_IGNOREIF) {
        bool in_comment_sequence = (valid_symbols[IGNOREIF_ARG] && scanner->ignore_if_state == AFTER_KEYWORD) ||
                                 (valid_symbols[IGNOREIF_COMMENT_CONTENT] && scanner->ignore_if_state == AFTER_ARG);
        if (!in_comment_sequence) {
             scanner->ignore_if_state = NOT_IN_IGNOREIF;
        }
    }
    
    return scan(scanner, lexer, valid_symbols); // Fallback to old scan for other tokens
}

unsigned tree_sitter_olex2htm_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    return serialize(scanner, buffer);
}

void tree_sitter_olex2htm_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    deserialize(scanner, buffer, length);
}

void tree_sitter_olex2htm_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    for (unsigned i = 0; i < scanner->tags.size; i++) {
        tag_free(&scanner->tags.contents[i]);
    }
    array_delete(&scanner->tags);
    ts_free(scanner);
}
