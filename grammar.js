module.exports = grammar({
  name: 'Tucan',

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
              seq($.identifier, optional(field('type', seq(':', $._type))))
            ),
            optional(',')
          )
        ),
      ')'
    ),

    return_type: $ => seq(
      '->',
      $._type,
    ),

    _type: $ => choice(
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
      $.return_statement
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

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.binary_expression,
    ),

    binary_expression: $ => choice(
      prec.left(2, seq($._expression, field('op', '-'), $._expression)),
      prec.left(2, seq($._expression, field('op', '+'), $._expression)),
      prec.left(1, seq($._expression, field('op', '>'), $._expression)),
      prec.left(1, seq($._expression, field('op', '=>'), $._expression)),
      prec.left(1, seq($._expression, field('op', '<'), $._expression)),
      prec.left(1, seq($._expression, field('op', '<='), $._expression)),
      prec.left(1, seq($._expression, field('op', '=='), $._expression)),
      prec.left(1, seq($._expression, field('op', '!='), $._expression)),
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