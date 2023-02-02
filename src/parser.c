#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 1
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

enum {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_fun = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_public = 8,
  anon_sym_LT = 9,
  anon_sym_COMMA = 10,
  anon_sym_GT = 11,
  anon_sym_LPAREN = 12,
  anon_sym__ = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COLON = 15,
  anon_sym_use = 16,
  anon_sym_SEMI = 17,
  anon_sym_u8 = 18,
  anon_sym_u64 = 19,
  anon_sym_u128 = 20,
  anon_sym_bool = 21,
  anon_sym_address = 22,
  anon_sym_AMP = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_DOLLAR = 26,
  anon_sym_SQUOTE = 27,
  anon_sym_as = 28,
  anon_sym_async = 29,
  anon_sym_await = 30,
  anon_sym_break = 31,
  anon_sym_const = 32,
  anon_sym_continue = 33,
  anon_sym_default = 34,
  anon_sym_enum = 35,
  anon_sym_fn = 36,
  anon_sym_for = 37,
  anon_sym_if = 38,
  anon_sym_impl = 39,
  anon_sym_let = 40,
  anon_sym_loop = 41,
  anon_sym_match = 42,
  anon_sym_mod = 43,
  anon_sym_pub = 44,
  anon_sym_return = 45,
  anon_sym_static = 46,
  anon_sym_struct = 47,
  anon_sym_trait = 48,
  anon_sym_type = 49,
  anon_sym_union = 50,
  anon_sym_unsafe = 51,
  anon_sym_where = 52,
  anon_sym_while = 53,
  sym_number = 54,
  anon_sym_0x = 55,
  anon_sym_0X = 56,
  aux_sym_hex_address_token1 = 57,
  sym_comment = 58,
  sym_module = 59,
  sym_module_body = 60,
  sym__declaration_statement = 61,
  sym_function_item = 62,
  sym_visibility_modifier = 63,
  sym_type_parameters = 64,
  sym_parameters = 65,
  sym_parameter = 66,
  sym_use_declaration = 67,
  sym__use_clause = 68,
  sym__type = 69,
  sym_reference_type = 70,
  sym_block = 71,
  sym_scoped_identifier = 72,
  sym_hex_address = 73,
  sym__path = 74,
  sym__type_identifier = 75,
  aux_sym_module_body_repeat1 = 76,
  aux_sym_type_parameters_repeat1 = 77,
  aux_sym_parameters_repeat1 = 78,
  alias_sym_type_identifier = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_module] = "module",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_fun] = "fun",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_public] = "public",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN] = "(",
  [anon_sym__] = "_",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_use] = "use",
  [anon_sym_SEMI] = ";",
  [anon_sym_u8] = "primitive_type",
  [anon_sym_u64] = "primitive_type",
  [anon_sym_u128] = "primitive_type",
  [anon_sym_bool] = "primitive_type",
  [anon_sym_address] = "primitive_type",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_as] = "as",
  [anon_sym_async] = "async",
  [anon_sym_await] = "await",
  [anon_sym_break] = "break",
  [anon_sym_const] = "const",
  [anon_sym_continue] = "continue",
  [anon_sym_default] = "default",
  [anon_sym_enum] = "enum",
  [anon_sym_fn] = "fn",
  [anon_sym_for] = "for",
  [anon_sym_if] = "if",
  [anon_sym_impl] = "impl",
  [anon_sym_let] = "let",
  [anon_sym_loop] = "loop",
  [anon_sym_match] = "match",
  [anon_sym_mod] = "mod",
  [anon_sym_pub] = "pub",
  [anon_sym_return] = "return",
  [anon_sym_static] = "static",
  [anon_sym_struct] = "struct",
  [anon_sym_trait] = "trait",
  [anon_sym_type] = "type",
  [anon_sym_union] = "union",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_where] = "where",
  [anon_sym_while] = "while",
  [sym_number] = "number",
  [anon_sym_0x] = "0x",
  [anon_sym_0X] = "0X",
  [aux_sym_hex_address_token1] = "hex_address_token1",
  [sym_comment] = "comment",
  [sym_module] = "module",
  [sym_module_body] = "module_body",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_function_item] = "function_item",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym_type_parameters] = "type_parameters",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_use_declaration] = "use_declaration",
  [sym__use_clause] = "_use_clause",
  [sym__type] = "_type",
  [sym_reference_type] = "reference_type",
  [sym_block] = "block",
  [sym_scoped_identifier] = "scoped_identifier",
  [sym_hex_address] = "hex_address",
  [sym__path] = "_path",
  [sym__type_identifier] = "_type_identifier",
  [aux_sym_module_body_repeat1] = "module_body_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym__] = anon_sym__,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u64] = anon_sym_u8,
  [anon_sym_u128] = anon_sym_u8,
  [anon_sym_bool] = anon_sym_u8,
  [anon_sym_address] = anon_sym_u8,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_while] = anon_sym_while,
  [sym_number] = sym_number,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0X] = anon_sym_0X,
  [aux_sym_hex_address_token1] = aux_sym_hex_address_token1,
  [sym_comment] = sym_comment,
  [sym_module] = sym_module,
  [sym_module_body] = sym_module_body,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_function_item] = sym_function_item,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym_type_parameters] = sym_type_parameters,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_use_declaration] = sym_use_declaration,
  [sym__use_clause] = sym__use_clause,
  [sym__type] = sym__type,
  [sym_reference_type] = sym_reference_type,
  [sym_block] = sym_block,
  [sym_scoped_identifier] = sym_scoped_identifier,
  [sym_hex_address] = sym_hex_address,
  [sym__path] = sym__path,
  [sym__type_identifier] = sym__type_identifier,
  [aux_sym_module_body_repeat1] = aux_sym_module_body_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
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
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_address_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_module_body] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_function_item] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_use_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__use_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_address] = {
    .visible = true,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_module_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument = 1,
  field_body = 2,
  field_name = 3,
  field_parameters = 4,
  field_path = 5,
  field_return_type = 6,
  field_type = 7,
  field_type_parameters = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_return_type] = "return_type",
  [field_type] = "type",
  [field_type_parameters] = "type_parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 3},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 4},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 4},
  [12] = {.index = 20, .length = 4},
  [13] = {.index = 24, .length = 5},
  [14] = {.index = 29, .length = 4},
  [15] = {.index = 33, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_argument, 1},
  [2] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [5] =
    {field_name, 2},
    {field_path, 0},
  [7] =
    {field_type, 1},
  [8] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 3},
    {field_type_parameters, 2},
  [12] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
  [15] =
    {field_type, 2},
  [16] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [20] =
    {field_body, 5},
    {field_name, 2},
    {field_parameters, 4},
    {field_type_parameters, 3},
  [24] =
    {field_body, 6},
    {field_name, 1},
    {field_parameters, 3},
    {field_return_type, 5},
    {field_type_parameters, 2},
  [29] =
    {field_body, 6},
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 5},
  [33] =
    {field_body, 7},
    {field_name, 2},
    {field_parameters, 4},
    {field_return_type, 6},
    {field_type_parameters, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [4] = {
    [0] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'X') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(49);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'X') ADVANCE(41);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == '_') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_hex_address_token1);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_hex_address_token1);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_hex_address_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == '6') ADVANCE(40);
      if (lookahead == '8') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(67);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_pub);
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_impl] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_trait] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0X] = ACTIONS(1),
    [aux_sym_hex_address_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_module] = STATE(81),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_COMMA,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_AMP,
    STATE(36), 4,
      sym_parameter,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(11), 6,
      anon_sym__,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [30] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(62), 4,
      sym_parameter,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(17), 6,
      anon_sym__,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [57] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(62), 4,
      sym_parameter,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(17), 6,
      anon_sym__,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_AMP,
    STATE(62), 4,
      sym_parameter,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(17), 6,
      anon_sym__,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(58), 3,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(25), 5,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(29), 3,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(27), 5,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(59), 3,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(29), 5,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(47), 3,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(31), 5,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(57), 3,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(33), 5,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(52), 3,
      sym__type,
      sym_reference_type,
      sym__type_identifier,
    ACTIONS(35), 5,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    STATE(67), 1,
      sym__use_clause,
    STATE(60), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(41), 5,
      anon_sym_u8,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_bool,
      anon_sym_address,
  [264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_fun,
    ACTIONS(47), 1,
      anon_sym_public,
    ACTIONS(49), 1,
      anon_sym_use,
    STATE(65), 1,
      sym_visibility_modifier,
    STATE(15), 4,
      sym__declaration_statement,
      sym_function_item,
      sym_use_declaration,
      aux_sym_module_body_repeat1,
  [289] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_fun,
    ACTIONS(47), 1,
      anon_sym_public,
    ACTIONS(49), 1,
      anon_sym_use,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_visibility_modifier,
    STATE(13), 4,
      sym__declaration_statement,
      sym_function_item,
      sym_use_declaration,
      aux_sym_module_body_repeat1,
  [314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_fun,
    ACTIONS(58), 1,
      anon_sym_public,
    ACTIONS(61), 1,
      anon_sym_use,
    STATE(65), 1,
      sym_visibility_modifier,
    STATE(15), 4,
      sym__declaration_statement,
      sym_function_item,
      sym_use_declaration,
      aux_sym_module_body_repeat1,
  [339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 4,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_parameters,
    STATE(55), 1,
      sym_type_parameters,
  [385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameters,
    STATE(63), 1,
      sym_type_parameters,
  [451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 4,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_public,
      anon_sym_use,
  [481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_DASH_GT,
    STATE(18), 1,
      sym_block,
  [503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_parameters_repeat1,
  [516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parameters_repeat1,
  [529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_DASH_GT,
    STATE(20), 1,
      sym_block,
  [542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_GT,
    STATE(37), 1,
      aux_sym_type_parameters_repeat1,
  [555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_GT,
    STATE(35), 1,
      aux_sym_type_parameters_repeat1,
  [568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_parameters_repeat1,
  [581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_GT,
    STATE(35), 1,
      aux_sym_type_parameters_repeat1,
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(82), 1,
      sym_hex_address,
    ACTIONS(122), 2,
      anon_sym_0x,
      anon_sym_0X,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COLON,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DASH_GT,
    STATE(23), 1,
      sym_block,
  [629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_GT,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(44), 1,
      sym__type_identifier,
  [642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    STATE(27), 1,
      sym_block,
  [655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_GT,
    STATE(44), 1,
      sym__type_identifier,
  [668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
  [684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
  [692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(44), 1,
      sym__type_identifier,
  [720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_module_body,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameters,
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(34), 1,
      sym__type_identifier,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON_COLON,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_parameters,
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
  [855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_fun,
  [862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
  [869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
  [876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_fun,
  [883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_identifier,
  [890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_identifier,
  [897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
  [911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_identifier,
  [925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COLON_COLON,
  [967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COLON_COLON,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_hex_address_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 152,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 196,
  [SMALL_STATE(11)] = 218,
  [SMALL_STATE(12)] = 240,
  [SMALL_STATE(13)] = 264,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 314,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 349,
  [SMALL_STATE(18)] = 359,
  [SMALL_STATE(19)] = 369,
  [SMALL_STATE(20)] = 385,
  [SMALL_STATE(21)] = 395,
  [SMALL_STATE(22)] = 405,
  [SMALL_STATE(23)] = 415,
  [SMALL_STATE(24)] = 425,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 451,
  [SMALL_STATE(27)] = 461,
  [SMALL_STATE(28)] = 471,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 490,
  [SMALL_STATE(31)] = 503,
  [SMALL_STATE(32)] = 516,
  [SMALL_STATE(33)] = 529,
  [SMALL_STATE(34)] = 542,
  [SMALL_STATE(35)] = 555,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 581,
  [SMALL_STATE(38)] = 594,
  [SMALL_STATE(39)] = 605,
  [SMALL_STATE(40)] = 616,
  [SMALL_STATE(41)] = 629,
  [SMALL_STATE(42)] = 642,
  [SMALL_STATE(43)] = 655,
  [SMALL_STATE(44)] = 668,
  [SMALL_STATE(45)] = 676,
  [SMALL_STATE(46)] = 684,
  [SMALL_STATE(47)] = 692,
  [SMALL_STATE(48)] = 702,
  [SMALL_STATE(49)] = 710,
  [SMALL_STATE(50)] = 720,
  [SMALL_STATE(51)] = 728,
  [SMALL_STATE(52)] = 736,
  [SMALL_STATE(53)] = 746,
  [SMALL_STATE(54)] = 756,
  [SMALL_STATE(55)] = 764,
  [SMALL_STATE(56)] = 774,
  [SMALL_STATE(57)] = 784,
  [SMALL_STATE(58)] = 794,
  [SMALL_STATE(59)] = 804,
  [SMALL_STATE(60)] = 812,
  [SMALL_STATE(61)] = 822,
  [SMALL_STATE(62)] = 830,
  [SMALL_STATE(63)] = 838,
  [SMALL_STATE(64)] = 848,
  [SMALL_STATE(65)] = 855,
  [SMALL_STATE(66)] = 862,
  [SMALL_STATE(67)] = 869,
  [SMALL_STATE(68)] = 876,
  [SMALL_STATE(69)] = 883,
  [SMALL_STATE(70)] = 890,
  [SMALL_STATE(71)] = 897,
  [SMALL_STATE(72)] = 904,
  [SMALL_STATE(73)] = 911,
  [SMALL_STATE(74)] = 918,
  [SMALL_STATE(75)] = 925,
  [SMALL_STATE(76)] = 932,
  [SMALL_STATE(77)] = 939,
  [SMALL_STATE(78)] = 946,
  [SMALL_STATE(79)] = 953,
  [SMALL_STATE(80)] = 960,
  [SMALL_STATE(81)] = 967,
  [SMALL_STATE(82)] = 974,
  [SMALL_STATE(83)] = 981,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(69),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(68),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 7, .production_id = 13),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 8, .production_id = 15),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 7, .production_id = 14),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 11),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 12),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_declaration, 3, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 7),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(49),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_clause, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_address, 2),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_move(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
