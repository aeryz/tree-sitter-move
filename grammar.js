/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const numeric_types = [
  'u8',
  'u64',
  'u128',
];

const primitive_types = numeric_types.concat(['bool', 'address']);

module.exports = grammar({
  name: 'move',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  word: $ => $.identifier,

  rules: {
    module: $ => seq(
      'module',
      $.hex_address,
      '::',
      $.identifier,
      $.module_body,
    ),
    module_body: $ => seq(
      '{',
      repeat($._declaration_statement),
      '}',
    ),

    _statement: $ => choice(
      $.expression_statement,
      $._declaration_statement,
    ),

    expression_statement: $ => choice(
      seq($._expression, ';'),
      prec(1, $._expression_ending_with_block),
    ),

    _declaration_statement: $ => choice(
      // $.struct_definition,
      // $.resource_definition,
      $.function_item,
      $.use_declaration,
    ),

    // Section - Declarations

    // attribute_item: $ => seq(
    //   '#',
    //   '[',
    //   $.attribute,
    //   ']',
    // ),

    // attribute: $ => seq(
    //   $._path,
    //   optional(choice(
    //     seq('=', field('value', $._expression)),
    //     field('arguments', alias($.delim_token_tree, $.token_tree)),
    //   )),
    // ),

    function_item: $ => seq(
      optional($.visibility_modifier),
      // optional($.function_modifiers),
      'fun',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameters)),
      field('parameters', $.parameters),
      optional(seq(':', field('return_type', $._type))),
      // optional($.where_clause),
      field('body', $.block),
    ),

    visibility_modifier: _ =>
      choice('public'),

    // trait_bounds: $ => seq(
    //   ':',
    //   sepBy1('+', choice(
    //     $._type,
    //   )),
    // ),

    type_parameters: $ => prec(1, seq(
      '<',
      sepBy1(',', choice(
        $._type_identifier,
        // $.constrained_type_parameter,
        // $.optional_type_parameter,
        // $.const_parameter,
      )),
      optional(','),
      '>',
    )),

    // constrained_type_parameter: $ => seq(
    //   field('left', $._type_identifier),
    //   field('bounds', $.trait_bounds),
    // ),

    parameters: $ => seq(
      '(',
      sepBy(',', seq(
        // optional($.attribute_item),
        choice(
          $.parameter,
          // $.self_parameter,
          // $.variadic_parameter,
          '_',
          $._type,
        ))),
      optional(','),
      ')',
    ),

    parameter: $ => seq(
      $.identifier,
      ':',
      field('type', $._type),
    ),

    use_declaration: $ => seq(
      // optional($.visibility_modifier),
      'use',
      field('argument', $._use_clause),
      ';',
    ),

    _use_clause: $ => choice(
      $._path,
      // $.use_as_clause,
      // $.use_list,
      // $.scoped_use_list,
      // $.use_wildcard,
    ),

    // scoped_use_list: $ => seq(
    //   field('path', optional($._path)),
    //   '::',
    //   field('list', $.use_list),
    // ),


    // Types

    _type: $ => choice(
      // $.abstract_type,
      $.reference_type,
      // $.metavariable,
      // $.pointer_type,
      // $.generic_type,
      // $.scoped_type_identifier,
      // $.tuple_type,
      // $.unit_type,
      // $.array_type,
      // $.function_type,
      $._type_identifier,
      // $.macro_invocation,
      // $.empty_type,
      // $.dynamic_type,
      // $.bounded_type,
      alias(choice(...primitive_types), $.primitive_type),
    ),

    reference_type: $ => seq('&', field('type', $._type)),

    mutable_specifier: _ => 'mut',

    // Section - Expressions

    _expression_except_range: $ => choice(
      $.unary_expression,
      $.reference_expression,
      $.try_expression,
      $.binary_expression,
      $.assignment_expression,
      $.compound_assignment_expr,
      $.type_cast_expression,
      $.call_expression,
      $.return_expression,
      $.yield_expression,
      $._literal,
      prec.left($.identifier),
      alias(choice(...primitive_types), $.identifier),
      // prec.left($._reserved_identifier),
      $.self,
      $.scoped_identifier,
      $.generic_function,
      $.await_expression,
      $.field_expression,
      $.array_expression,
      $.tuple_expression,
      // prec(1, $.macro_invocation),
      $.unit_expression,
      $.break_expression,
      $.continue_expression,
      $.index_expression,
      $.metavariable,
      $.closure_expression,
      $.parenthesized_expression,
      $.struct_expression,
      $._expression_ending_with_block,
    ),

    _expression: $ => choice(
      $._expression_except_range,
      // $.range_expression,
    ),

    _expression_ending_with_block: $ => choice(
      $.unsafe_block,
      $.async_block,
      $.block,
      $.if_expression,
      $.match_expression,
      $.while_expression,
      $.loop_expression,
      $.for_expression,
      $.const_block,
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      // optional($._expression),
      '}',
    ),

    delim_token_tree: $ => choice(
      seq('(', repeat($._delim_tokens), ')'),
      seq('[', repeat($._delim_tokens), ']'),
      seq('{', repeat($._delim_tokens), '}'),
    ),

    _delim_tokens: $ => choice(
      $._non_delim_token,
      alias($.delim_token_tree, $.token_tree),
    ),

    // Should match any token other than a delimiter.
    _non_delim_token: $ => choice(
      $._non_special_token,
      '$',
    ),

    scoped_identifier: $ => seq(
      field('path', optional(choice(
        $._path,
        // $.bracketed_type,
      ))),
      '::',
      field('name', $.identifier),
    ),

    // Matches non-delimiter tokens common to both macro invocations and
    // definitions. This is everything except $ and metavariables (which begin
    // with $).
    _non_special_token: $ => choice(
      // $._literal, $.identifier, // $.mutable_specifier, $.self, $.super, $.crate,
      alias(choice(...primitive_types), $.primitive_type),
      /[/_\-=->,;:::!=?.@*&#%^+<>|~]+/,
      '\'',
      'as', 'async', 'await', 'break', 'const', 'continue', 'default', 'enum', 'fn', 'for', 'if', 'impl',
      'let', 'loop', 'match', 'mod', 'pub', 'return', 'static', 'struct', 'trait', 'type',
      'union', 'unsafe', 'use', 'where', 'while',
    ),

    number: _ => {
      // const hex_literal = seq(
      //     choice('0x', '0X'),
      //     /[\da-fA-F](_?[\da-fA-F])*/,
      // );

      const decimal_digits = /\d(_?\d)*/;
      const signed_integer = seq(optional(choice('-', '+')), decimal_digits);
      const exponent_part = seq(choice('e', 'E'), signed_integer);

      // const binary_literal = seq(choice('0b', '0B'), /[0-1](_?[0-1])*/);

      // const octal_literal = seq(choice('0o', '0O'), /[0-7](_?[0-7])*/);

      const decimal_integer_literal = choice(
        '0',
        seq(
          optional('0'),
          /[1-9]/,
          optional(seq(optional('_'), decimal_digits)),
        ),
      );

      const decimal_literal = choice(
        // eslint-disable-next-line max-len
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq('.', decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, exponent_part),
        seq(decimal_digits),
      );

      return token(choice(
        // hex_literal,
        decimal_literal,
        // binary_literal,
        // octal_literal,
      ));
    },

    hex_address: _ => seq(
      choice('0x', '0X'),
      /[\da-fA-F](_?[\da-fA-F])*/,
    ),

    _path: $ => choice(
      // $.self,
      alias(choice(...primitive_types), $.identifier),
      // $.metavariable,
      // $.super,
      // $.crate,
      $.identifier,
      $.scoped_identifier,
      // $._reserved_identifier,
    ),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    _type_identifier: $ => alias($.identifier, $.type_identifier),
    _field_identifier: $ => alias($.identifier, $.field_identifier),


    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
