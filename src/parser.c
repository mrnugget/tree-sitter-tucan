#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_DQUOTE = 31,
  aux_sym_string_token1 = 32,
  sym_source_file = 33,
  sym_function_definition = 34,
  sym_parameter_list = 35,
  sym_parameter = 36,
  sym_return_type = 37,
  sym_type = 38,
  sym_block = 39,
  sym__statement = 40,
  sym_expression_statement = 41,
  sym_return_statement = 42,
  sym_let_statement = 43,
  sym_for_loop_statement = 44,
  sym__expression = 45,
  sym_binary_expression = 46,
  sym_assignment_expression = 47,
  sym_call_expression = 48,
  sym_if_expression = 49,
  sym_argument_list = 50,
  sym_string = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_parameter_list_repeat1 = 53,
  aux_sym_block_repeat1 = 54,
  aux_sym_argument_list_repeat1 = 55,
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
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(99);
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
      if (lookahead == '"') ADVANCE(99);
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
      if (lookahead == '"') ADVANCE(99);
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
      if (lookahead == '"') ADVANCE(99);
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
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(101);
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
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
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
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
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 100},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(136),
    [sym_function_definition] = STATE(79),
    [aux_sym_source_file_repeat1] = STATE(79),
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
    ACTIONS(9), 13,
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
  [33] = 12,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
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
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [80] = 12,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    STATE(9), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [127] = 2,
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
    ACTIONS(33), 13,
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
  [154] = 12,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(42), 1,
      anon_sym_let,
    ACTIONS(45), 1,
      anon_sym_for,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 2,
      sym_true,
      sym_false,
    STATE(6), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [201] = 2,
    ACTIONS(65), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(63), 13,
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
  [228] = 2,
    ACTIONS(69), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(67), 13,
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
  [255] = 12,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    STATE(6), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [302] = 12,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    STATE(13), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [349] = 2,
    ACTIONS(77), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
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
  [376] = 12,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    STATE(6), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [423] = 12,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      sym_true,
      sym_false,
    STATE(6), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(58), 4,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      sym_for_loop_statement,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [470] = 2,
    ACTIONS(85), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(83), 13,
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
  [497] = 2,
    ACTIONS(89), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(87), 13,
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
  [524] = 2,
    ACTIONS(93), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(91), 13,
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
  [551] = 2,
    ACTIONS(97), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(95), 13,
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
  [578] = 2,
    ACTIONS(101), 10,
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
    ACTIONS(99), 11,
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
  [604] = 3,
    ACTIONS(107), 1,
      anon_sym_else,
    ACTIONS(105), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(103), 11,
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
  [632] = 2,
    ACTIONS(111), 10,
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
    ACTIONS(109), 11,
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
  [658] = 2,
    ACTIONS(101), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(99), 11,
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
  [683] = 3,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 9,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(89), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [710] = 5,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(115), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(119), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(117), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [741] = 2,
    ACTIONS(111), 9,
      anon_sym_return,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(109), 11,
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
  [766] = 6,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(123), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(119), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(125), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [799] = 6,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(129), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(119), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(131), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [832] = 6,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(119), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [865] = 6,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(137), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(119), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [898] = 2,
    ACTIONS(101), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(99), 13,
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
  [918] = 2,
    ACTIONS(111), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(109), 13,
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
  [938] = 8,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(147), 2,
      sym_true,
      sym_false,
    STATE(54), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [969] = 3,
    ACTIONS(151), 1,
      anon_sym_else,
    ACTIONS(105), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(103), 10,
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
  [989] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      sym_number,
    ACTIONS(155), 2,
      sym_true,
      sym_false,
    STATE(69), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1017] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      sym_number,
    ACTIONS(161), 2,
      sym_true,
      sym_false,
    STATE(72), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1045] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      sym_number,
    ACTIONS(167), 2,
      sym_true,
      sym_false,
    STATE(71), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1073] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      sym_number,
    ACTIONS(173), 2,
      sym_true,
      sym_false,
    STATE(74), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1101] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      sym_number,
    ACTIONS(179), 2,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1129] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(185), 2,
      sym_true,
      sym_false,
    STATE(77), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1157] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      sym_number,
    ACTIONS(191), 2,
      sym_true,
      sym_false,
    STATE(78), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1185] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(181), 1,
      sym_number,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 2,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1213] = 6,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(197), 2,
      sym_true,
      sym_false,
    STATE(27), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1238] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(203), 1,
      sym_number,
    ACTIONS(201), 2,
      sym_true,
      sym_false,
    STATE(75), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1263] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(181), 1,
      sym_number,
    ACTIONS(179), 2,
      sym_true,
      sym_false,
    STATE(67), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1288] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      sym_number,
    ACTIONS(205), 2,
      sym_true,
      sym_false,
    STATE(70), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1313] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_number,
    ACTIONS(209), 2,
      sym_true,
      sym_false,
    STATE(76), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1338] = 3,
    ACTIONS(89), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1357] = 6,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_number,
    ACTIONS(215), 2,
      sym_true,
      sym_false,
    STATE(23), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1382] = 6,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      sym_number,
    ACTIONS(219), 2,
      sym_true,
      sym_false,
    STATE(15), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1407] = 6,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_number,
    ACTIONS(223), 2,
      sym_true,
      sym_false,
    STATE(22), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1432] = 6,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      sym_number,
    ACTIONS(227), 2,
      sym_true,
      sym_false,
    STATE(25), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1457] = 5,
    ACTIONS(117), 1,
      anon_sym_EQ,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1480] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(235), 2,
      sym_true,
      sym_false,
    STATE(46), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1505] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(241), 1,
      sym_number,
    ACTIONS(239), 2,
      sym_true,
      sym_false,
    STATE(68), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1530] = 7,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 1,
      anon_sym_EQ,
    STATE(96), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1557] = 6,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym_number,
    ACTIONS(249), 2,
      sym_true,
      sym_false,
    STATE(26), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1582] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(253), 2,
      sym_true,
      sym_false,
    STATE(51), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1607] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(221), 1,
      sym_number,
    ACTIONS(219), 2,
      sym_true,
      sym_false,
    STATE(15), 6,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
      sym_if_expression,
      sym_string,
  [1632] = 3,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(257), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(261), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1650] = 2,
    ACTIONS(263), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(265), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1666] = 2,
    ACTIONS(267), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(269), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1682] = 2,
    ACTIONS(271), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(273), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1698] = 2,
    ACTIONS(275), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(277), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1714] = 2,
    ACTIONS(279), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(281), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1730] = 2,
    ACTIONS(283), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(285), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1746] = 2,
    ACTIONS(287), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(289), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1762] = 2,
    ACTIONS(291), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(293), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1778] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1800] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1821] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1842] = 5,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1863] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1884] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1905] = 2,
    ACTIONS(305), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(307), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_for,
      anon_sym_if,
      sym_true,
      sym_false,
      sym_identifier,
  [1920] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1941] = 5,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1962] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1983] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2004] = 5,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2025] = 3,
    ACTIONS(5), 1,
      anon_sym_funk,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    STATE(87), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [2036] = 2,
    STATE(126), 1,
      sym_type,
    ACTIONS(319), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [2045] = 1,
    ACTIONS(321), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [2052] = 2,
    STATE(134), 1,
      sym_type,
    ACTIONS(319), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [2061] = 4,
    ACTIONS(323), 1,
      anon_sym_DASH_GT,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
    STATE(114), 1,
      sym_return_type,
  [2074] = 2,
    STATE(129), 1,
      sym_type,
    ACTIONS(319), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [2083] = 4,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(91), 1,
      sym_parameter,
  [2096] = 2,
    STATE(97), 1,
      sym_type,
    ACTIONS(319), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [2105] = 3,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      anon_sym_funk,
    STATE(87), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [2116] = 3,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_argument_list_repeat1,
  [2126] = 3,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(343), 1,
      anon_sym_let,
    STATE(132), 1,
      sym_let_statement,
  [2136] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_parameter_list_repeat1,
  [2146] = 3,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_parameter_list_repeat1,
  [2156] = 3,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_parameter,
  [2166] = 3,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_parameter_list_repeat1,
  [2176] = 3,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_parameter,
  [2186] = 2,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2194] = 3,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_argument_list_repeat1,
  [2204] = 1,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2209] = 2,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_parameter_list,
  [2216] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
  [2223] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
  [2230] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
  [2237] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
  [2244] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [2251] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
  [2258] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
  [2265] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_block,
  [2272] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [2279] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [2286] = 2,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_EQ,
  [2293] = 1,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [2298] = 1,
    ACTIONS(380), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [2303] = 2,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(118), 1,
      sym_parameter,
  [2310] = 1,
    ACTIONS(382), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [2315] = 2,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_block,
  [2322] = 2,
    ACTIONS(384), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_EQ,
  [2329] = 2,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [2336] = 2,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [2343] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2348] = 1,
    ACTIONS(388), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [2353] = 1,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [2358] = 1,
    ACTIONS(392), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [2363] = 1,
    ACTIONS(394), 1,
      sym_identifier,
  [2367] = 1,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
  [2371] = 1,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
  [2375] = 1,
    ACTIONS(400), 1,
      sym_identifier,
  [2379] = 1,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
  [2383] = 1,
    ACTIONS(404), 1,
      aux_sym_string_token1,
  [2387] = 1,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
  [2391] = 1,
    ACTIONS(408), 1,
      anon_sym_EQ,
  [2395] = 1,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
  [2399] = 1,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
  [2403] = 1,
    ACTIONS(412), 1,
      anon_sym_SEMI,
  [2407] = 1,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
  [2411] = 1,
    ACTIONS(414), 1,
      anon_sym_EQ,
  [2415] = 1,
    ACTIONS(416), 1,
      sym_identifier,
  [2419] = 1,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 497,
  [SMALL_STATE(16)] = 524,
  [SMALL_STATE(17)] = 551,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 632,
  [SMALL_STATE(21)] = 658,
  [SMALL_STATE(22)] = 683,
  [SMALL_STATE(23)] = 710,
  [SMALL_STATE(24)] = 741,
  [SMALL_STATE(25)] = 766,
  [SMALL_STATE(26)] = 799,
  [SMALL_STATE(27)] = 832,
  [SMALL_STATE(28)] = 865,
  [SMALL_STATE(29)] = 898,
  [SMALL_STATE(30)] = 918,
  [SMALL_STATE(31)] = 938,
  [SMALL_STATE(32)] = 969,
  [SMALL_STATE(33)] = 989,
  [SMALL_STATE(34)] = 1017,
  [SMALL_STATE(35)] = 1045,
  [SMALL_STATE(36)] = 1073,
  [SMALL_STATE(37)] = 1101,
  [SMALL_STATE(38)] = 1129,
  [SMALL_STATE(39)] = 1157,
  [SMALL_STATE(40)] = 1185,
  [SMALL_STATE(41)] = 1213,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1263,
  [SMALL_STATE(44)] = 1288,
  [SMALL_STATE(45)] = 1313,
  [SMALL_STATE(46)] = 1338,
  [SMALL_STATE(47)] = 1357,
  [SMALL_STATE(48)] = 1382,
  [SMALL_STATE(49)] = 1407,
  [SMALL_STATE(50)] = 1432,
  [SMALL_STATE(51)] = 1457,
  [SMALL_STATE(52)] = 1480,
  [SMALL_STATE(53)] = 1505,
  [SMALL_STATE(54)] = 1530,
  [SMALL_STATE(55)] = 1557,
  [SMALL_STATE(56)] = 1582,
  [SMALL_STATE(57)] = 1607,
  [SMALL_STATE(58)] = 1632,
  [SMALL_STATE(59)] = 1650,
  [SMALL_STATE(60)] = 1666,
  [SMALL_STATE(61)] = 1682,
  [SMALL_STATE(62)] = 1698,
  [SMALL_STATE(63)] = 1714,
  [SMALL_STATE(64)] = 1730,
  [SMALL_STATE(65)] = 1746,
  [SMALL_STATE(66)] = 1762,
  [SMALL_STATE(67)] = 1778,
  [SMALL_STATE(68)] = 1800,
  [SMALL_STATE(69)] = 1821,
  [SMALL_STATE(70)] = 1842,
  [SMALL_STATE(71)] = 1863,
  [SMALL_STATE(72)] = 1884,
  [SMALL_STATE(73)] = 1905,
  [SMALL_STATE(74)] = 1920,
  [SMALL_STATE(75)] = 1941,
  [SMALL_STATE(76)] = 1962,
  [SMALL_STATE(77)] = 1983,
  [SMALL_STATE(78)] = 2004,
  [SMALL_STATE(79)] = 2025,
  [SMALL_STATE(80)] = 2036,
  [SMALL_STATE(81)] = 2045,
  [SMALL_STATE(82)] = 2052,
  [SMALL_STATE(83)] = 2061,
  [SMALL_STATE(84)] = 2074,
  [SMALL_STATE(85)] = 2083,
  [SMALL_STATE(86)] = 2096,
  [SMALL_STATE(87)] = 2105,
  [SMALL_STATE(88)] = 2116,
  [SMALL_STATE(89)] = 2126,
  [SMALL_STATE(90)] = 2136,
  [SMALL_STATE(91)] = 2146,
  [SMALL_STATE(92)] = 2156,
  [SMALL_STATE(93)] = 2166,
  [SMALL_STATE(94)] = 2176,
  [SMALL_STATE(95)] = 2186,
  [SMALL_STATE(96)] = 2194,
  [SMALL_STATE(97)] = 2204,
  [SMALL_STATE(98)] = 2209,
  [SMALL_STATE(99)] = 2216,
  [SMALL_STATE(100)] = 2223,
  [SMALL_STATE(101)] = 2230,
  [SMALL_STATE(102)] = 2237,
  [SMALL_STATE(103)] = 2244,
  [SMALL_STATE(104)] = 2251,
  [SMALL_STATE(105)] = 2258,
  [SMALL_STATE(106)] = 2265,
  [SMALL_STATE(107)] = 2272,
  [SMALL_STATE(108)] = 2279,
  [SMALL_STATE(109)] = 2286,
  [SMALL_STATE(110)] = 2293,
  [SMALL_STATE(111)] = 2298,
  [SMALL_STATE(112)] = 2303,
  [SMALL_STATE(113)] = 2310,
  [SMALL_STATE(114)] = 2315,
  [SMALL_STATE(115)] = 2322,
  [SMALL_STATE(116)] = 2329,
  [SMALL_STATE(117)] = 2336,
  [SMALL_STATE(118)] = 2343,
  [SMALL_STATE(119)] = 2348,
  [SMALL_STATE(120)] = 2353,
  [SMALL_STATE(121)] = 2358,
  [SMALL_STATE(122)] = 2363,
  [SMALL_STATE(123)] = 2367,
  [SMALL_STATE(124)] = 2371,
  [SMALL_STATE(125)] = 2375,
  [SMALL_STATE(126)] = 2379,
  [SMALL_STATE(127)] = 2383,
  [SMALL_STATE(128)] = 2387,
  [SMALL_STATE(129)] = 2391,
  [SMALL_STATE(130)] = 2395,
  [SMALL_STATE(131)] = 2399,
  [SMALL_STATE(132)] = 2403,
  [SMALL_STATE(133)] = 2407,
  [SMALL_STATE(134)] = 2411,
  [SMALL_STATE(135)] = 2415,
  [SMALL_STATE(136)] = 2419,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(41),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(124),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(128),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(127),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 12),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 12),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 5, .production_id = 6),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 5, .production_id = 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6, .production_id = 7),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 6, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 9, .production_id = 16),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 9, .production_id = 16),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 14),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 14),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 13),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 13),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 11),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 11),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 10),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 10),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 7, .production_id = 9),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 7, .production_id = 9),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 6, .production_id = 8),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 6, .production_id = 8),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop_statement, 8, .production_id = 15),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop_statement, 8, .production_id = 15),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(43),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(112),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [418] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
