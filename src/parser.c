#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  aux_sym_normal_comment_token1 = 5,
  aux_sym_normal_comment_token2 = 6,
  aux_sym_include_comment_token1 = 7,
  sym_beggin_comment_arg = 8,
  sym_end_comment_arg = 9,
  sym_include_keyword = 10,
  sym__text = 11,
  aux_sym_include_arg_token1 = 12,
  sym_ignoreif_keyword = 13,
  anon_sym_LT = 14,
  anon_sym_SLASH_GT = 15,
  anon_sym_LT_SLASH = 16,
  anon_sym_EQ = 17,
  sym_attribute_name = 18,
  sym_attribute_value = 19,
  sym_entity = 20,
  anon_sym_SQUOTE = 21,
  aux_sym_quoted_attribute_value_token1 = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_quoted_attribute_value_token2 = 24,
  sym_text = 25,
  sym__start_tag_name = 26,
  sym__script_start_tag_name = 27,
  sym__style_start_tag_name = 28,
  sym__end_tag_name = 29,
  sym_erroneous_end_tag_name = 30,
  sym__implicit_end_tag = 31,
  sym_raw_text = 32,
  sym_document = 33,
  sym_doctype = 34,
  sym__node = 35,
  sym_comment = 36,
  sym_normal_comment = 37,
  sym_include_comment = 38,
  sym_include_arg = 39,
  sym_include_sub_arg = 40,
  sym_element = 41,
  sym_script_element = 42,
  sym_style_element = 43,
  sym_start_tag = 44,
  sym_script_start_tag = 45,
  sym_style_start_tag = 46,
  sym_self_closing_tag = 47,
  sym_end_tag = 48,
  sym_erroneous_end_tag = 49,
  sym_attribute = 50,
  sym_quoted_attribute_value = 51,
  aux_sym_document_repeat1 = 52,
  aux_sym_include_comment_repeat1 = 53,
  aux_sym_start_tag_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [aux_sym_normal_comment_token1] = "normal_comment_token1",
  [aux_sym_normal_comment_token2] = "normal_comment_token2",
  [aux_sym_include_comment_token1] = "include_comment_token1",
  [sym_beggin_comment_arg] = "beggin_comment_arg",
  [sym_end_comment_arg] = "end_comment_arg",
  [sym_include_keyword] = "include_keyword",
  [sym__text] = "_text",
  [aux_sym_include_arg_token1] = "include_arg_token1",
  [sym_ignoreif_keyword] = "ignoreif_keyword",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_comment] = "comment",
  [sym_normal_comment] = "normal_comment",
  [sym_include_comment] = "include_comment",
  [sym_include_arg] = "include_arg",
  [sym_include_sub_arg] = "include_sub_arg",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_include_comment_repeat1] = "include_comment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [aux_sym_normal_comment_token1] = aux_sym_normal_comment_token1,
  [aux_sym_normal_comment_token2] = aux_sym_normal_comment_token2,
  [aux_sym_include_comment_token1] = aux_sym_include_comment_token1,
  [sym_beggin_comment_arg] = sym_beggin_comment_arg,
  [sym_end_comment_arg] = sym_end_comment_arg,
  [sym_include_keyword] = sym_include_keyword,
  [sym__text] = sym__text,
  [aux_sym_include_arg_token1] = aux_sym_include_arg_token1,
  [sym_ignoreif_keyword] = sym_ignoreif_keyword,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_comment] = sym_comment,
  [sym_normal_comment] = sym_normal_comment,
  [sym_include_comment] = sym_include_comment,
  [sym_include_arg] = sym_include_arg,
  [sym_include_sub_arg] = sym_include_sub_arg,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_include_comment_repeat1] = aux_sym_include_comment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_normal_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_beggin_comment_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_end_comment_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_include_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_include_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ignoreif_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_include_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_include_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_include_sub_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 9,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 24,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 10,
  [34] = 12,
  [35] = 13,
  [36] = 14,
  [37] = 15,
  [38] = 16,
  [39] = 30,
  [40] = 18,
  [41] = 20,
  [42] = 21,
  [43] = 22,
  [44] = 23,
  [45] = 25,
  [46] = 26,
  [47] = 31,
  [48] = 27,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 50,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 49,
  [64] = 64,
  [65] = 65,
  [66] = 57,
  [67] = 58,
  [68] = 55,
  [69] = 54,
  [70] = 59,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 60,
  [79] = 72,
  [80] = 74,
  [81] = 75,
  [82] = 76,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 71,
  [93] = 73,
  [94] = 77,
  [95] = 95,
  [96] = 88,
  [97] = 84,
  [98] = 91,
  [99] = 87,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 104,
  [107] = 100,
  [108] = 83,
  [109] = 86,
  [110] = 85,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 120,
  [127] = 117,
  [128] = 128,
  [129] = 115,
  [130] = 128,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 119,
  [135] = 111,
  [136] = 122,
  [137] = 118,
  [138] = 114,
  [139] = 125,
  [140] = 133,
  [141] = 123,
  [142] = 132,
  [143] = 131,
  [144] = 121,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 105,
        '#', 19,
        '&', 3,
        '\'', 102,
        '-', 8,
        '/', 10,
        '<', 56,
        '=', 59,
        '>', 39,
        'D', 26,
        'd', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 31:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(108);
      END_STATE();
    case 32:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '<') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(108);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_normal_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_normal_comment_token2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_normal_comment_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_include_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_beggin_comment_arg);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_end_comment_arg);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_end_comment_arg);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_include_keyword);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_include_arg_token1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_include_arg_token1);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_include_arg_token1);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_include_arg_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ignoreif_keyword);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(108);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34, .external_lex_state = 2},
  [3] = {.lex_state = 34, .external_lex_state = 2},
  [4] = {.lex_state = 34, .external_lex_state = 2},
  [5] = {.lex_state = 34, .external_lex_state = 2},
  [6] = {.lex_state = 34, .external_lex_state = 2},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34, .external_lex_state = 2},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34, .external_lex_state = 2},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34, .external_lex_state = 2},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34, .external_lex_state = 2},
  [29] = {.lex_state = 34, .external_lex_state = 2},
  [30] = {.lex_state = 34, .external_lex_state = 2},
  [31] = {.lex_state = 34, .external_lex_state = 2},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 34, .external_lex_state = 2},
  [34] = {.lex_state = 34, .external_lex_state = 2},
  [35] = {.lex_state = 34, .external_lex_state = 2},
  [36] = {.lex_state = 34, .external_lex_state = 2},
  [37] = {.lex_state = 34, .external_lex_state = 2},
  [38] = {.lex_state = 34, .external_lex_state = 2},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34, .external_lex_state = 2},
  [41] = {.lex_state = 34, .external_lex_state = 2},
  [42] = {.lex_state = 34, .external_lex_state = 2},
  [43] = {.lex_state = 34, .external_lex_state = 2},
  [44] = {.lex_state = 34, .external_lex_state = 2},
  [45] = {.lex_state = 34, .external_lex_state = 2},
  [46] = {.lex_state = 34, .external_lex_state = 2},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 34, .external_lex_state = 2},
  [49] = {.lex_state = 9, .external_lex_state = 3},
  [50] = {.lex_state = 9, .external_lex_state = 3},
  [51] = {.lex_state = 9, .external_lex_state = 3},
  [52] = {.lex_state = 9, .external_lex_state = 3},
  [53] = {.lex_state = 9, .external_lex_state = 3},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 52},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 9, .external_lex_state = 3},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 52},
  [71] = {.lex_state = 9, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 9, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 0, .external_lex_state = 5},
  [77] = {.lex_state = 9, .external_lex_state = 3},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 0, .external_lex_state = 4},
  [80] = {.lex_state = 0, .external_lex_state = 4},
  [81] = {.lex_state = 41},
  [82] = {.lex_state = 0, .external_lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 6},
  [84] = {.lex_state = 54},
  [85] = {.lex_state = 54},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 54},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 52},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0, .external_lex_state = 6},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 54},
  [111] = {.lex_state = 0, .external_lex_state = 7},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 44},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 44},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 44},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 44},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 44},
  [132] = {.lex_state = 44},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0, .external_lex_state = 7},
  [136] = {.lex_state = 0, .external_lex_state = 8},
  [137] = {.lex_state = 44},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 44},
  [144] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [sym_beggin_comment_arg] = ACTIONS(1),
    [sym_end_comment_arg] = ACTIONS(1),
    [sym_include_keyword] = ACTIONS(1),
    [sym_ignoreif_keyword] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(113),
    [sym_doctype] = STATE(7),
    [sym__node] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_normal_comment] = STATE(27),
    [sym_include_comment] = STATE(27),
    [sym_element] = STATE(7),
    [sym_script_element] = STATE(7),
    [sym_style_element] = STATE(7),
    [sym_start_tag] = STATE(5),
    [sym_script_start_tag] = STATE(74),
    [sym_style_start_tag] = STATE(72),
    [sym_self_closing_tag] = STATE(32),
    [sym_erroneous_end_tag] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [sym_beggin_comment_arg] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym_text] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      sym_beggin_comment_arg,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(28), 1,
      sym_self_closing_tag,
    STATE(36), 1,
      sym_end_tag,
    STATE(79), 1,
      sym_style_start_tag,
    STATE(80), 1,
      sym_script_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(48), 2,
      sym_normal_comment,
      sym_include_comment,
    STATE(6), 8,
      sym_doctype,
      sym__node,
      sym_comment,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [49] = 13,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      sym_beggin_comment_arg,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    ACTIONS(29), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_end_tag,
    STATE(28), 1,
      sym_self_closing_tag,
    STATE(79), 1,
      sym_style_start_tag,
    STATE(80), 1,
      sym_script_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(48), 2,
      sym_normal_comment,
      sym_include_comment,
    STATE(6), 8,
      sym_doctype,
      sym__node,
      sym_comment,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [98] = 13,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      sym_beggin_comment_arg,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(28), 1,
      sym_self_closing_tag,
    STATE(29), 1,
      sym_end_tag,
    STATE(79), 1,
      sym_style_start_tag,
    STATE(80), 1,
      sym_script_start_tag,
    ACTIONS(31), 2,
      sym_entity,
      sym_text,
    STATE(48), 2,
      sym_normal_comment,
      sym_include_comment,
    STATE(2), 8,
      sym_doctype,
      sym__node,
      sym_comment,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [147] = 13,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      sym_beggin_comment_arg,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(24), 1,
      sym_end_tag,
    STATE(28), 1,
      sym_self_closing_tag,
    STATE(79), 1,
      sym_style_start_tag,
    STATE(80), 1,
      sym_script_start_tag,
    ACTIONS(35), 2,
      sym_entity,
      sym_text,
    STATE(48), 2,
      sym_normal_comment,
      sym_include_comment,
    STATE(3), 8,
      sym_doctype,
      sym__node,
      sym_comment,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [196] = 12,
    ACTIONS(39), 1,
      anon_sym_LT_BANG,
    ACTIONS(42), 1,
      sym_beggin_comment_arg,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(48), 1,
      anon_sym_LT_SLASH,
    ACTIONS(54), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(28), 1,
      sym_self_closing_tag,
    STATE(79), 1,
      sym_style_start_tag,
    STATE(80), 1,
      sym_script_start_tag,
    ACTIONS(51), 2,
      sym_entity,
      sym_text,
    STATE(48), 2,
      sym_normal_comment,
      sym_include_comment,
    STATE(6), 8,
      sym_doctype,
      sym__node,
      sym_comment,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [242] = 12,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      sym_beggin_comment_arg,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_start_tag,
    STATE(32), 1,
      sym_self_closing_tag,
    STATE(72), 1,
      sym_style_start_tag,
    STATE(74), 1,
      sym_script_start_tag,
    ACTIONS(58), 2,
      sym_entity,
      sym_text,
    STATE(27), 2,
      sym_normal_comment,
      sym_include_comment,
    STATE(8), 8,
      sym_doctype,
      sym__node,
      sym_comment,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [288] = 12,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_LT_BANG,
    ACTIONS(63), 1,
      sym_beggin_comment_arg,
    ACTIONS(66), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_tag,
    STATE(32), 1,
      sym_self_closing_tag,
    STATE(72), 1,
      sym_style_start_tag,
    STATE(74), 1,
      sym_script_start_tag,
    ACTIONS(72), 2,
      sym_entity,
      sym_text,
    STATE(27), 2,
      sym_normal_comment,
      sym_include_comment,
    STATE(8), 8,
      sym_doctype,
      sym__node,
      sym_comment,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [334] = 2,
    ACTIONS(75), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(77), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [346] = 2,
    ACTIONS(81), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [358] = 2,
    ACTIONS(83), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(85), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [370] = 2,
    ACTIONS(89), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [382] = 2,
    ACTIONS(93), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [394] = 2,
    ACTIONS(97), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [406] = 2,
    ACTIONS(101), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [418] = 2,
    ACTIONS(105), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [430] = 2,
    ACTIONS(75), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [442] = 2,
    ACTIONS(109), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [454] = 2,
    ACTIONS(111), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(113), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [466] = 2,
    ACTIONS(117), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [478] = 2,
    ACTIONS(121), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [490] = 2,
    ACTIONS(125), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [502] = 2,
    ACTIONS(129), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [514] = 2,
    ACTIONS(133), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [526] = 2,
    ACTIONS(137), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [538] = 2,
    ACTIONS(141), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [550] = 2,
    ACTIONS(145), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [562] = 2,
    ACTIONS(147), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(149), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [574] = 2,
    ACTIONS(133), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(131), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [586] = 2,
    ACTIONS(151), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(153), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [598] = 2,
    ACTIONS(155), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(157), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [610] = 2,
    ACTIONS(147), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [622] = 2,
    ACTIONS(81), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(79), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [634] = 2,
    ACTIONS(89), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(87), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [646] = 2,
    ACTIONS(93), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(91), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [658] = 2,
    ACTIONS(97), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(95), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [670] = 2,
    ACTIONS(101), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(99), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [682] = 2,
    ACTIONS(105), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(103), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [694] = 2,
    ACTIONS(151), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [706] = 2,
    ACTIONS(109), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(107), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [718] = 2,
    ACTIONS(117), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(115), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [730] = 2,
    ACTIONS(121), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(119), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [742] = 2,
    ACTIONS(125), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(123), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [754] = 2,
    ACTIONS(129), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(127), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [766] = 2,
    ACTIONS(137), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(135), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [778] = 2,
    ACTIONS(141), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(139), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [790] = 2,
    ACTIONS(155), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [802] = 2,
    ACTIONS(145), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(143), 5,
      sym__implicit_end_tag,
      sym_beggin_comment_arg,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [814] = 3,
    ACTIONS(161), 1,
      sym_attribute_name,
    ACTIONS(159), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(49), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [826] = 4,
    ACTIONS(164), 1,
      anon_sym_GT,
    ACTIONS(166), 1,
      anon_sym_SLASH_GT,
    ACTIONS(168), 1,
      sym_attribute_name,
    STATE(49), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [840] = 4,
    ACTIONS(168), 1,
      sym_attribute_name,
    ACTIONS(170), 1,
      anon_sym_GT,
    ACTIONS(172), 1,
      anon_sym_SLASH_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [854] = 4,
    ACTIONS(168), 1,
      sym_attribute_name,
    ACTIONS(170), 1,
      anon_sym_GT,
    ACTIONS(174), 1,
      anon_sym_SLASH_GT,
    STATE(50), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [868] = 4,
    ACTIONS(164), 1,
      anon_sym_GT,
    ACTIONS(168), 1,
      sym_attribute_name,
    ACTIONS(176), 1,
      anon_sym_SLASH_GT,
    STATE(49), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [882] = 4,
    ACTIONS(178), 1,
      sym_end_comment_arg,
    ACTIONS(180), 1,
      aux_sym_include_arg_token1,
    STATE(56), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [895] = 4,
    ACTIONS(182), 1,
      sym_attribute_value,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_quoted_attribute_value,
  [908] = 4,
    ACTIONS(188), 1,
      sym_end_comment_arg,
    ACTIONS(190), 1,
      aux_sym_include_arg_token1,
    STATE(56), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [921] = 4,
    ACTIONS(180), 1,
      aux_sym_include_arg_token1,
    ACTIONS(193), 1,
      sym_end_comment_arg,
    STATE(56), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [934] = 4,
    ACTIONS(180), 1,
      aux_sym_include_arg_token1,
    ACTIONS(195), 1,
      sym_end_comment_arg,
    STATE(54), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [947] = 4,
    ACTIONS(178), 1,
      sym_end_comment_arg,
    ACTIONS(180), 1,
      aux_sym_include_arg_token1,
    STATE(57), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [960] = 2,
    ACTIONS(199), 1,
      anon_sym_EQ,
    ACTIONS(197), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [969] = 3,
    ACTIONS(201), 1,
      anon_sym_GT,
    ACTIONS(203), 1,
      sym_attribute_name,
    STATE(63), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [980] = 3,
    ACTIONS(203), 1,
      sym_attribute_name,
    ACTIONS(205), 1,
      anon_sym_GT,
    STATE(63), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [991] = 3,
    ACTIONS(159), 1,
      anon_sym_GT,
    ACTIONS(207), 1,
      sym_attribute_name,
    STATE(63), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1002] = 3,
    ACTIONS(203), 1,
      sym_attribute_name,
    ACTIONS(210), 1,
      anon_sym_GT,
    STATE(61), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1013] = 3,
    ACTIONS(203), 1,
      sym_attribute_name,
    ACTIONS(212), 1,
      anon_sym_GT,
    STATE(62), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1024] = 4,
    ACTIONS(180), 1,
      aux_sym_include_arg_token1,
    ACTIONS(214), 1,
      sym_end_comment_arg,
    STATE(56), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [1037] = 4,
    ACTIONS(180), 1,
      aux_sym_include_arg_token1,
    ACTIONS(216), 1,
      sym_end_comment_arg,
    STATE(69), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [1050] = 4,
    ACTIONS(218), 1,
      sym_attribute_value,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_quoted_attribute_value,
  [1063] = 4,
    ACTIONS(180), 1,
      aux_sym_include_arg_token1,
    ACTIONS(224), 1,
      sym_end_comment_arg,
    STATE(56), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [1076] = 4,
    ACTIONS(180), 1,
      aux_sym_include_arg_token1,
    ACTIONS(224), 1,
      sym_end_comment_arg,
    STATE(66), 1,
      aux_sym_include_comment_repeat1,
    STATE(124), 1,
      sym_include_sub_arg,
  [1089] = 1,
    ACTIONS(226), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1095] = 3,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    ACTIONS(230), 1,
      sym_raw_text,
    STATE(47), 1,
      sym_end_tag,
  [1105] = 1,
    ACTIONS(232), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1111] = 3,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    ACTIONS(234), 1,
      sym_raw_text,
    STATE(39), 1,
      sym_end_tag,
  [1121] = 3,
    ACTIONS(236), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(238), 1,
      aux_sym_normal_comment_token2,
    ACTIONS(240), 1,
      sym_include_keyword,
  [1131] = 3,
    ACTIONS(242), 1,
      sym__start_tag_name,
    ACTIONS(244), 1,
      sym__script_start_tag_name,
    ACTIONS(246), 1,
      sym__style_start_tag_name,
  [1141] = 1,
    ACTIONS(248), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1147] = 2,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(197), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1155] = 3,
    ACTIONS(252), 1,
      anon_sym_LT_SLASH,
    ACTIONS(254), 1,
      sym_raw_text,
    STATE(31), 1,
      sym_end_tag,
  [1165] = 3,
    ACTIONS(252), 1,
      anon_sym_LT_SLASH,
    ACTIONS(256), 1,
      sym_raw_text,
    STATE(30), 1,
      sym_end_tag,
  [1175] = 3,
    ACTIONS(258), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(260), 1,
      aux_sym_normal_comment_token2,
    ACTIONS(262), 1,
      sym_include_keyword,
  [1185] = 3,
    ACTIONS(244), 1,
      sym__script_start_tag_name,
    ACTIONS(246), 1,
      sym__style_start_tag_name,
    ACTIONS(264), 1,
      sym__start_tag_name,
  [1195] = 2,
    ACTIONS(266), 1,
      sym__end_tag_name,
    ACTIONS(268), 1,
      sym_erroneous_end_tag_name,
  [1202] = 2,
    ACTIONS(270), 1,
      aux_sym_include_arg_token1,
    STATE(138), 1,
      sym_include_arg,
  [1209] = 2,
    ACTIONS(270), 1,
      aux_sym_include_arg_token1,
    STATE(118), 1,
      sym_include_arg,
  [1216] = 2,
    ACTIONS(272), 1,
      aux_sym_normal_comment_token2,
    ACTIONS(274), 1,
      sym_include_keyword,
  [1223] = 2,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    STATE(16), 1,
      sym_end_tag,
  [1230] = 2,
    ACTIONS(276), 1,
      sym_end_comment_arg,
    ACTIONS(278), 1,
      sym__text,
  [1237] = 1,
    ACTIONS(280), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1242] = 1,
    ACTIONS(282), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1247] = 2,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    STATE(15), 1,
      sym_end_tag,
  [1254] = 1,
    ACTIONS(226), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1259] = 1,
    ACTIONS(232), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1264] = 1,
    ACTIONS(248), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1269] = 1,
    ACTIONS(284), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1274] = 2,
    ACTIONS(286), 1,
      sym_end_comment_arg,
    ACTIONS(288), 1,
      sym__text,
  [1281] = 2,
    ACTIONS(270), 1,
      aux_sym_include_arg_token1,
    STATE(114), 1,
      sym_include_arg,
  [1288] = 2,
    ACTIONS(252), 1,
      anon_sym_LT_SLASH,
    STATE(37), 1,
      sym_end_tag,
  [1295] = 2,
    ACTIONS(252), 1,
      anon_sym_LT_SLASH,
    STATE(38), 1,
      sym_end_tag,
  [1302] = 2,
    ACTIONS(290), 1,
      sym_end_comment_arg,
    ACTIONS(292), 1,
      sym__text,
  [1309] = 1,
    ACTIONS(294), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1314] = 1,
    ACTIONS(188), 2,
      sym_end_comment_arg,
      aux_sym_include_arg_token1,
  [1319] = 2,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      aux_sym_quoted_attribute_value_token1,
  [1326] = 2,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      aux_sym_quoted_attribute_value_token2,
  [1333] = 2,
    ACTIONS(302), 1,
      anon_sym_SQUOTE,
    ACTIONS(304), 1,
      aux_sym_quoted_attribute_value_token1,
  [1340] = 2,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      aux_sym_quoted_attribute_value_token2,
  [1347] = 2,
    ACTIONS(308), 1,
      sym_end_comment_arg,
    ACTIONS(310), 1,
      sym__text,
  [1354] = 2,
    ACTIONS(268), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(312), 1,
      sym__end_tag_name,
  [1361] = 2,
    ACTIONS(314), 1,
      aux_sym_normal_comment_token2,
    ACTIONS(316), 1,
      sym_include_keyword,
  [1368] = 2,
    ACTIONS(270), 1,
      aux_sym_include_arg_token1,
    STATE(137), 1,
      sym_include_arg,
  [1375] = 1,
    ACTIONS(268), 1,
      sym_erroneous_end_tag_name,
  [1379] = 1,
    ACTIONS(318), 1,
      aux_sym_include_comment_token1,
  [1383] = 1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
  [1387] = 1,
    ACTIONS(322), 1,
      aux_sym_include_comment_token1,
  [1391] = 1,
    ACTIONS(324), 1,
      anon_sym_GT,
  [1395] = 1,
    ACTIONS(326), 1,
      aux_sym_include_comment_token1,
  [1399] = 1,
    ACTIONS(328), 1,
      sym_end_comment_arg,
  [1403] = 1,
    ACTIONS(330), 1,
      aux_sym_include_comment_token1,
  [1407] = 1,
    ACTIONS(332), 1,
      anon_sym_GT,
  [1411] = 1,
    ACTIONS(334), 1,
      sym_end_comment_arg,
  [1415] = 1,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
  [1419] = 1,
    ACTIONS(312), 1,
      sym__end_tag_name,
  [1423] = 1,
    ACTIONS(338), 1,
      anon_sym_GT,
  [1427] = 1,
    ACTIONS(340), 1,
      aux_sym_include_comment_token1,
  [1431] = 1,
    ACTIONS(342), 1,
      sym__doctype,
  [1435] = 1,
    ACTIONS(344), 1,
      sym_end_comment_arg,
  [1439] = 1,
    ACTIONS(346), 1,
      sym_end_comment_arg,
  [1443] = 1,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
  [1447] = 1,
    ACTIONS(350), 1,
      anon_sym_GT,
  [1451] = 1,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
  [1455] = 1,
    ACTIONS(352), 1,
      aux_sym_include_comment_token1,
  [1459] = 1,
    ACTIONS(354), 1,
      aux_sym_include_comment_token1,
  [1463] = 1,
    ACTIONS(356), 1,
      aux_sym_doctype_token1,
  [1467] = 1,
    ACTIONS(358), 1,
      anon_sym_GT,
  [1471] = 1,
    ACTIONS(360), 1,
      sym_erroneous_end_tag_name,
  [1475] = 1,
    ACTIONS(266), 1,
      sym__end_tag_name,
  [1479] = 1,
    ACTIONS(362), 1,
      aux_sym_include_comment_token1,
  [1483] = 1,
    ACTIONS(364), 1,
      aux_sym_include_comment_token1,
  [1487] = 1,
    ACTIONS(366), 1,
      sym__doctype,
  [1491] = 1,
    ACTIONS(368), 1,
      aux_sym_doctype_token1,
  [1495] = 1,
    ACTIONS(370), 1,
      anon_sym_GT,
  [1499] = 1,
    ACTIONS(372), 1,
      aux_sym_include_comment_token1,
  [1503] = 1,
    ACTIONS(374), 1,
      aux_sym_include_comment_token1,
  [1507] = 1,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 334,
  [SMALL_STATE(10)] = 346,
  [SMALL_STATE(11)] = 358,
  [SMALL_STATE(12)] = 370,
  [SMALL_STATE(13)] = 382,
  [SMALL_STATE(14)] = 394,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 442,
  [SMALL_STATE(19)] = 454,
  [SMALL_STATE(20)] = 466,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 490,
  [SMALL_STATE(23)] = 502,
  [SMALL_STATE(24)] = 514,
  [SMALL_STATE(25)] = 526,
  [SMALL_STATE(26)] = 538,
  [SMALL_STATE(27)] = 550,
  [SMALL_STATE(28)] = 562,
  [SMALL_STATE(29)] = 574,
  [SMALL_STATE(30)] = 586,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 610,
  [SMALL_STATE(33)] = 622,
  [SMALL_STATE(34)] = 634,
  [SMALL_STATE(35)] = 646,
  [SMALL_STATE(36)] = 658,
  [SMALL_STATE(37)] = 670,
  [SMALL_STATE(38)] = 682,
  [SMALL_STATE(39)] = 694,
  [SMALL_STATE(40)] = 706,
  [SMALL_STATE(41)] = 718,
  [SMALL_STATE(42)] = 730,
  [SMALL_STATE(43)] = 742,
  [SMALL_STATE(44)] = 754,
  [SMALL_STATE(45)] = 766,
  [SMALL_STATE(46)] = 778,
  [SMALL_STATE(47)] = 790,
  [SMALL_STATE(48)] = 802,
  [SMALL_STATE(49)] = 814,
  [SMALL_STATE(50)] = 826,
  [SMALL_STATE(51)] = 840,
  [SMALL_STATE(52)] = 854,
  [SMALL_STATE(53)] = 868,
  [SMALL_STATE(54)] = 882,
  [SMALL_STATE(55)] = 895,
  [SMALL_STATE(56)] = 908,
  [SMALL_STATE(57)] = 921,
  [SMALL_STATE(58)] = 934,
  [SMALL_STATE(59)] = 947,
  [SMALL_STATE(60)] = 960,
  [SMALL_STATE(61)] = 969,
  [SMALL_STATE(62)] = 980,
  [SMALL_STATE(63)] = 991,
  [SMALL_STATE(64)] = 1002,
  [SMALL_STATE(65)] = 1013,
  [SMALL_STATE(66)] = 1024,
  [SMALL_STATE(67)] = 1037,
  [SMALL_STATE(68)] = 1050,
  [SMALL_STATE(69)] = 1063,
  [SMALL_STATE(70)] = 1076,
  [SMALL_STATE(71)] = 1089,
  [SMALL_STATE(72)] = 1095,
  [SMALL_STATE(73)] = 1105,
  [SMALL_STATE(74)] = 1111,
  [SMALL_STATE(75)] = 1121,
  [SMALL_STATE(76)] = 1131,
  [SMALL_STATE(77)] = 1141,
  [SMALL_STATE(78)] = 1147,
  [SMALL_STATE(79)] = 1155,
  [SMALL_STATE(80)] = 1165,
  [SMALL_STATE(81)] = 1175,
  [SMALL_STATE(82)] = 1185,
  [SMALL_STATE(83)] = 1195,
  [SMALL_STATE(84)] = 1202,
  [SMALL_STATE(85)] = 1209,
  [SMALL_STATE(86)] = 1216,
  [SMALL_STATE(87)] = 1223,
  [SMALL_STATE(88)] = 1230,
  [SMALL_STATE(89)] = 1237,
  [SMALL_STATE(90)] = 1242,
  [SMALL_STATE(91)] = 1247,
  [SMALL_STATE(92)] = 1254,
  [SMALL_STATE(93)] = 1259,
  [SMALL_STATE(94)] = 1264,
  [SMALL_STATE(95)] = 1269,
  [SMALL_STATE(96)] = 1274,
  [SMALL_STATE(97)] = 1281,
  [SMALL_STATE(98)] = 1288,
  [SMALL_STATE(99)] = 1295,
  [SMALL_STATE(100)] = 1302,
  [SMALL_STATE(101)] = 1309,
  [SMALL_STATE(102)] = 1314,
  [SMALL_STATE(103)] = 1319,
  [SMALL_STATE(104)] = 1326,
  [SMALL_STATE(105)] = 1333,
  [SMALL_STATE(106)] = 1340,
  [SMALL_STATE(107)] = 1347,
  [SMALL_STATE(108)] = 1354,
  [SMALL_STATE(109)] = 1361,
  [SMALL_STATE(110)] = 1368,
  [SMALL_STATE(111)] = 1375,
  [SMALL_STATE(112)] = 1379,
  [SMALL_STATE(113)] = 1383,
  [SMALL_STATE(114)] = 1387,
  [SMALL_STATE(115)] = 1391,
  [SMALL_STATE(116)] = 1395,
  [SMALL_STATE(117)] = 1399,
  [SMALL_STATE(118)] = 1403,
  [SMALL_STATE(119)] = 1407,
  [SMALL_STATE(120)] = 1411,
  [SMALL_STATE(121)] = 1415,
  [SMALL_STATE(122)] = 1419,
  [SMALL_STATE(123)] = 1423,
  [SMALL_STATE(124)] = 1427,
  [SMALL_STATE(125)] = 1431,
  [SMALL_STATE(126)] = 1435,
  [SMALL_STATE(127)] = 1439,
  [SMALL_STATE(128)] = 1443,
  [SMALL_STATE(129)] = 1447,
  [SMALL_STATE(130)] = 1451,
  [SMALL_STATE(131)] = 1455,
  [SMALL_STATE(132)] = 1459,
  [SMALL_STATE(133)] = 1463,
  [SMALL_STATE(134)] = 1467,
  [SMALL_STATE(135)] = 1471,
  [SMALL_STATE(136)] = 1475,
  [SMALL_STATE(137)] = 1479,
  [SMALL_STATE(138)] = 1483,
  [SMALL_STATE(139)] = 1487,
  [SMALL_STATE(140)] = 1491,
  [SMALL_STATE(141)] = 1495,
  [SMALL_STATE(142)] = 1499,
  [SMALL_STATE(143)] = 1503,
  [SMALL_STATE(144)] = 1507,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_comment, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_comment, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_comment, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_comment, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_comment, 5, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_comment, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_comment, 6, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_comment, 6, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_comment, 7, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_comment, 7, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_comment, 8, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_comment, 8, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_comment_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arg, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_sub_arg, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
  },
  [2] = {
    [ts_external_token__implicit_end_tag] = true,
  },
  [3] = {
    [ts_external_token_SLASH_GT] = true,
  },
  [4] = {
    [ts_external_token_raw_text] = true,
  },
  [5] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
  },
  [6] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [7] = {
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_olex2htm_external_scanner_create(void);
void tree_sitter_olex2htm_external_scanner_destroy(void *);
bool tree_sitter_olex2htm_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_olex2htm_external_scanner_serialize(void *, char *);
void tree_sitter_olex2htm_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_olex2htm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_olex2htm_external_scanner_create,
      tree_sitter_olex2htm_external_scanner_destroy,
      tree_sitter_olex2htm_external_scanner_scan,
      tree_sitter_olex2htm_external_scanner_serialize,
      tree_sitter_olex2htm_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
