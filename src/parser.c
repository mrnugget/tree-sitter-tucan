#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

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
  sym_identifier = 24,
  sym_number = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_function_definition = 28,
  sym_parameter_list = 29,
  sym_parameter = 30,
  sym_return_type = 31,
  sym_type = 32,
  sym_block = 33,
  sym__statement = 34,
  sym_expression_statement = 35,
  sym_return_statement = 36,
  sym_let_statement = 37,
  sym__expression = 38,
  sym_binary_expression = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_parameter_list_repeat1 = 41,
  aux_sym_block_repeat1 = 42,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
};

enum {
  field_left = 1,
  field_name = 2,
  field_operator = 3,
  field_right = 4,
  field_type = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_type, 1},
    {field_type, 2},
  [3] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [6] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 3},
  [9] =
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
      if (eof) ADVANCE(26);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_funk);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_let);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym__definition] = STATE(12),
    [sym_function_definition] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_funk] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    STATE(10), 2,
      sym__expression,
      sym_binary_expression,
    STATE(3), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      aux_sym_block_repeat1,
  [27] = 7,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(22), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(28), 1,
      sym_number,
    STATE(10), 2,
      sym__expression,
      sym_binary_expression,
    STATE(3), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      aux_sym_block_repeat1,
  [54] = 7,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym__expression,
      sym_binary_expression,
    STATE(2), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      aux_sym_block_repeat1,
  [81] = 4,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(37), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [99] = 4,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(37), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [117] = 3,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 6,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [133] = 2,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(43), 8,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [147] = 4,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(37), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [165] = 4,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(37), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [183] = 2,
    ACTIONS(51), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(53), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
  [193] = 3,
    ACTIONS(5), 1,
      anon_sym_funk,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(14), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [205] = 2,
    ACTIONS(57), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(59), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
  [215] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_funk,
    STATE(14), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [227] = 2,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(68), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
  [237] = 2,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(72), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
  [247] = 2,
    STATE(52), 1,
      sym_type,
    ACTIONS(74), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [256] = 2,
    ACTIONS(76), 2,
      sym_identifier,
      sym_number,
    STATE(8), 2,
      sym__expression,
      sym_binary_expression,
  [265] = 4,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(31), 1,
      sym_parameter,
  [278] = 2,
    STATE(43), 1,
      sym_type,
    ACTIONS(74), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [287] = 1,
    ACTIONS(84), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [294] = 2,
    ACTIONS(86), 2,
      sym_identifier,
      sym_number,
    STATE(5), 2,
      sym__expression,
      sym_binary_expression,
  [303] = 4,
    ACTIONS(88), 1,
      anon_sym_DASH_GT,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_return_type,
    STATE(36), 1,
      sym_block,
  [316] = 2,
    ACTIONS(92), 2,
      sym_identifier,
      sym_number,
    STATE(9), 2,
      sym__expression,
      sym_binary_expression,
  [325] = 2,
    ACTIONS(94), 2,
      sym_identifier,
      sym_number,
    STATE(6), 2,
      sym__expression,
      sym_binary_expression,
  [334] = 2,
    STATE(50), 1,
      sym_type,
    ACTIONS(74), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [343] = 2,
    ACTIONS(96), 2,
      sym_identifier,
      sym_number,
    STATE(7), 2,
      sym__expression,
      sym_binary_expression,
  [352] = 3,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_parameter,
  [362] = 3,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_parameter_list_repeat1,
  [372] = 2,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [380] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
  [390] = 3,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_parameter,
  [400] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_parameter_list_repeat1,
  [410] = 2,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [417] = 2,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(119), 1,
      anon_sym_EQ,
  [424] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [429] = 1,
    ACTIONS(123), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [434] = 1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [439] = 1,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [444] = 1,
    ACTIONS(127), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [449] = 2,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(39), 1,
      sym_parameter,
  [456] = 1,
    ACTIONS(129), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [461] = 1,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [466] = 1,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [471] = 1,
    ACTIONS(135), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [476] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [481] = 2,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_parameter_list,
  [488] = 1,
    ACTIONS(141), 1,
      sym_identifier,
  [492] = 1,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
  [496] = 1,
    ACTIONS(143), 1,
      anon_sym_EQ,
  [500] = 1,
    ACTIONS(145), 1,
      sym_identifier,
  [504] = 1,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
  [508] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 227,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 247,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 265,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 287,
  [SMALL_STATE(22)] = 294,
  [SMALL_STATE(23)] = 303,
  [SMALL_STATE(24)] = 316,
  [SMALL_STATE(25)] = 325,
  [SMALL_STATE(26)] = 334,
  [SMALL_STATE(27)] = 343,
  [SMALL_STATE(28)] = 352,
  [SMALL_STATE(29)] = 362,
  [SMALL_STATE(30)] = 372,
  [SMALL_STATE(31)] = 380,
  [SMALL_STATE(32)] = 390,
  [SMALL_STATE(33)] = 400,
  [SMALL_STATE(34)] = 410,
  [SMALL_STATE(35)] = 417,
  [SMALL_STATE(36)] = 424,
  [SMALL_STATE(37)] = 429,
  [SMALL_STATE(38)] = 434,
  [SMALL_STATE(39)] = 439,
  [SMALL_STATE(40)] = 444,
  [SMALL_STATE(41)] = 449,
  [SMALL_STATE(42)] = 456,
  [SMALL_STATE(43)] = 461,
  [SMALL_STATE(44)] = 466,
  [SMALL_STATE(45)] = 471,
  [SMALL_STATE(46)] = 476,
  [SMALL_STATE(47)] = 481,
  [SMALL_STATE(48)] = 488,
  [SMALL_STATE(49)] = 492,
  [SMALL_STATE(50)] = 496,
  [SMALL_STATE(51)] = 500,
  [SMALL_STATE(52)] = 504,
  [SMALL_STATE(53)] = 508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 7, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 7, .production_id = 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, .production_id = 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 5, .production_id = 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
