; Function definitions

(function_definition
  name: (identifier) @function)

; Call expression
(call_expression
  target: (identifier) @function)

; Identifiers

(parameter (identifier) @parameter)
(type) @type
(identifier) @variable
(number) @number

; Operators

[
  "-"
  "+"
  "="
  ">"
  "<"
  "=>"
  "<="
  "=="
  "!="
] @operator

; Keywords

[
  "funk"
  "return"
  "let"
  "for"
  "if"
  "else"
] @keyword

; Punctuation
["(" ")" "{" "}"]  @punctuation.bracket
["," ":" ";"] @punctuation.delimiter
