#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_DASH = 16,
  anon_sym_PLUS = 17,
  anon_sym_GT = 18,
  anon_sym_LT = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_BANG_EQ = 23,
  sym_true = 24,
  sym_false = 25,
  sym_identifier = 26,
  sym_number = 27,
  sym_source_file = 28,
  sym__definition = 29,
  sym_function_definition = 30,
  sym_parameter_list = 31,
  sym_parameter = 32,
  sym_return_type = 33,
  sym_type = 34,
  sym_block = 35,
  sym__statement = 36,
  sym_expression_statement = 37,
  sym_return_statement = 38,
  sym_let_statement = 39,
  sym__expression = 40,
  sym_binary_expression = 41,
  sym_assignment_expression = 42,
  sym_call_expression = 43,
  sym_argument_list = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_parameter_list_repeat1 = 46,
  aux_sym_block_repeat1 = 47,
  aux_sym_argument_list_repeat1 = 48,
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
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
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
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_call_expression] = "call_expression",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
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
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_call_expression] = sym_call_expression,
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
  [sym__definition] = {
    .visible = false,
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
  field_args = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_right = 5,
  field_target = 6,
  field_type = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
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
  [6] = {.index = 11, .length = 3},
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
    {field_name, 1},
    {field_operator, 4},
    {field_value, 5},
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
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_funk);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
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
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(70),
    [sym__definition] = STATE(35),
    [sym_function_definition] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_funk] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
    STATE(4), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      aux_sym_block_repeat1,
  [33] = 8,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_true,
      sym_false,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
    STATE(2), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      aux_sym_block_repeat1,
  [66] = 8,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(26), 1,
      anon_sym_let,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(29), 2,
      sym_true,
      sym_false,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
    STATE(4), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      aux_sym_block_repeat1,
  [99] = 4,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_argument_list,
    ACTIONS(42), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(40), 10,
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
  [122] = 2,
    ACTIONS(46), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(44), 10,
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
  [139] = 2,
    ACTIONS(50), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(48), 10,
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
  [156] = 2,
    ACTIONS(54), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(52), 10,
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
  [173] = 2,
    ACTIONS(58), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(56), 10,
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
  [190] = 7,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    ACTIONS(64), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      anon_sym_LT,
    STATE(44), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(66), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(68), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [217] = 5,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_EQ,
    ACTIONS(66), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(72), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    ACTIONS(68), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [240] = 2,
    ACTIONS(78), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(76), 10,
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
  [257] = 2,
    ACTIONS(82), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(80), 10,
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
  [274] = 3,
    ACTIONS(66), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(78), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(76), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [293] = 5,
    ACTIONS(64), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(66), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(84), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(68), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [315] = 5,
    ACTIONS(64), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(66), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(68), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [336] = 5,
    ACTIONS(64), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    ACTIONS(66), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(68), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [357] = 5,
    ACTIONS(64), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(66), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(68), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [378] = 5,
    ACTIONS(64), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(66), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(68), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [399] = 6,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      sym_number,
    ACTIONS(98), 2,
      sym_true,
      sym_false,
    STATE(10), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [422] = 5,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(104), 2,
      sym_true,
      sym_false,
    STATE(15), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [442] = 5,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 2,
      sym_true,
      sym_false,
    STATE(15), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [462] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(104), 2,
      sym_true,
      sym_false,
    STATE(15), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [479] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(110), 2,
      sym_true,
      sym_false,
    STATE(14), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [496] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(114), 2,
      sym_true,
      sym_false,
    STATE(12), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [513] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(118), 2,
      sym_true,
      sym_false,
    STATE(17), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [530] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(124), 1,
      sym_number,
    ACTIONS(122), 2,
      sym_true,
      sym_false,
    STATE(19), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [547] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(128), 1,
      sym_number,
    ACTIONS(126), 2,
      sym_true,
      sym_false,
    STATE(11), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [564] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(132), 1,
      sym_number,
    ACTIONS(130), 2,
      sym_true,
      sym_false,
    STATE(16), 4,
      sym__expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_call_expression,
  [581] = 2,
    ACTIONS(134), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(136), 5,
      anon_sym_return,
      anon_sym_let,
      sym_true,
      sym_false,
      sym_identifier,
  [593] = 2,
    ACTIONS(138), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(140), 5,
      anon_sym_return,
      anon_sym_let,
      sym_true,
      sym_false,
      sym_identifier,
  [605] = 2,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(144), 5,
      anon_sym_return,
      anon_sym_let,
      sym_true,
      sym_false,
      sym_identifier,
  [617] = 2,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(148), 5,
      anon_sym_return,
      anon_sym_let,
      sym_true,
      sym_false,
      sym_identifier,
  [629] = 3,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_funk,
    STATE(34), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [641] = 3,
    ACTIONS(5), 1,
      anon_sym_funk,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(34), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [653] = 2,
    STATE(66), 1,
      sym_type,
    ACTIONS(157), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [662] = 2,
    STATE(67), 1,
      sym_type,
    ACTIONS(157), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [671] = 2,
    STATE(52), 1,
      sym_type,
    ACTIONS(157), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [680] = 4,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(46), 1,
      sym_parameter,
  [693] = 4,
    ACTIONS(165), 1,
      anon_sym_DASH_GT,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_block,
    STATE(63), 1,
      sym_return_type,
  [706] = 1,
    ACTIONS(169), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [713] = 3,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_parameter,
  [723] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameter_list_repeat1,
  [733] = 3,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_argument_list_repeat1,
  [743] = 3,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_parameter,
  [753] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_parameter_list_repeat1,
  [763] = 2,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [771] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameter_list_repeat1,
  [781] = 3,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_argument_list_repeat1,
  [791] = 1,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [796] = 1,
    ACTIONS(197), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [801] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [806] = 1,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [811] = 1,
    ACTIONS(203), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [816] = 1,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [821] = 1,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [826] = 2,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameter_list,
  [833] = 2,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(56), 1,
      sym_parameter,
  [840] = 1,
    ACTIONS(209), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [845] = 2,
    ACTIONS(211), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_EQ,
  [852] = 1,
    ACTIONS(215), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [857] = 1,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [862] = 2,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [869] = 1,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
  [873] = 1,
    ACTIONS(219), 1,
      sym_identifier,
  [877] = 1,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
  [881] = 1,
    ACTIONS(223), 1,
      anon_sym_EQ,
  [885] = 1,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
  [889] = 1,
    ACTIONS(225), 1,
      sym_identifier,
  [893] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 240,
  [SMALL_STATE(13)] = 257,
  [SMALL_STATE(14)] = 274,
  [SMALL_STATE(15)] = 293,
  [SMALL_STATE(16)] = 315,
  [SMALL_STATE(17)] = 336,
  [SMALL_STATE(18)] = 357,
  [SMALL_STATE(19)] = 378,
  [SMALL_STATE(20)] = 399,
  [SMALL_STATE(21)] = 422,
  [SMALL_STATE(22)] = 442,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 479,
  [SMALL_STATE(25)] = 496,
  [SMALL_STATE(26)] = 513,
  [SMALL_STATE(27)] = 530,
  [SMALL_STATE(28)] = 547,
  [SMALL_STATE(29)] = 564,
  [SMALL_STATE(30)] = 581,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 605,
  [SMALL_STATE(33)] = 617,
  [SMALL_STATE(34)] = 629,
  [SMALL_STATE(35)] = 641,
  [SMALL_STATE(36)] = 653,
  [SMALL_STATE(37)] = 662,
  [SMALL_STATE(38)] = 671,
  [SMALL_STATE(39)] = 680,
  [SMALL_STATE(40)] = 693,
  [SMALL_STATE(41)] = 706,
  [SMALL_STATE(42)] = 713,
  [SMALL_STATE(43)] = 723,
  [SMALL_STATE(44)] = 733,
  [SMALL_STATE(45)] = 743,
  [SMALL_STATE(46)] = 753,
  [SMALL_STATE(47)] = 763,
  [SMALL_STATE(48)] = 771,
  [SMALL_STATE(49)] = 781,
  [SMALL_STATE(50)] = 791,
  [SMALL_STATE(51)] = 796,
  [SMALL_STATE(52)] = 801,
  [SMALL_STATE(53)] = 806,
  [SMALL_STATE(54)] = 811,
  [SMALL_STATE(55)] = 816,
  [SMALL_STATE(56)] = 821,
  [SMALL_STATE(57)] = 826,
  [SMALL_STATE(58)] = 833,
  [SMALL_STATE(59)] = 840,
  [SMALL_STATE(60)] = 845,
  [SMALL_STATE(61)] = 852,
  [SMALL_STATE(62)] = 857,
  [SMALL_STATE(63)] = 862,
  [SMALL_STATE(64)] = 869,
  [SMALL_STATE(65)] = 873,
  [SMALL_STATE(66)] = 877,
  [SMALL_STATE(67)] = 881,
  [SMALL_STATE(68)] = 885,
  [SMALL_STATE(69)] = 889,
  [SMALL_STATE(70)] = 893,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 7, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 7, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, .production_id = 5),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 5, .production_id = 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(58),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(23),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [227] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
