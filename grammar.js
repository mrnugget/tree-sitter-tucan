module.exports = grammar({
  name: 'tucan',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'funk',
      field('name', $.identifier),
      $.parameter_list,
      optional($.return_type),
      $.block
    ),

    parameter_list: $ => seq(
      '(',
        optional(
          seq(
            commaSep(
              seq($.identifier, optional(field('type', seq(':', $.type))))
            ),
            optional(',')
          )
        ),
      ')'
    ),

    return_type: $ => seq(
      '->',
      $.type,
    ),

    type: $ => choice(
      'bool',
      'string',
      'int'
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.expression_statement,
      $.return_statement,
      $.let_statement
      // TODO: other kinds of statements
    ),

    expression_statement: $ => seq(
      $._expression,
      ';'
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    let_statement: $ => seq(
      'let',
      field('name', $.identifier),
      optional(seq(':', $.type)),
      field('operator', '='),
      field('value', $._expression),
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.binary_expression,
    ),

    binary_expression: $ => choice(
      prec.left(2, seq(field('left', $._expression), field('operator', choice('-', '+')), field('right', $._expression))),
      prec.left(1, seq(field('left', $._expression), field('operator', choice('>', '<', '=>', '<=', '==', '!=')), field('right', $._expression))),
    ),

    identifier: $ => /[a-z]+/,

    number: $ => /\d+/
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
function commaSep(rule) {
  return optional(commaSep1(rule))
}
