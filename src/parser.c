#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_funk = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COLON = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_bool = 7,
  anon_sym_string = 8,
  anon_sym_int = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_SEMI = 12,
  sym__line_comment = 13,
  anon_sym_return = 14,
  anon_sym_let = 15,
  anon_sym_EQ = 16,
  anon_sym_for = 17,
  anon_sym_DASH = 18,
  anon_sym_PLUS = 19,
  anon_sym_GT = 20,
  anon_sym_LT = 21,
  anon_sym_EQ_GT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_if = 26,
  anon_sym_assuming = 27,
  anon_sym_else = 28,
  anon_sym_otherwise = 29,
  sym_true = 30,
  sym_false = 31,
  sym_identifier = 32,
  sym_number = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_token1 = 35,
  sym_source_file = 36,
  sym_function_definition = 37,
  sym_parameter_list = 38,
  sym_parameter = 39,
  sym_return_type = 40,
  sym_type = 41,
  sym_block = 42,
  sym__statement = 43,
  sym_comment = 44,
  sym_expression_statement = 45,
  sym_return_statement = 46,
  sym_let_statement = 47,
  sym_for_loop_statement = 48,
  sym__expression = 49,
  sym_binary_expression = 50,
  sym_assignment_expression = 51,
  sym_call_expression = 52,
  sym_if_expression = 53,
  sym_argument_list = 54,
  sym_string = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_parameter_list_repeat1 = 57,
  aux_sym_block_repeat1 = 58,
  aux_sym_argument_list_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_funk] = "funk",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [sym__line_comment] = "_line_comment",
  [anon_sym_return] = "return",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "for",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_if] = "if",
  [anon_sym_assuming] = "assuming",
  [anon_sym_else] = "else",
  [anon_sym_otherwise] = "otherwise",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_return_type] = "return_type",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_let_statement] = "let_statement",
  [sym_for_loop_statement] = "for_loop_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_call_expression] = "call_expression",
  [sym_if_expression] = "if_expression",
  [sym_argument_list] = "argument_list",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_funk] = anon_sym_funk,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__line_comment] = sym__line_comment,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_assuming] = anon_sym_assuming,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_otherwise] = anon_sym_otherwise,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_return_type] = sym_return_type,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_expression_statement] = sym_expression_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_for_loop_statement] = sym_for_loop_statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_if_expression] = sym_if_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_funk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assuming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_otherwise] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_loop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_args = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_increment = 6,
  field_initializer = 7,
  field_left = 8,
  field_name = 9,
  field_operator = 10,
  field_right = 11,
  field_target = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_args] = "args",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_increment] = "increment",
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_target] = "target",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 1},
  [9] = {.index = 17, .length = 2},
  [10] = {.index = 19, .length = 2},
  [11] = {.index = 21, .length = 2},
  [12] = {.index = 23, .length = 3},
  [13] = {.index = 26, .length = 3},
  [14] = {.index = 29, .length = 3},
  [15] = {.index = 32, .length = 3},
  [16] = {.index = 35, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_type, 1},
    {field_type, 2},
  [3] =
    {field_args, 1},
    {field_target, 0},
  [5] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [8] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 3},
  [11] =
    {field_condition, 2},
    {field_consequence, 4},
  [13] =
    {field_name, 1},
    {field_operator, 4},
    {field_value, 5},
  [16] =
    {field_body, 5},
  [17] =
    {field_body, 6},
    {field_increment, 4},
  [19] =
    {field_body, 6},
    {field_condition, 3},
  [21] =
    {field_body, 6},
    {field_initializer, 2},
  [23] =
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [26] =
    {field_body, 7},
    {field_condition, 3},
    {field_increment, 5},
  [29] =
    {field_body, 7},
    {field_increment, 5},
    {field_initializer, 2},
  [32] =
    {field_body, 7},
    {field_condition, 4},
    {field_initializer, 2},
  [35] =
    {field_body, 8},
    {field_condition, 4},
    {field_increment, 6},
    {field_initializer, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_funk);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_assuming);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_assuming);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_otherwise);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_otherwise);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 137},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 0},
  [140] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_funk] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(3),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_assuming] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_otherwise] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(132),
    [sym_function_definition] = STATE(119),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_funk] = ACTIONS(7),
    [sym__line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_comment,
    STATE(10), 1,
      sym_argument_list,
    ACTIONS(13), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(11), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [40] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(3), 1,
      sym_comment,
    ACTIONS(17), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(15), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [74] = 16,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_block_repeat1,
    STATE(29), 1,
      sym__expression,
    STATE(69), 1,
      sym__statement,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(60), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [132] = 16,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(29), 1,
      sym__expression,
    STATE(69), 1,
      sym__statement,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(60), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [190] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(6), 1,
      sym_comment,
    ACTIONS(39), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(41), 12,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      anon_sym_else,
      anon_sym_otherwise,
      sym_true,
      sym_false,
      sym_identifier,
  [224] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(7), 1,
      sym_comment,
    ACTIONS(43), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(45), 12,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      anon_sym_else,
      anon_sym_otherwise,
      sym_true,
      sym_false,
      sym_identifier,
  [258] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(8), 1,
      sym_comment,
    ACTIONS(49), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(47), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [292] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(9), 1,
      sym_comment,
    ACTIONS(53), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(51), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [326] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(10), 1,
      sym_comment,
    ACTIONS(57), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(55), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [360] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(11), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_else,
      anon_sym_otherwise,
    ACTIONS(61), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(59), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [396] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(12), 1,
      sym_comment,
    ACTIONS(67), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(65), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [430] = 16,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_block_repeat1,
    STATE(29), 1,
      sym__expression,
    STATE(69), 1,
      sym__statement,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(60), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [488] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(14), 1,
      sym_comment,
    ACTIONS(73), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(71), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [522] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(15), 1,
      sym_comment,
    ACTIONS(77), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(75), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [556] = 16,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_block_repeat1,
    STATE(29), 1,
      sym__expression,
    STATE(69), 1,
      sym__statement,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(60), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [614] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(17), 1,
      sym_comment,
    ACTIONS(83), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(81), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [648] = 16,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_block_repeat1,
    STATE(29), 1,
      sym__expression,
    STATE(69), 1,
      sym__statement,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(60), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [706] = 15,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      anon_sym_return,
    ACTIONS(92), 1,
      anon_sym_let,
    ACTIONS(95), 1,
      anon_sym_for,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym__expression,
    STATE(69), 1,
      sym__statement,
    ACTIONS(98), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(101), 2,
      sym_true,
      sym_false,
    STATE(19), 2,
      sym_comment,
      aux_sym_block_repeat1,
    STATE(60), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [762] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(20), 1,
      sym_comment,
    ACTIONS(13), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(11), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [796] = 16,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_block_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(29), 1,
      sym__expression,
    STATE(69), 1,
      sym__statement,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(60), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [854] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(125), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(123), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(117), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [894] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(23), 1,
      sym_comment,
    ACTIONS(41), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(39), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [926] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(24), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(71), 9,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(73), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [960] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    STATE(25), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(123), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(129), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [998] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(125), 1,
      anon_sym_LT,
    STATE(26), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(123), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(133), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [1038] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(27), 1,
      sym_comment,
    ACTIONS(45), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(43), 11,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
  [1070] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(125), 1,
      anon_sym_LT,
    STATE(28), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(135), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(123), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(137), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [1110] = 8,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(125), 1,
      anon_sym_LT,
    STATE(29), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(139), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(123), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(141), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [1150] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(30), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(39), 14,
      ts_builtin_sym_end,
      anon_sym_funk,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_else,
      anon_sym_otherwise,
  [1177] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(31), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(43), 14,
      ts_builtin_sym_end,
      anon_sym_funk,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_else,
      anon_sym_otherwise,
  [1204] = 11,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_comment,
    STATE(66), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1244] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_comment,
    STATE(68), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1281] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(68), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1318] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    STATE(76), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1355] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(36), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(155), 2,
      anon_sym_else,
      anon_sym_otherwise,
    ACTIONS(59), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1382] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comment,
    STATE(80), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1419] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_comment,
    STATE(77), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1456] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    STATE(73), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1493] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_comment,
    STATE(79), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1530] = 10,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym_comment,
    STATE(74), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1567] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym__expression,
    STATE(42), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1601] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym__expression,
    STATE(43), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1635] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_comment,
    STATE(72), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1669] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_comment,
    STATE(78), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1703] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_comment,
    STATE(68), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1737] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_comment,
    STATE(64), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1771] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_comment,
    STATE(71), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1805] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym__expression,
    STATE(49), 1,
      sym_comment,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1839] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym__expression,
    STATE(50), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1873] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_comment,
    STATE(62), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1907] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1941] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1975] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym__expression,
    STATE(54), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_if,
      anon_sym_assuming,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [2009] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_comment,
    STATE(75), 1,
      sym__expression,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    ACTIONS(147), 2,
      anon_sym_if,
      anon_sym_assuming,
    STATE(20), 5,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [2043] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(167), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(169), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2066] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(171), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(173), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2089] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(177), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2112] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(59), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(181), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2135] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(187), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2160] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(61), 1,
      sym_comment,
    ACTIONS(189), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(191), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2183] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(62), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(71), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2208] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(63), 1,
      sym_comment,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(197), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2231] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(201), 1,
      anon_sym_LT,
    STATE(64), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2260] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(65), 1,
      sym_comment,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(205), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2283] = 9,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_EQ,
    STATE(66), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2316] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(67), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(215), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2339] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    STATE(68), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2367] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(69), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(221), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2389] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(70), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(225), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      anon_sym_assuming,
      sym_true,
      sym_false,
      sym_identifier,
  [2411] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2438] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2465] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2492] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2519] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2546] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2573] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2600] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    STATE(78), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2627] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2654] = 7,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2681] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(81), 1,
      sym_comment,
    ACTIONS(243), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [2694] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(82), 1,
      sym_comment,
    STATE(98), 1,
      sym_parameter,
  [2713] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(83), 1,
      sym_comment,
    STATE(137), 1,
      sym_type,
    ACTIONS(251), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [2728] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(84), 1,
      sym_comment,
    STATE(128), 1,
      sym_type,
    ACTIONS(251), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [2743] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(253), 1,
      anon_sym_DASH_GT,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_comment,
    STATE(111), 1,
      sym_block,
    STATE(114), 1,
      sym_return_type,
  [2762] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      anon_sym_funk,
    STATE(119), 1,
      sym_function_definition,
    STATE(86), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [2779] = 6,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(7), 1,
      anon_sym_funk,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      aux_sym_source_file_repeat1,
    STATE(87), 1,
      sym_comment,
    STATE(119), 1,
      sym_function_definition,
  [2798] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(88), 1,
      sym_comment,
    STATE(139), 1,
      sym_type,
    ACTIONS(251), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [2813] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(89), 1,
      sym_comment,
    STATE(124), 1,
      sym_type,
    ACTIONS(251), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [2828] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_argument_list_repeat1,
  [2844] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_comment,
    STATE(109), 1,
      sym_parameter,
  [2860] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [2874] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(93), 2,
      sym_comment,
      aux_sym_argument_list_repeat1,
  [2888] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_let,
    STATE(94), 1,
      sym_comment,
    STATE(129), 1,
      sym_let_statement,
  [2904] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_comment,
    STATE(109), 1,
      sym_parameter,
  [2920] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_parameter_list_repeat1,
    STATE(96), 1,
      sym_comment,
  [2936] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(286), 1,
      anon_sym_COLON,
    STATE(97), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2950] = 5,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_parameter_list_repeat1,
    STATE(98), 1,
      sym_comment,
  [2966] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_parameter_list,
    STATE(99), 1,
      sym_comment,
  [2979] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
    STATE(100), 1,
      sym_comment,
  [2992] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_block,
    STATE(101), 1,
      sym_comment,
  [3005] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(102), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [3016] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(103), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [3027] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(104), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [3038] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
    STATE(105), 1,
      sym_comment,
  [3051] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    STATE(106), 1,
      sym_comment,
  [3064] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    STATE(107), 1,
      sym_comment,
  [3077] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
    STATE(108), 1,
      sym_comment,
  [3090] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(109), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3101] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block,
    STATE(110), 1,
      sym_comment,
  [3114] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(111), 1,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [3125] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
    STATE(112), 1,
      sym_comment,
  [3138] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(113), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [3149] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_block,
    STATE(114), 1,
      sym_comment,
  [3162] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      anon_sym_EQ,
    STATE(115), 1,
      sym_comment,
  [3175] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(312), 1,
      anon_sym_COLON,
    ACTIONS(314), 1,
      anon_sym_EQ,
    STATE(116), 1,
      sym_comment,
  [3188] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
    STATE(117), 1,
      sym_comment,
  [3201] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(118), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [3212] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(119), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [3223] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
    STATE(120), 1,
      sym_comment,
  [3236] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_block,
    STATE(121), 1,
      sym_comment,
  [3249] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(109), 1,
      sym_parameter,
    STATE(122), 1,
      sym_comment,
  [3262] = 4,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    STATE(123), 1,
      sym_comment,
  [3275] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    STATE(124), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3286] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_comment,
  [3296] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(126), 1,
      sym_comment,
  [3306] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_comment,
  [3316] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_comment,
  [3326] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      sym_comment,
  [3336] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_comment,
  [3346] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(332), 1,
      sym_identifier,
    STATE(131), 1,
      sym_comment,
  [3356] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym_comment,
  [3366] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_comment,
  [3376] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_comment,
  [3386] = 3,
    ACTIONS(340), 1,
      sym__line_comment,
    ACTIONS(342), 1,
      aux_sym_string_token1,
    STATE(135), 1,
      sym_comment,
  [3396] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_comment,
  [3406] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(344), 1,
      anon_sym_EQ,
    STATE(137), 1,
      sym_comment,
  [3416] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(138), 1,
      sym_comment,
  [3426] = 3,
    ACTIONS(3), 1,
      sym__line_comment,
    ACTIONS(348), 1,
      anon_sym_EQ,
    STATE(139), 1,
      sym_comment,
  [3436] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 292,
  [SMALL_STATE(10)] = 326,
  [SMALL_STATE(11)] = 360,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 488,
  [SMALL_STATE(15)] = 522,
  [SMALL_STATE(16)] = 556,
  [SMALL_STATE(17)] = 614,
  [SMALL_STATE(18)] = 648,
  [SMALL_STATE(19)] = 706,
  [SMALL_STATE(20)] = 762,
  [SMALL_STATE(21)] = 796,
  [SMALL_STATE(22)] = 854,
  [SMALL_STATE(23)] = 894,
  [SMALL_STATE(24)] = 926,
  [SMALL_STATE(25)] = 960,
  [SMALL_STATE(26)] = 998,
  [SMALL_STATE(27)] = 1038,
  [SMALL_STATE(28)] = 1070,
  [SMALL_STATE(29)] = 1110,
  [SMALL_STATE(30)] = 1150,
  [SMALL_STATE(31)] = 1177,
  [SMALL_STATE(32)] = 1204,
  [SMALL_STATE(33)] = 1244,
  [SMALL_STATE(34)] = 1281,
  [SMALL_STATE(35)] = 1318,
  [SMALL_STATE(36)] = 1355,
  [SMALL_STATE(37)] = 1382,
  [SMALL_STATE(38)] = 1419,
  [SMALL_STATE(39)] = 1456,
  [SMALL_STATE(40)] = 1493,
  [SMALL_STATE(41)] = 1530,
  [SMALL_STATE(42)] = 1567,
  [SMALL_STATE(43)] = 1601,
  [SMALL_STATE(44)] = 1635,
  [SMALL_STATE(45)] = 1669,
  [SMALL_STATE(46)] = 1703,
  [SMALL_STATE(47)] = 1737,
  [SMALL_STATE(48)] = 1771,
  [SMALL_STATE(49)] = 1805,
  [SMALL_STATE(50)] = 1839,
  [SMALL_STATE(51)] = 1873,
  [SMALL_STATE(52)] = 1907,
  [SMALL_STATE(53)] = 1941,
  [SMALL_STATE(54)] = 1975,
  [SMALL_STATE(55)] = 2009,
  [SMALL_STATE(56)] = 2043,
  [SMALL_STATE(57)] = 2066,
  [SMALL_STATE(58)] = 2089,
  [SMALL_STATE(59)] = 2112,
  [SMALL_STATE(60)] = 2135,
  [SMALL_STATE(61)] = 2160,
  [SMALL_STATE(62)] = 2183,
  [SMALL_STATE(63)] = 2208,
  [SMALL_STATE(64)] = 2231,
  [SMALL_STATE(65)] = 2260,
  [SMALL_STATE(66)] = 2283,
  [SMALL_STATE(67)] = 2316,
  [SMALL_STATE(68)] = 2339,
  [SMALL_STATE(69)] = 2367,
  [SMALL_STATE(70)] = 2389,
  [SMALL_STATE(71)] = 2411,
  [SMALL_STATE(72)] = 2438,
  [SMALL_STATE(73)] = 2465,
  [SMALL_STATE(74)] = 2492,
  [SMALL_STATE(75)] = 2519,
  [SMALL_STATE(76)] = 2546,
  [SMALL_STATE(77)] = 2573,
  [SMALL_STATE(78)] = 2600,
  [SMALL_STATE(79)] = 2627,
  [SMALL_STATE(80)] = 2654,
  [SMALL_STATE(81)] = 2681,
  [SMALL_STATE(82)] = 2694,
  [SMALL_STATE(83)] = 2713,
  [SMALL_STATE(84)] = 2728,
  [SMALL_STATE(85)] = 2743,
  [SMALL_STATE(86)] = 2762,
  [SMALL_STATE(87)] = 2779,
  [SMALL_STATE(88)] = 2798,
  [SMALL_STATE(89)] = 2813,
  [SMALL_STATE(90)] = 2828,
  [SMALL_STATE(91)] = 2844,
  [SMALL_STATE(92)] = 2860,
  [SMALL_STATE(93)] = 2874,
  [SMALL_STATE(94)] = 2888,
  [SMALL_STATE(95)] = 2904,
  [SMALL_STATE(96)] = 2920,
  [SMALL_STATE(97)] = 2936,
  [SMALL_STATE(98)] = 2950,
  [SMALL_STATE(99)] = 2966,
  [SMALL_STATE(100)] = 2979,
  [SMALL_STATE(101)] = 2992,
  [SMALL_STATE(102)] = 3005,
  [SMALL_STATE(103)] = 3016,
  [SMALL_STATE(104)] = 3027,
  [SMALL_STATE(105)] = 3038,
  [SMALL_STATE(106)] = 3051,
  [SMALL_STATE(107)] = 3064,
  [SMALL_STATE(108)] = 3077,
  [SMALL_STATE(109)] = 3090,
  [SMALL_STATE(110)] = 3101,
  [SMALL_STATE(111)] = 3114,
  [SMALL_STATE(112)] = 3125,
  [SMALL_STATE(113)] = 3138,
  [SMALL_STATE(114)] = 3149,
  [SMALL_STATE(115)] = 3162,
  [SMALL_STATE(116)] = 3175,
  [SMALL_STATE(117)] = 3188,
  [SMALL_STATE(118)] = 3201,
  [SMALL_STATE(119)] = 3212,
  [SMALL_STATE(120)] = 3223,
  [SMALL_STATE(121)] = 3236,
  [SMALL_STATE(122)] = 3249,
  [SMALL_STATE(123)] = 3262,
  [SMALL_STATE(124)] = 3275,
  [SMALL_STATE(125)] = 3286,
  [SMALL_STATE(126)] = 3296,
  [SMALL_STATE(127)] = 3306,
  [SMALL_STATE(128)] = 3316,
  [SMALL_STATE(129)] = 3326,
  [SMALL_STATE(130)] = 3336,
  [SMALL_STATE(131)] = 3346,
  [SMALL_STATE(132)] = 3356,
  [SMALL_STATE(133)] = 3366,
  [SMALL_STATE(134)] = 3376,
  [SMALL_STATE(135)] = 3386,
  [SMALL_STATE(136)] = 3396,
  [SMALL_STATE(137)] = 3406,
  [SMALL_STATE(138)] = 3416,
  [SMALL_STATE(139)] = 3426,
  [SMALL_STATE(140)] = 3436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 12),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 5, .production_id = 6),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 5, .production_id = 6),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(135),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6, .production_id = 7),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 6, .production_id = 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 14),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 14),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 13),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 13),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 10),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 11),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 11),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 9),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 15),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 15),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 9, .production_id = 16),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 9, .production_id = 16),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 6, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 6, .production_id = 8),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(122),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(46),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tucan(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
