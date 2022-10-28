module.exports = grammar({
  name: 'tucan',

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($.function_definition),

    function_definition: $ =>
      seq(
        'funk',
        field('name', $.identifier),
        $.parameter_list,
        optional($.return_type),
        $.block
      ),

    parameter_list: $ =>
      seq('(', optional(seq(commaSep($.parameter), optional(','))), ')'),

    parameter: $ =>
      seq($.identifier, optional(field('type', seq(':', $.type)))),

    return_type: $ => seq('->', $.type),

    type: $ => choice('bool', 'string', 'int'),

    block: $ => seq('{', repeat($._statement), '}'),

    _statement: $ =>
      seq(
        choice(
          $.expression_statement,
          $.return_statement,
          $.let_statement,
          $.for_loop_statement
        ),
        optional(';')
      ),

    comment: $ => $._line_comment,

    _line_comment: $ => token(seq('//', /.*/)),

    expression_statement: $ => $._expression,

    return_statement: $ => seq('return', $._expression),

    let_statement: $ =>
      seq(
        'let',
        field('name', $.identifier),
        optional(seq(':', $.type)),
        field('operator', '='),
        field('value', $._expression)
      ),

    for_loop_statement: $ =>
      seq(
        'for',
        '(',
        optional(field('initializer', $.let_statement)),
        ';',
        optional(field('condition', $._expression)),
        ';',
        optional(field('increment', $._expression)),
        ')',
        field('body', $.block)
      ),

    _expression: $ =>
      choice(
        $.if_expression,
        $.true,
        $.false,
        $.identifier,
        $.number,
        $.string,
        $.assignment_expression,
        $.binary_expression,
        $.call_expression
      ),

    binary_expression: $ =>
      choice(
        prec.left(
          4,
          seq(
            field('left', $._expression),
            field('operator', choice('-', '+')),
            field('right', $._expression)
          )
        ),
        prec.left(
          3,
          seq(
            field('left', $._expression),
            field('operator', choice('>', '<', '=>', '<=', '==', '!=')),
            field('right', $._expression)
          )
        )
      ),

    assignment_expression: $ =>
      prec.left(
        2,
        seq(
          field('left', $._expression),
          field('operator', '='),
          field('right', $._expression)
        )
      ),

    call_expression: $ =>
      seq(field('target', $.identifier), field('args', $.argument_list)),

    if_expression: $ =>
      seq(
        'if',
        '(',
        field('condition', $._expression),
        ')',
        field('consequence', $.block),
        optional(seq('else', field('alternative', $.block)))
      ),

    argument_list: $ =>
      seq('(', optional(seq(commaSep($._expression), optional(','))), ')'),

    _boolean_literal: $ => choice($.true, $.false),

    true: $ => 'true',
    false: $ => 'false',

    identifier: $ => /[a-zA-Z_]+\d*/,

    number: $ => /\d+/,

    string: $ => seq('"', /[^"]*/, '"'),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
