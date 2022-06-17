#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_DASH = 14,
  anon_sym_PLUS = 15,
  anon_sym_GT = 16,
  anon_sym_EQ_GT = 17,
  anon_sym_LT = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  sym_identifier = 22,
  sym_number = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_function_definition = 26,
  sym_parameter_list = 27,
  sym_return_type = 28,
  sym__type = 29,
  sym_block = 30,
  sym__statement = 31,
  sym_expression_statement = 32,
  sym_return_statement = 33,
  sym__expression = 34,
  sym_binary_expression = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_parameter_list_repeat1 = 37,
  aux_sym_block_repeat1 = 38,
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
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT] = "<",
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
  [sym__type] = "_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT] = anon_sym_LT,
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
  [sym__type] = sym__type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_return_statement] = sym_return_statement,
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
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
  [sym__type] = {
    .visible = false,
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
  field_name = 1,
  field_op = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_op] = "op",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
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
    {field_op, 1},
  [7] =
    {field_type, 2},
    {field_type, 3},
    {field_type, 4, .inherited = true},
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
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_funk);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__definition] = STATE(9),
    [sym_function_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_funk] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(7), 2,
      sym__expression,
      sym_binary_expression,
    STATE(3), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [23] = 6,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym__expression,
      sym_binary_expression,
    STATE(4), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [46] = 6,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(22), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    STATE(7), 2,
      sym__expression,
      sym_binary_expression,
    STATE(4), 4,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [69] = 3,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(30), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(28), 6,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [85] = 2,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(28), 8,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [99] = 4,
    ACTIONS(34), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_LT,
    ACTIONS(30), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [117] = 4,
    ACTIONS(38), 1,
      anon_sym_LT,
    ACTIONS(40), 1,
      anon_sym_SEMI,
    ACTIONS(30), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 5,
      anon_sym_GT,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [135] = 3,
    ACTIONS(5), 1,
      anon_sym_funk,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(10), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [147] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_funk,
    STATE(10), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [159] = 2,
    STATE(50), 1,
      sym__type,
    ACTIONS(49), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [168] = 4,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_parameter_list_repeat1,
  [181] = 2,
    ACTIONS(57), 2,
      sym_identifier,
      sym_number,
    STATE(5), 2,
      sym__expression,
      sym_binary_expression,
  [190] = 2,
    ACTIONS(59), 2,
      sym_identifier,
      sym_number,
    STATE(6), 2,
      sym__expression,
      sym_binary_expression,
  [199] = 2,
    STATE(26), 1,
      sym__type,
    ACTIONS(61), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [208] = 2,
    ACTIONS(63), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_return,
      sym_identifier,
  [217] = 2,
    ACTIONS(67), 2,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(69), 2,
      anon_sym_return,
      sym_identifier,
  [226] = 2,
    ACTIONS(71), 2,
      sym_identifier,
      sym_number,
    STATE(8), 2,
      sym__expression,
      sym_binary_expression,
  [235] = 2,
    STATE(33), 1,
      sym__type,
    ACTIONS(73), 3,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_int,
  [244] = 4,
    ACTIONS(75), 1,
      anon_sym_DASH_GT,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_return_type,
    STATE(37), 1,
      sym_block,
  [257] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [267] = 2,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [275] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [285] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [295] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      sym_identifier,
  [305] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [315] = 1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [320] = 2,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [327] = 2,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      sym_identifier,
  [334] = 1,
    ACTIONS(112), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [339] = 1,
    ACTIONS(114), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [344] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [349] = 1,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [354] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [361] = 1,
    ACTIONS(122), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [366] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [371] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_funk,
  [376] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
  [383] = 1,
    ACTIONS(130), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [388] = 1,
    ACTIONS(132), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [393] = 1,
    ACTIONS(134), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [398] = 1,
    ACTIONS(136), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [403] = 1,
    ACTIONS(138), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [408] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [415] = 2,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parameter_list,
  [422] = 1,
    ACTIONS(144), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [427] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [431] = 1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
  [435] = 1,
    ACTIONS(110), 1,
      sym_identifier,
  [439] = 1,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
  [443] = 1,
    ACTIONS(150), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 168,
  [SMALL_STATE(13)] = 181,
  [SMALL_STATE(14)] = 190,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 208,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 226,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 244,
  [SMALL_STATE(21)] = 257,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 285,
  [SMALL_STATE(25)] = 295,
  [SMALL_STATE(26)] = 305,
  [SMALL_STATE(27)] = 315,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 327,
  [SMALL_STATE(30)] = 334,
  [SMALL_STATE(31)] = 339,
  [SMALL_STATE(32)] = 344,
  [SMALL_STATE(33)] = 349,
  [SMALL_STATE(34)] = 354,
  [SMALL_STATE(35)] = 361,
  [SMALL_STATE(36)] = 366,
  [SMALL_STATE(37)] = 371,
  [SMALL_STATE(38)] = 376,
  [SMALL_STATE(39)] = 383,
  [SMALL_STATE(40)] = 388,
  [SMALL_STATE(41)] = 393,
  [SMALL_STATE(42)] = 398,
  [SMALL_STATE(43)] = 403,
  [SMALL_STATE(44)] = 408,
  [SMALL_STATE(45)] = 415,
  [SMALL_STATE(46)] = 422,
  [SMALL_STATE(47)] = 427,
  [SMALL_STATE(48)] = 431,
  [SMALL_STATE(49)] = 435,
  [SMALL_STATE(50)] = 439,
  [SMALL_STATE(51)] = 443,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 3), SHIFT_REPEAT(49),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 7, .production_id = 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 4, .production_id = 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, .production_id = 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6, .production_id = 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6, .production_id = 4),
  [146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
