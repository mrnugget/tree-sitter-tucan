#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_funk = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COLON = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
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
  sym_return_type = 30,
  sym_type = 31,
  sym_block = 32,
  sym__statement = 33,
  sym_expression_statement = 34,
  sym_return_statement = 35,
  sym_let_statement = 36,
  sym__expression = 37,
  sym_binary_expression = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_parameter_list_repeat1 = 40,
  aux_sym_block_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_funk] = "funk",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_COLON] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_type, 2, .inherited = true},
  [2] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [4] =
    {field_type, 2},
    {field_type, 3},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [9] =
    {field_type, 2},
    {field_type, 3},
    {field_type, 4, .inherited = true},
  [12] =
    {field_name, 1},
    {field_operator, 2},
    {field_value, 3},
  [15] =
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
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(29);
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
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(29);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_funk] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(62),
    [sym__definition] = STATE(13),
    [sym_function_definition] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
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
    ACTIONS(12), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(18), 1,
      sym_number,
    STATE(10), 2,
      sym__expression,
      sym_binary_expression,
    STATE(2), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      aux_sym_block_repeat1,
  [27] = 7,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_number,
    STATE(10), 2,
      sym__expression,
      sym_binary_expression,
    STATE(2), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_let_statement,
      aux_sym_block_repeat1,
  [54] = 7,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym__expression,
      sym_binary_expression,
    STATE(3), 5,
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
  [117] = 4,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
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
  [135] = 3,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(45), 6,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [151] = 2,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(45), 8,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
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
  [193] = 2,
    ACTIONS(55), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(57), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
  [203] = 3,
    ACTIONS(5), 1,
      anon_sym_funk,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(15), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [215] = 2,
    ACTIONS(61), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(63), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
  [225] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_funk,
    STATE(15), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [237] = 2,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(72), 3,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
  [247] = 2,
    ACTIONS(74), 2,
      sym_identifier,
      sym_number,
    STATE(7), 2,
      sym__expression,
      sym_binary_expression,
  [256] = 2,
    STATE(56), 1,
      sym_type,
    ACTIONS(76), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [265] = 1,
    ACTIONS(78), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [272] = 2,
    STATE(55), 1,
      sym_type,
    ACTIONS(76), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [281] = 2,
    ACTIONS(80), 2,
      sym_identifier,
      sym_number,
    STATE(6), 2,
      sym__expression,
      sym_binary_expression,
  [290] = 2,
    STATE(32), 1,
      sym_type,
    ACTIONS(76), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [299] = 2,
    ACTIONS(82), 2,
      sym_identifier,
      sym_number,
    STATE(9), 2,
      sym__expression,
      sym_binary_expression,
  [308] = 2,
    STATE(57), 1,
      sym_type,
    ACTIONS(76), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [317] = 4,
    ACTIONS(84), 1,
      anon_sym_COLON,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
  [330] = 2,
    ACTIONS(90), 2,
      sym_identifier,
      sym_number,
    STATE(8), 2,
      sym__expression,
      sym_binary_expression,
  [339] = 2,
    ACTIONS(92), 2,
      sym_identifier,
      sym_number,
    STATE(5), 2,
      sym__expression,
      sym_binary_expression,
  [348] = 4,
    ACTIONS(94), 1,
      anon_sym_DASH_GT,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_return_type,
    STATE(51), 1,
      sym_block,
  [361] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [371] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      sym_identifier,
  [381] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [391] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_parameter_list_repeat1,
  [401] = 2,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [409] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [419] = 1,
    ACTIONS(125), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [424] = 1,
    ACTIONS(127), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [429] = 2,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_EQ,
  [436] = 2,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_parameter_list,
  [443] = 1,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [448] = 2,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      sym_identifier,
  [455] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
  [462] = 1,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [467] = 1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [472] = 1,
    ACTIONS(147), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [477] = 1,
    ACTIONS(149), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [482] = 1,
    ACTIONS(151), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [487] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [492] = 2,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [499] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
  [506] = 1,
    ACTIONS(157), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [511] = 1,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [516] = 1,
    ACTIONS(161), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [521] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [528] = 1,
    ACTIONS(165), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [533] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [538] = 1,
    ACTIONS(169), 1,
      anon_sym_EQ,
  [542] = 1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
  [546] = 1,
    ACTIONS(139), 1,
      sym_identifier,
  [550] = 1,
    ACTIONS(173), 1,
      sym_identifier,
  [554] = 1,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
  [558] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [562] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 247,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 265,
  [SMALL_STATE(20)] = 272,
  [SMALL_STATE(21)] = 281,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 299,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 330,
  [SMALL_STATE(27)] = 339,
  [SMALL_STATE(28)] = 348,
  [SMALL_STATE(29)] = 361,
  [SMALL_STATE(30)] = 371,
  [SMALL_STATE(31)] = 381,
  [SMALL_STATE(32)] = 391,
  [SMALL_STATE(33)] = 401,
  [SMALL_STATE(34)] = 409,
  [SMALL_STATE(35)] = 419,
  [SMALL_STATE(36)] = 424,
  [SMALL_STATE(37)] = 429,
  [SMALL_STATE(38)] = 436,
  [SMALL_STATE(39)] = 443,
  [SMALL_STATE(40)] = 448,
  [SMALL_STATE(41)] = 455,
  [SMALL_STATE(42)] = 462,
  [SMALL_STATE(43)] = 467,
  [SMALL_STATE(44)] = 472,
  [SMALL_STATE(45)] = 477,
  [SMALL_STATE(46)] = 482,
  [SMALL_STATE(47)] = 487,
  [SMALL_STATE(48)] = 492,
  [SMALL_STATE(49)] = 499,
  [SMALL_STATE(50)] = 506,
  [SMALL_STATE(51)] = 511,
  [SMALL_STATE(52)] = 516,
  [SMALL_STATE(53)] = 521,
  [SMALL_STATE(54)] = 528,
  [SMALL_STATE(55)] = 533,
  [SMALL_STATE(56)] = 538,
  [SMALL_STATE(57)] = 542,
  [SMALL_STATE(58)] = 546,
  [SMALL_STATE(59)] = 550,
  [SMALL_STATE(60)] = 554,
  [SMALL_STATE(61)] = 558,
  [SMALL_STATE(62)] = 562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 7, .production_id = 8),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 7, .production_id = 8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 5, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 3), SHIFT_REPEAT(58),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6, .production_id = 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 7, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6, .production_id = 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 4, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
