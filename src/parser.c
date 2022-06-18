#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_return = 13,
  anon_sym_let = 14,
  anon_sym_EQ = 15,
  anon_sym_for = 16,
  anon_sym_DASH = 17,
  anon_sym_PLUS = 18,
  anon_sym_GT = 19,
  anon_sym_LT = 20,
  anon_sym_EQ_GT = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_if = 25,
  anon_sym_else = 26,
  sym_true = 27,
  sym_false = 28,
  sym_identifier = 29,
  sym_number = 30,
  sym_source_file = 31,
  sym_function_definition = 32,
  sym_parameter_list = 33,
  sym_parameter = 34,
  sym_return_type = 35,
  sym_type = 36,
  sym_block = 37,
  sym__statement = 38,
  sym_expression_statement = 39,
  sym_return_statement = 40,
  sym_let_statement = 41,
  sym_for_loop_statement = 42,
  sym__expression = 43,
  sym_binary_expression = 44,
  sym_assignment_expression = 45,
  sym_call_expression = 46,
  sym_if_expression = 47,
  sym_argument_list = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_parameter_list_repeat1 = 50,
  aux_sym_block_repeat1 = 51,
  aux_sym_argument_list_repeat1 = 52,
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
  [anon_sym_else] = "else",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_return_type] = "return_type",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
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
  [anon_sym_else] = anon_sym_else,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_return_type] = sym_return_type,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
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
  [anon_sym_else] = {
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
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_funk);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
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
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [anon_sym_else] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(133),
    [sym_function_definition] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_funk] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_argument_list,
    ACTIONS(11), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(9), 12,
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
  [32] = 2,
    ACTIONS(15), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(13), 12,
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
  [58] = 2,
    ACTIONS(19), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(17), 12,
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
  [84] = 2,
    ACTIONS(23), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(21), 12,
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
  [110] = 2,
    ACTIONS(27), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(25), 12,
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
  [136] = 2,
    ACTIONS(31), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(29), 12,
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
  [162] = 2,
    ACTIONS(35), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(33), 12,
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
  [188] = 2,
    ACTIONS(39), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(37), 12,
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
  [214] = 11,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(51), 2,
      sym_true,
      sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(24), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [257] = 2,
    ACTIONS(57), 10,
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
    ACTIONS(59), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_identifier,
  [282] = 11,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      anon_sym_return,
    ACTIONS(66), 1,
      anon_sym_let,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(72), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(75), 2,
      sym_true,
      sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(24), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [325] = 11,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      sym_true,
      sym_false,
    STATE(14), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(24), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [368] = 11,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      sym_true,
      sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(24), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [411] = 11,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      sym_true,
      sym_false,
    STATE(17), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(24), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [454] = 11,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      sym_true,
      sym_false,
    STATE(10), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(24), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [497] = 11,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      sym_true,
      sym_false,
    STATE(12), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(24), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [540] = 2,
    ACTIONS(94), 10,
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
    ACTIONS(96), 10,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_identifier,
  [565] = 3,
    ACTIONS(102), 1,
      anon_sym_else,
    ACTIONS(100), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(98), 10,
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
  [592] = 6,
    ACTIONS(108), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(110), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(104), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(112), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [624] = 2,
    ACTIONS(96), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(94), 10,
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
  [648] = 6,
    ACTIONS(108), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(110), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(112), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(118), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [680] = 5,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(110), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(112), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(122), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [710] = 6,
    ACTIONS(108), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(110), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(112), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [742] = 3,
    ACTIONS(110), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(13), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
    ACTIONS(15), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [768] = 2,
    ACTIONS(59), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(57), 10,
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
  [792] = 6,
    ACTIONS(108), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(110), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(112), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(130), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [824] = 2,
    ACTIONS(96), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(94), 13,
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
  [844] = 2,
    ACTIONS(59), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(57), 13,
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
  [864] = 3,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(100), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(98), 10,
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
  [884] = 3,
    ACTIONS(15), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(13), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [903] = 7,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [930] = 7,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(152), 2,
      sym_true,
      sym_false,
    STATE(32), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [957] = 5,
    ACTIONS(122), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [980] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      sym_number,
    ACTIONS(158), 2,
      sym_true,
      sym_false,
    STATE(72), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1004] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      sym_number,
    ACTIONS(164), 2,
      sym_true,
      sym_false,
    STATE(66), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1028] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(170), 2,
      sym_true,
      sym_false,
    STATE(75), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1052] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(178), 1,
      sym_number,
    ACTIONS(176), 2,
      sym_true,
      sym_false,
    STATE(70), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1076] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      sym_number,
    ACTIONS(182), 2,
      sym_true,
      sym_false,
    STATE(54), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1100] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(190), 1,
      sym_number,
    ACTIONS(188), 2,
      sym_true,
      sym_false,
    STATE(42), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1124] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 1,
      sym_number,
    ACTIONS(194), 2,
      sym_true,
      sym_false,
    STATE(73), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1148] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1170] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(190), 1,
      sym_number,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 2,
      sym_true,
      sym_false,
    STATE(42), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1194] = 5,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(202), 2,
      sym_true,
      sym_false,
    STATE(27), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1215] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(206), 2,
      sym_true,
      sym_false,
    STATE(76), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1236] = 5,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym_number,
    ACTIONS(210), 2,
      sym_true,
      sym_false,
    STATE(3), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1257] = 5,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(216), 1,
      sym_number,
    ACTIONS(214), 2,
      sym_true,
      sym_false,
    STATE(25), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1278] = 2,
    ACTIONS(218), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(220), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1293] = 2,
    ACTIONS(222), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(224), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1308] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(228), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_true,
      sym_false,
    STATE(56), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1329] = 2,
    ACTIONS(230), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(232), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1344] = 5,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1365] = 5,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(234), 2,
      sym_true,
      sym_false,
    STATE(20), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1386] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1407] = 2,
    ACTIONS(240), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(242), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1422] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1443] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1464] = 3,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(248), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(252), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1481] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(254), 2,
      sym_true,
      sym_false,
    STATE(57), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1502] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(258), 2,
      sym_true,
      sym_false,
    STATE(34), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1523] = 2,
    ACTIONS(262), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(264), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1538] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(212), 1,
      sym_number,
    ACTIONS(210), 2,
      sym_true,
      sym_false,
    STATE(3), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1559] = 2,
    ACTIONS(266), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(268), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1574] = 2,
    ACTIONS(270), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(272), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1589] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(190), 1,
      sym_number,
    ACTIONS(188), 2,
      sym_true,
      sym_false,
    STATE(42), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1610] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1631] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(278), 1,
      sym_number,
    ACTIONS(276), 2,
      sym_true,
      sym_false,
    STATE(52), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1652] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(282), 1,
      sym_number,
    ACTIONS(280), 2,
      sym_true,
      sym_false,
    STATE(31), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1673] = 5,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(286), 1,
      sym_number,
    ACTIONS(284), 2,
      sym_true,
      sym_false,
    STATE(23), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1694] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1715] = 5,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_number,
    ACTIONS(290), 2,
      sym_true,
      sym_false,
    STATE(22), 5,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
  [1736] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1757] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1778] = 2,
    ACTIONS(298), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(300), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1793] = 5,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1814] = 5,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(142), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1835] = 2,
    ACTIONS(304), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(306), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1849] = 4,
    ACTIONS(308), 1,
      anon_sym_DASH_GT,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_return_type,
    STATE(119), 1,
      sym_block,
  [1862] = 4,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(89), 1,
      sym_parameter,
  [1875] = 3,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_funk,
    STATE(80), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [1886] = 2,
    STATE(123), 1,
      sym_type,
    ACTIONS(323), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [1895] = 2,
    STATE(96), 1,
      sym_type,
    ACTIONS(323), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [1904] = 3,
    ACTIONS(5), 1,
      anon_sym_funk,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    STATE(80), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [1915] = 1,
    ACTIONS(327), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1922] = 2,
    STATE(129), 1,
      sym_type,
    ACTIONS(323), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [1931] = 2,
    STATE(131), 1,
      sym_type,
    ACTIONS(323), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [1940] = 2,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1948] = 3,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_argument_list_repeat1,
  [1958] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_parameter_list_repeat1,
  [1968] = 3,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_argument_list_repeat1,
  [1978] = 3,
    ACTIONS(316), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_parameter,
  [1988] = 3,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_parameter_list_repeat1,
  [1998] = 3,
    ACTIONS(316), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_parameter,
  [2008] = 3,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameter_list_repeat1,
  [2018] = 3,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      anon_sym_let,
    STATE(126), 1,
      sym_let_statement,
  [2028] = 1,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2033] = 2,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_EQ,
  [2040] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [2047] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
  [2054] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_block,
  [2061] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
  [2068] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
  [2075] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [2082] = 2,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [2089] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
  [2096] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
  [2103] = 2,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_EQ,
  [2110] = 2,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_parameter_list,
  [2117] = 1,
    ACTIONS(373), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [2122] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_block,
  [2129] = 2,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(116), 1,
      sym_parameter,
  [2136] = 1,
    ACTIONS(375), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [2141] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [2148] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_block,
  [2155] = 2,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
  [2162] = 1,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2167] = 1,
    ACTIONS(377), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [2172] = 1,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [2177] = 1,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [2182] = 1,
    ACTIONS(383), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [2187] = 1,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
  [2191] = 1,
    ACTIONS(387), 1,
      sym_identifier,
  [2195] = 1,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
  [2199] = 1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [2203] = 1,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
  [2207] = 1,
    ACTIONS(395), 1,
      anon_sym_SEMI,
  [2211] = 1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
  [2215] = 1,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
  [2219] = 1,
    ACTIONS(397), 1,
      anon_sym_EQ,
  [2223] = 1,
    ACTIONS(399), 1,
      sym_identifier,
  [2227] = 1,
    ACTIONS(401), 1,
      anon_sym_EQ,
  [2231] = 1,
    ACTIONS(403), 1,
      sym_identifier,
  [2235] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 325,
  [SMALL_STATE(14)] = 368,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 540,
  [SMALL_STATE(19)] = 565,
  [SMALL_STATE(20)] = 592,
  [SMALL_STATE(21)] = 624,
  [SMALL_STATE(22)] = 648,
  [SMALL_STATE(23)] = 680,
  [SMALL_STATE(24)] = 710,
  [SMALL_STATE(25)] = 742,
  [SMALL_STATE(26)] = 768,
  [SMALL_STATE(27)] = 792,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 844,
  [SMALL_STATE(30)] = 864,
  [SMALL_STATE(31)] = 884,
  [SMALL_STATE(32)] = 903,
  [SMALL_STATE(33)] = 930,
  [SMALL_STATE(34)] = 957,
  [SMALL_STATE(35)] = 980,
  [SMALL_STATE(36)] = 1004,
  [SMALL_STATE(37)] = 1028,
  [SMALL_STATE(38)] = 1052,
  [SMALL_STATE(39)] = 1076,
  [SMALL_STATE(40)] = 1100,
  [SMALL_STATE(41)] = 1124,
  [SMALL_STATE(42)] = 1148,
  [SMALL_STATE(43)] = 1170,
  [SMALL_STATE(44)] = 1194,
  [SMALL_STATE(45)] = 1215,
  [SMALL_STATE(46)] = 1236,
  [SMALL_STATE(47)] = 1257,
  [SMALL_STATE(48)] = 1278,
  [SMALL_STATE(49)] = 1293,
  [SMALL_STATE(50)] = 1308,
  [SMALL_STATE(51)] = 1329,
  [SMALL_STATE(52)] = 1344,
  [SMALL_STATE(53)] = 1365,
  [SMALL_STATE(54)] = 1386,
  [SMALL_STATE(55)] = 1407,
  [SMALL_STATE(56)] = 1422,
  [SMALL_STATE(57)] = 1443,
  [SMALL_STATE(58)] = 1464,
  [SMALL_STATE(59)] = 1481,
  [SMALL_STATE(60)] = 1502,
  [SMALL_STATE(61)] = 1523,
  [SMALL_STATE(62)] = 1538,
  [SMALL_STATE(63)] = 1559,
  [SMALL_STATE(64)] = 1574,
  [SMALL_STATE(65)] = 1589,
  [SMALL_STATE(66)] = 1610,
  [SMALL_STATE(67)] = 1631,
  [SMALL_STATE(68)] = 1652,
  [SMALL_STATE(69)] = 1673,
  [SMALL_STATE(70)] = 1694,
  [SMALL_STATE(71)] = 1715,
  [SMALL_STATE(72)] = 1736,
  [SMALL_STATE(73)] = 1757,
  [SMALL_STATE(74)] = 1778,
  [SMALL_STATE(75)] = 1793,
  [SMALL_STATE(76)] = 1814,
  [SMALL_STATE(77)] = 1835,
  [SMALL_STATE(78)] = 1849,
  [SMALL_STATE(79)] = 1862,
  [SMALL_STATE(80)] = 1875,
  [SMALL_STATE(81)] = 1886,
  [SMALL_STATE(82)] = 1895,
  [SMALL_STATE(83)] = 1904,
  [SMALL_STATE(84)] = 1915,
  [SMALL_STATE(85)] = 1922,
  [SMALL_STATE(86)] = 1931,
  [SMALL_STATE(87)] = 1940,
  [SMALL_STATE(88)] = 1948,
  [SMALL_STATE(89)] = 1958,
  [SMALL_STATE(90)] = 1968,
  [SMALL_STATE(91)] = 1978,
  [SMALL_STATE(92)] = 1988,
  [SMALL_STATE(93)] = 1998,
  [SMALL_STATE(94)] = 2008,
  [SMALL_STATE(95)] = 2018,
  [SMALL_STATE(96)] = 2028,
  [SMALL_STATE(97)] = 2033,
  [SMALL_STATE(98)] = 2040,
  [SMALL_STATE(99)] = 2047,
  [SMALL_STATE(100)] = 2054,
  [SMALL_STATE(101)] = 2061,
  [SMALL_STATE(102)] = 2068,
  [SMALL_STATE(103)] = 2075,
  [SMALL_STATE(104)] = 2082,
  [SMALL_STATE(105)] = 2089,
  [SMALL_STATE(106)] = 2096,
  [SMALL_STATE(107)] = 2103,
  [SMALL_STATE(108)] = 2110,
  [SMALL_STATE(109)] = 2117,
  [SMALL_STATE(110)] = 2122,
  [SMALL_STATE(111)] = 2129,
  [SMALL_STATE(112)] = 2136,
  [SMALL_STATE(113)] = 2141,
  [SMALL_STATE(114)] = 2148,
  [SMALL_STATE(115)] = 2155,
  [SMALL_STATE(116)] = 2162,
  [SMALL_STATE(117)] = 2167,
  [SMALL_STATE(118)] = 2172,
  [SMALL_STATE(119)] = 2177,
  [SMALL_STATE(120)] = 2182,
  [SMALL_STATE(121)] = 2187,
  [SMALL_STATE(122)] = 2191,
  [SMALL_STATE(123)] = 2195,
  [SMALL_STATE(124)] = 2199,
  [SMALL_STATE(125)] = 2203,
  [SMALL_STATE(126)] = 2207,
  [SMALL_STATE(127)] = 2211,
  [SMALL_STATE(128)] = 2215,
  [SMALL_STATE(129)] = 2219,
  [SMALL_STATE(130)] = 2223,
  [SMALL_STATE(131)] = 2227,
  [SMALL_STATE(132)] = 2231,
  [SMALL_STATE(133)] = 2235,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 12),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(121),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 5, .production_id = 6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 5, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6, .production_id = 7),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 6, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 15),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 15),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 14),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 14),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 13),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 13),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 11),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 11),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 9, .production_id = 16),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 9, .production_id = 16),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 10),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 10),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 9),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 9),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 6, .production_id = 8),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 6, .production_id = 8),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(65),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(111),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [405] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
