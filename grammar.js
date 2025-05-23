/**
 * @file Olex2HTM grammar for tree-sitter
 * @author Lucas Militão <lucas.milito@usp.br>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'olex2htm',

  extras: $ => [
    /\s+/,
  ],

  externals: $ => [
    $._start_tag_name,
    $._script_start_tag_name,
    $._style_start_tag_name,
    $._end_tag_name,
    $.erroneous_end_tag_name,
    '/>',
    $._implicit_end_tag,
    $.raw_text,
  ],

  rules: {
    document: $ => repeat($._node),

    doctype: $ => seq(
      '<!',
      alias($._doctype, 'doctype'),
      /[^>]+/,
      '>',
    ),

    _doctype: _ => /[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/,

    _node: $ => choice(
      $.comment,
      $.doctype,
      $.entity,
      $.text,
      $.element,
      $.script_element,
      $.style_element,
      $.erroneous_end_tag,
    ),

    // start custom
    comment: $ => choice(
      $.include_comment,
      $.normal_comment,
      $.ignoreif_comment,
    ),

    // Special case for include comments
    include_comment: $ => seq(
      $._beggin_comment_arg,
      /\s*?/,
      $.include_keyword,
      /[\s]+/,
      $.include_arg,
      /[\s]+/,
      $.include_sub_arg,
      /\s*?/,
      $._end_comment_arg,
    ),

    // text: _ => /[^<>&\s]([^<>&]*[^<>&\s])?/,
    include_keyword: $ => '#include',
    include_arg: $ => /[\w|\w-]+/,
    include_sub_arg: $ => /([^-]|-[^-]|--[^>])*/,

    ignoreif_comment: $ => seq(
      $._beggin_comment_arg,
      /\s*?/,
      $.ignoreif_keyword,
      /\s+/,
      $.ignoreif_arg,
      optional(repeat(seq(
        /\s*?/,
        choice(optional($.ignoreif_keyword), $.element))  // Allow additional nodes
      )),
      /\s*?/,
      $._end_comment_arg,
    ),


    ignoreif_keyword: $ => '#ignoreif',
    ignoreif_arg: $ => /[^\n]+/,
    ignoreif_sub_arg: $ => /([^-]|-[^-]|--[^>])*/,
    normal_comment: $ => seq(
      $._beggin_comment_arg,
      optional(/\s*?/),
      seq(
        /[^#]/,
        /([^-]|-[^-]|--[^>])*/),
      $._end_comment_arg,
    ),
    _beggin_comment_arg: $ => '<!--',
    _end_comment_arg: $ => '-->',
    // end custom part

    element: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        choice($.end_tag, $._implicit_end_tag),
      ),
      $.self_closing_tag,
    ),

    script_element: $ => seq(
      alias($.script_start_tag, $.start_tag),
      optional($.raw_text),
      $.end_tag,
    ),

    style_element: $ => seq(
      alias($.style_start_tag, $.start_tag),
      optional($.raw_text),
      $.end_tag,
    ),

    start_tag: $ => seq(
      '<',
      alias($._start_tag_name, $.tag_name),
      repeat($.attribute),
      '>',
    ),

    script_start_tag: $ => seq(
      '<',
      alias($._script_start_tag_name, $.tag_name),
      repeat($.attribute),
      '>',
    ),

    style_start_tag: $ => seq(
      '<',
      alias($._style_start_tag_name, $.tag_name),
      repeat($.attribute),
      '>',
    ),

    self_closing_tag: $ => seq(
      '<',
      alias($._start_tag_name, $.tag_name),
      repeat($.attribute),
      '/>',
    ),

    end_tag: $ => seq(
      '</',
      alias($._end_tag_name, $.tag_name),
      '>',
    ),

    erroneous_end_tag: $ => seq(
      '</',
      $.erroneous_end_tag_name,
      '>',
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(seq(
        '=',
        choice(
          $.attribute_value,
          $.quoted_attribute_value,
        ),
      )),
    ),

    attribute_name: _ => /[^<>"'/=\s]+/,

    attribute_value: _ => /[^<>"'=\s]+/,

    // An entity can be named, numeric (decimal), or numeric (hexacecimal). The
    // longest entity name is 29 characters long, and the HTML spec says that
    // no more will ever be added.
    entity: _ => /&(#([xX][0-9a-fA-F]{1,6}|[0-9]{1,5})|[A-Za-z]{1,30});?/,

    quoted_attribute_value: $ => choice(
      seq('\'', optional(alias(/[^']+/, $.attribute_value)), '\''),
      seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
    ),

    text: _ => /[^<>&\s]([^<>&]*[^<>&\s])?/,
  },
});
