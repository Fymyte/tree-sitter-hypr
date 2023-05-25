#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  sym_int = 3,
  sym_float = 4,
  anon_sym_SHIFT = 5,
  anon_sym_CAPS = 6,
  anon_sym_CTRL = 7,
  anon_sym_CONTROL = 8,
  anon_sym_ALT = 9,
  anon_sym_MOD2 = 10,
  anon_sym_MOD3 = 11,
  anon_sym_SUPER = 12,
  anon_sym_WIN = 13,
  anon_sym_LOGO = 14,
  anon_sym_MOD4 = 15,
  anon_sym_MOD5 = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_yes = 19,
  anon_sym_no = 20,
  anon_sym_on = 21,
  anon_sym_off = 22,
  anon_sym_0 = 23,
  anon_sym_1 = 24,
  anon_sym_rgb = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_rgba = 28,
  anon_sym_0x = 29,
  sym__hex_comp = 30,
  anon_sym_deg = 31,
  sym_str = 32,
  anon_sym_DOLLAR = 33,
  aux_sym_variable_reference_token1 = 34,
  sym__newline = 35,
  anon_sym_general = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  anon_sym_decoration = 39,
  anon_sym_sensitivity = 40,
  anon_sym_EQ = 41,
  anon_sym_border_size = 42,
  anon_sym_no_border_on_floating = 43,
  anon_sym_gaps_in = 44,
  anon_sym_gaps_out = 45,
  anon_sym_col_DOTinactive_border = 46,
  anon_sym_col_DOTactive_border = 47,
  anon_sym_col_DOTgroup_border = 48,
  anon_sym_col_DOTgroup_border_active = 49,
  anon_sym_cursor_inactive_timeout = 50,
  anon_sym_layout = 51,
  anon_sym_no_cursor_warps = 52,
  anon_sym_no_focus_fallback = 53,
  anon_sym_apply_sens_to_raw = 54,
  anon_sym_resize_on_border = 55,
  anon_sym_extend_border_grab_area = 56,
  anon_sym_hover_icon_on_border = 57,
  anon_sym_rounding = 58,
  anon_sym_multisample_edges = 59,
  anon_sym_active_opacity = 60,
  anon_sym_inactive_opacity = 61,
  anon_sym_fullscreen_opacity = 62,
  anon_sym_blur = 63,
  anon_sym_blur_size = 64,
  anon_sym_blur_passes = 65,
  anon_sym_blur_ignore_opacity = 66,
  anon_sym_blur_new_optimizations = 67,
  anon_sym_blur_xray = 68,
  anon_sym_drop_shadow = 69,
  anon_sym_shadow_range = 70,
  anon_sym_shadow_render_power = 71,
  anon_sym_shadow_ignore_window = 72,
  anon_sym_col_DOTshadow = 73,
  anon_sym_col_DOTshadow_inactive = 74,
  anon_sym_shadow_offset = 75,
  anon_sym_shadow_scale = 76,
  anon_sym_dim_inactive = 77,
  anon_sym_dim_strength = 78,
  anon_sym_dim_special = 79,
  anon_sym_dim_around = 80,
  anon_sym_screen_shader = 81,
  sym_config_file = 82,
  sym_comment = 83,
  sym_vec2 = 84,
  sym_bool = 85,
  sym__bool_literal = 86,
  sym__bool_integer = 87,
  sym_color = 88,
  sym_color_rgb = 89,
  sym_color_rgba = 90,
  sym_color_hex = 91,
  sym_gradient = 92,
  sym_degree = 93,
  sym_variable_reference = 94,
  sym_variable_section = 95,
  sym__general_section_var = 96,
  sym__decoration_section_var = 97,
  aux_sym_config_file_repeat1 = 98,
  aux_sym_gradient_repeat1 = 99,
  aux_sym_variable_section_repeat1 = 100,
  aux_sym_variable_section_repeat2 = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_int] = "int",
  [sym_float] = "float",
  [anon_sym_SHIFT] = "SHIFT",
  [anon_sym_CAPS] = "CAPS",
  [anon_sym_CTRL] = "CTRL",
  [anon_sym_CONTROL] = "CONTROL",
  [anon_sym_ALT] = "ALT",
  [anon_sym_MOD2] = "MOD2",
  [anon_sym_MOD3] = "MOD3",
  [anon_sym_SUPER] = "SUPER",
  [anon_sym_WIN] = "WIN",
  [anon_sym_LOGO] = "LOGO",
  [anon_sym_MOD4] = "MOD4",
  [anon_sym_MOD5] = "MOD5",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_rgb] = "rgb",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_rgba] = "rgba",
  [anon_sym_0x] = "0x",
  [sym__hex_comp] = "_hex_comp",
  [anon_sym_deg] = "deg",
  [sym_str] = "str",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_reference_token1] = "variable_reference_token1",
  [sym__newline] = "_newline",
  [anon_sym_general] = "general",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_decoration] = "decoration",
  [anon_sym_sensitivity] = "sensitivity",
  [anon_sym_EQ] = "=",
  [anon_sym_border_size] = "border_size",
  [anon_sym_no_border_on_floating] = "no_border_on_floating",
  [anon_sym_gaps_in] = "gaps_in",
  [anon_sym_gaps_out] = "gaps_out",
  [anon_sym_col_DOTinactive_border] = "col.inactive_border",
  [anon_sym_col_DOTactive_border] = "col.active_border",
  [anon_sym_col_DOTgroup_border] = "col.group_border",
  [anon_sym_col_DOTgroup_border_active] = "col.group_border_active",
  [anon_sym_cursor_inactive_timeout] = "cursor_inactive_timeout",
  [anon_sym_layout] = "layout",
  [anon_sym_no_cursor_warps] = "no_cursor_warps",
  [anon_sym_no_focus_fallback] = "no_focus_fallback",
  [anon_sym_apply_sens_to_raw] = "apply_sens_to_raw",
  [anon_sym_resize_on_border] = "resize_on_border",
  [anon_sym_extend_border_grab_area] = "extend_border_grab_area",
  [anon_sym_hover_icon_on_border] = "hover_icon_on_border",
  [anon_sym_rounding] = "rounding",
  [anon_sym_multisample_edges] = "multisample_edges",
  [anon_sym_active_opacity] = "active_opacity",
  [anon_sym_inactive_opacity] = "inactive_opacity",
  [anon_sym_fullscreen_opacity] = "fullscreen_opacity",
  [anon_sym_blur] = "blur",
  [anon_sym_blur_size] = "blur_size",
  [anon_sym_blur_passes] = "blur_passes",
  [anon_sym_blur_ignore_opacity] = "blur_ignore_opacity",
  [anon_sym_blur_new_optimizations] = "blur_new_optimizations",
  [anon_sym_blur_xray] = "blur_xray",
  [anon_sym_drop_shadow] = "drop_shadow",
  [anon_sym_shadow_range] = "shadow_range",
  [anon_sym_shadow_render_power] = "shadow_render_power",
  [anon_sym_shadow_ignore_window] = "shadow_ignore_window",
  [anon_sym_col_DOTshadow] = "col.shadow",
  [anon_sym_col_DOTshadow_inactive] = "col.shadow_inactive",
  [anon_sym_shadow_offset] = "shadow_offset",
  [anon_sym_shadow_scale] = "shadow_scale",
  [anon_sym_dim_inactive] = "dim_inactive",
  [anon_sym_dim_strength] = "dim_strength",
  [anon_sym_dim_special] = "dim_special",
  [anon_sym_dim_around] = "dim_around",
  [anon_sym_screen_shader] = "screen_shader",
  [sym_config_file] = "config_file",
  [sym_comment] = "comment",
  [sym_vec2] = "vec2",
  [sym_bool] = "bool",
  [sym__bool_literal] = "_bool_literal",
  [sym__bool_integer] = "_bool_integer",
  [sym_color] = "color",
  [sym_color_rgb] = "color_rgb",
  [sym_color_rgba] = "color_rgba",
  [sym_color_hex] = "color_hex",
  [sym_gradient] = "gradient",
  [sym_degree] = "degree",
  [sym_variable_reference] = "variable_reference",
  [sym_variable_section] = "variable_section",
  [sym__general_section_var] = "section_variable",
  [sym__decoration_section_var] = "section_variable",
  [aux_sym_config_file_repeat1] = "config_file_repeat1",
  [aux_sym_gradient_repeat1] = "gradient_repeat1",
  [aux_sym_variable_section_repeat1] = "variable_section_repeat1",
  [aux_sym_variable_section_repeat2] = "variable_section_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [anon_sym_SHIFT] = anon_sym_SHIFT,
  [anon_sym_CAPS] = anon_sym_CAPS,
  [anon_sym_CTRL] = anon_sym_CTRL,
  [anon_sym_CONTROL] = anon_sym_CONTROL,
  [anon_sym_ALT] = anon_sym_ALT,
  [anon_sym_MOD2] = anon_sym_MOD2,
  [anon_sym_MOD3] = anon_sym_MOD3,
  [anon_sym_SUPER] = anon_sym_SUPER,
  [anon_sym_WIN] = anon_sym_WIN,
  [anon_sym_LOGO] = anon_sym_LOGO,
  [anon_sym_MOD4] = anon_sym_MOD4,
  [anon_sym_MOD5] = anon_sym_MOD5,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_rgb] = anon_sym_rgb,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_rgba] = anon_sym_rgba,
  [anon_sym_0x] = anon_sym_0x,
  [sym__hex_comp] = sym__hex_comp,
  [anon_sym_deg] = anon_sym_deg,
  [sym_str] = sym_str,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_reference_token1] = aux_sym_variable_reference_token1,
  [sym__newline] = sym__newline,
  [anon_sym_general] = anon_sym_general,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_decoration] = anon_sym_decoration,
  [anon_sym_sensitivity] = anon_sym_sensitivity,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_border_size] = anon_sym_border_size,
  [anon_sym_no_border_on_floating] = anon_sym_no_border_on_floating,
  [anon_sym_gaps_in] = anon_sym_gaps_in,
  [anon_sym_gaps_out] = anon_sym_gaps_out,
  [anon_sym_col_DOTinactive_border] = anon_sym_col_DOTinactive_border,
  [anon_sym_col_DOTactive_border] = anon_sym_col_DOTactive_border,
  [anon_sym_col_DOTgroup_border] = anon_sym_col_DOTgroup_border,
  [anon_sym_col_DOTgroup_border_active] = anon_sym_col_DOTgroup_border_active,
  [anon_sym_cursor_inactive_timeout] = anon_sym_cursor_inactive_timeout,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_no_cursor_warps] = anon_sym_no_cursor_warps,
  [anon_sym_no_focus_fallback] = anon_sym_no_focus_fallback,
  [anon_sym_apply_sens_to_raw] = anon_sym_apply_sens_to_raw,
  [anon_sym_resize_on_border] = anon_sym_resize_on_border,
  [anon_sym_extend_border_grab_area] = anon_sym_extend_border_grab_area,
  [anon_sym_hover_icon_on_border] = anon_sym_hover_icon_on_border,
  [anon_sym_rounding] = anon_sym_rounding,
  [anon_sym_multisample_edges] = anon_sym_multisample_edges,
  [anon_sym_active_opacity] = anon_sym_active_opacity,
  [anon_sym_inactive_opacity] = anon_sym_inactive_opacity,
  [anon_sym_fullscreen_opacity] = anon_sym_fullscreen_opacity,
  [anon_sym_blur] = anon_sym_blur,
  [anon_sym_blur_size] = anon_sym_blur_size,
  [anon_sym_blur_passes] = anon_sym_blur_passes,
  [anon_sym_blur_ignore_opacity] = anon_sym_blur_ignore_opacity,
  [anon_sym_blur_new_optimizations] = anon_sym_blur_new_optimizations,
  [anon_sym_blur_xray] = anon_sym_blur_xray,
  [anon_sym_drop_shadow] = anon_sym_drop_shadow,
  [anon_sym_shadow_range] = anon_sym_shadow_range,
  [anon_sym_shadow_render_power] = anon_sym_shadow_render_power,
  [anon_sym_shadow_ignore_window] = anon_sym_shadow_ignore_window,
  [anon_sym_col_DOTshadow] = anon_sym_col_DOTshadow,
  [anon_sym_col_DOTshadow_inactive] = anon_sym_col_DOTshadow_inactive,
  [anon_sym_shadow_offset] = anon_sym_shadow_offset,
  [anon_sym_shadow_scale] = anon_sym_shadow_scale,
  [anon_sym_dim_inactive] = anon_sym_dim_inactive,
  [anon_sym_dim_strength] = anon_sym_dim_strength,
  [anon_sym_dim_special] = anon_sym_dim_special,
  [anon_sym_dim_around] = anon_sym_dim_around,
  [anon_sym_screen_shader] = anon_sym_screen_shader,
  [sym_config_file] = sym_config_file,
  [sym_comment] = sym_comment,
  [sym_vec2] = sym_vec2,
  [sym_bool] = sym_bool,
  [sym__bool_literal] = sym__bool_literal,
  [sym__bool_integer] = sym__bool_integer,
  [sym_color] = sym_color,
  [sym_color_rgb] = sym_color_rgb,
  [sym_color_rgba] = sym_color_rgba,
  [sym_color_hex] = sym_color_hex,
  [sym_gradient] = sym_gradient,
  [sym_degree] = sym_degree,
  [sym_variable_reference] = sym_variable_reference,
  [sym_variable_section] = sym_variable_section,
  [sym__general_section_var] = sym__general_section_var,
  [sym__decoration_section_var] = sym__general_section_var,
  [aux_sym_config_file_repeat1] = aux_sym_config_file_repeat1,
  [aux_sym_gradient_repeat1] = aux_sym_gradient_repeat1,
  [aux_sym_variable_section_repeat1] = aux_sym_variable_section_repeat1,
  [aux_sym_variable_section_repeat2] = aux_sym_variable_section_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SHIFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAPS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTROL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUPER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOGO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_comp] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_deg] = {
    .visible = true,
    .named = false,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_general] = {
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
  [anon_sym_decoration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sensitivity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_border_on_floating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gaps_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gaps_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTinactive_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTactive_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTgroup_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTgroup_border_active] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_inactive_timeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_cursor_warps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_focus_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_apply_sens_to_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize_on_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend_border_grab_area] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hover_icon_on_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rounding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multisample_edges] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inactive_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fullscreen_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_passes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_ignore_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_new_optimizations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blur_xray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop_shadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_render_power] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_ignore_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTshadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_col_DOTshadow_inactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow_scale] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim_inactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim_strength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim_special] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim_around] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_screen_shader] = {
    .visible = true,
    .named = false,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_vec2] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__bool_integer] = {
    .visible = false,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_color_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_color_rgba] = {
    .visible = true,
    .named = true,
  },
  [sym_color_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_gradient] = {
    .visible = true,
    .named = true,
  },
  [sym_degree] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_section] = {
    .visible = true,
    .named = true,
  },
  [sym__general_section_var] = {
    .visible = true,
    .named = true,
  },
  [sym__decoration_section_var] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gradient_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_section_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_unit = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0, .inherited = true},
  [2] =
    {field_unit, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(510);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '(') ADVANCE(548);
      if (lookahead == ')') ADVANCE(549);
      if (lookahead == '.') ADVANCE(505);
      if (lookahead == '0') ADVANCE(542);
      if (lookahead == '1') ADVANCE(545);
      if (lookahead == '=') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'W') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '{') ADVANCE(565);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('B' <= lookahead && lookahead <= 'F')) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(516);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '.') ADVANCE(505);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '0') ADVANCE(518);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '0') ADVANCE(541);
      if (lookahead == '1') ADVANCE(544);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '0') ADVANCE(541);
      if (lookahead == '1') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(512);
      if (lookahead == '$') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(108);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(527);
      if (lookahead == '3') ADVANCE(528);
      if (lookahead == '4') ADVANCE(532);
      if (lookahead == '5') ADVANCE(533);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(554);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'G') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'H') ADVANCE(20);
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(524);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(525);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(530);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(531);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(529);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(523);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(526);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(522);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(241);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(263);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(118);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(217);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(487);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(488);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(253);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(364);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(432);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(448);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(265);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(429);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(334);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(389);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(329);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(339);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(450);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(430);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(350);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(354);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(120);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(121);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(122);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(357);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'g') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(547);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(348);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(349);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(351);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(353);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(355);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(356);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'p') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(359);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(455);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(456);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(540);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(281);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(425);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(586);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(439);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(304);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(390);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(606);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 232:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == 'x') ADVANCE(394);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 268:
      if (lookahead == 'k') ADVANCE(581);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(380);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(413);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(449);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 369:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(536);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(580);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(587);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 465:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 466:
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(401);
      END_STATE();
    case 472:
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 473:
      if (lookahead == 'v') ADVANCE(240);
      END_STATE();
    case 474:
      if (lookahead == 'v') ADVANCE(212);
      END_STATE();
    case 475:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 476:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 477:
      if (lookahead == 'v') ADVANCE(173);
      END_STATE();
    case 478:
      if (lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 479:
      if (lookahead == 'v') ADVANCE(198);
      END_STATE();
    case 480:
      if (lookahead == 'v') ADVANCE(210);
      END_STATE();
    case 481:
      if (lookahead == 'v') ADVANCE(213);
      END_STATE();
    case 482:
      if (lookahead == 'w') ADVANCE(601);
      END_STATE();
    case 483:
      if (lookahead == 'w') ADVANCE(597);
      END_STATE();
    case 484:
      if (lookahead == 'w') ADVANCE(582);
      END_STATE();
    case 485:
      if (lookahead == 'w') ADVANCE(600);
      END_STATE();
    case 486:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 487:
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 488:
      if (lookahead == 'w') ADVANCE(248);
      END_STATE();
    case 489:
      if (lookahead == 'w') ADVANCE(203);
      END_STATE();
    case 490:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 491:
      if (lookahead == 'x') ADVANCE(438);
      END_STATE();
    case 492:
      if (lookahead == 'x') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 493:
      if (lookahead == 'y') ADVANCE(596);
      END_STATE();
    case 494:
      if (lookahead == 'y') ADVANCE(568);
      END_STATE();
    case 495:
      if (lookahead == 'y') ADVANCE(588);
      END_STATE();
    case 496:
      if (lookahead == 'y') ADVANCE(589);
      END_STATE();
    case 497:
      if (lookahead == 'y') ADVANCE(590);
      END_STATE();
    case 498:
      if (lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 499:
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 500:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 501:
      if (lookahead == 'z') ADVANCE(183);
      END_STATE();
    case 502:
      if (lookahead == 'z') ADVANCE(167);
      END_STATE();
    case 503:
      if (lookahead == 'z') ADVANCE(168);
      END_STATE();
    case 504:
      if (lookahead == 'z') ADVANCE(106);
      END_STATE();
    case 505:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      END_STATE();
    case 506:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 507:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 508:
      if (eof) ADVANCE(510);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '0') ADVANCE(518);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'f') ADVANCE(460);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 509:
      if (eof) ADVANCE(510);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '.') ADVANCE(505);
      if (lookahead == '0') ADVANCE(543);
      if (lookahead == '1') ADVANCE(546);
      if (lookahead == '=') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(14);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'W') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '{') ADVANCE(565);
      if (lookahead == '}') ADVANCE(566);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(515);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(521);
      if (lookahead == 'x') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(521);
      if (lookahead == 'x') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__hex_comp);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == '.') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'c') ADVANCE(328);
      if (lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__hex_comp);
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_variable_reference_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_general);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_decoration);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_sensitivity);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_border_size);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_no_border_on_floating);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_gaps_in);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_gaps_out);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_col_DOTinactive_border);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_col_DOTactive_border);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border);
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_col_DOTgroup_border_active);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_cursor_inactive_timeout);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_no_cursor_warps);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_no_focus_fallback);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_apply_sens_to_raw);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_resize_on_border);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_extend_border_grab_area);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_hover_icon_on_border);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_rounding);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_multisample_edges);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_active_opacity);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_inactive_opacity);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_fullscreen_opacity);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_blur);
      if (lookahead == '_') ADVANCE(235);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_blur_size);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_blur_passes);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_blur_ignore_opacity);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_blur_new_optimizations);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_blur_xray);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_drop_shadow);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_shadow_range);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_shadow_render_power);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_shadow_ignore_window);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow);
      if (lookahead == '_') ADVANCE(266);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_col_DOTshadow_inactive);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_shadow_offset);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_shadow_scale);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_dim_inactive);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_dim_strength);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_dim_special);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_dim_around);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_screen_shader);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 508},
  [2] = {.lex_state = 508},
  [3] = {.lex_state = 508},
  [4] = {.lex_state = 508},
  [5] = {.lex_state = 508},
  [6] = {.lex_state = 508},
  [7] = {.lex_state = 508},
  [8] = {.lex_state = 508},
  [9] = {.lex_state = 508},
  [10] = {.lex_state = 508},
  [11] = {.lex_state = 508},
  [12] = {.lex_state = 508},
  [13] = {.lex_state = 508},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 508},
  [18] = {.lex_state = 508},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 508},
  [21] = {.lex_state = 508},
  [22] = {.lex_state = 508},
  [23] = {.lex_state = 508},
  [24] = {.lex_state = 508},
  [25] = {.lex_state = 508},
  [26] = {.lex_state = 508},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 508},
  [29] = {.lex_state = 508},
  [30] = {.lex_state = 508},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 508},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 514},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 508},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 508},
  [50] = {.lex_state = 508},
  [51] = {.lex_state = 508},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 508},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 508},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 508},
  [67] = {.lex_state = 508},
  [68] = {.lex_state = 508},
  [69] = {.lex_state = 508},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 508},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_SHIFT] = ACTIONS(1),
    [anon_sym_CAPS] = ACTIONS(1),
    [anon_sym_CTRL] = ACTIONS(1),
    [anon_sym_CONTROL] = ACTIONS(1),
    [anon_sym_ALT] = ACTIONS(1),
    [anon_sym_MOD2] = ACTIONS(1),
    [anon_sym_MOD3] = ACTIONS(1),
    [anon_sym_SUPER] = ACTIONS(1),
    [anon_sym_WIN] = ACTIONS(1),
    [anon_sym_LOGO] = ACTIONS(1),
    [anon_sym_MOD4] = ACTIONS(1),
    [anon_sym_MOD5] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_rgb] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_rgba] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [sym__hex_comp] = ACTIONS(1),
    [anon_sym_deg] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_general] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_decoration] = ACTIONS(1),
    [anon_sym_sensitivity] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_border_size] = ACTIONS(1),
    [anon_sym_no_border_on_floating] = ACTIONS(1),
    [anon_sym_gaps_in] = ACTIONS(1),
    [anon_sym_gaps_out] = ACTIONS(1),
    [anon_sym_col_DOTinactive_border] = ACTIONS(1),
    [anon_sym_col_DOTactive_border] = ACTIONS(1),
    [anon_sym_col_DOTgroup_border] = ACTIONS(1),
    [anon_sym_col_DOTgroup_border_active] = ACTIONS(1),
    [anon_sym_cursor_inactive_timeout] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_no_cursor_warps] = ACTIONS(1),
    [anon_sym_no_focus_fallback] = ACTIONS(1),
    [anon_sym_apply_sens_to_raw] = ACTIONS(1),
    [anon_sym_resize_on_border] = ACTIONS(1),
    [anon_sym_extend_border_grab_area] = ACTIONS(1),
    [anon_sym_hover_icon_on_border] = ACTIONS(1),
    [anon_sym_rounding] = ACTIONS(1),
    [anon_sym_multisample_edges] = ACTIONS(1),
    [anon_sym_active_opacity] = ACTIONS(1),
    [anon_sym_inactive_opacity] = ACTIONS(1),
    [anon_sym_fullscreen_opacity] = ACTIONS(1),
    [anon_sym_blur] = ACTIONS(1),
    [anon_sym_blur_size] = ACTIONS(1),
    [anon_sym_blur_passes] = ACTIONS(1),
    [anon_sym_blur_ignore_opacity] = ACTIONS(1),
    [anon_sym_blur_new_optimizations] = ACTIONS(1),
    [anon_sym_blur_xray] = ACTIONS(1),
    [anon_sym_drop_shadow] = ACTIONS(1),
    [anon_sym_shadow_range] = ACTIONS(1),
    [anon_sym_shadow_render_power] = ACTIONS(1),
    [anon_sym_shadow_ignore_window] = ACTIONS(1),
    [anon_sym_col_DOTshadow] = ACTIONS(1),
    [anon_sym_col_DOTshadow_inactive] = ACTIONS(1),
    [anon_sym_shadow_offset] = ACTIONS(1),
    [anon_sym_shadow_scale] = ACTIONS(1),
    [anon_sym_dim_inactive] = ACTIONS(1),
    [anon_sym_dim_strength] = ACTIONS(1),
    [anon_sym_dim_special] = ACTIONS(1),
    [anon_sym_dim_around] = ACTIONS(1),
    [anon_sym_screen_shader] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(79),
    [sym_comment] = STATE(1),
    [sym_variable_section] = STATE(29),
    [aux_sym_config_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [anon_sym_general] = ACTIONS(11),
    [anon_sym_decoration] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_shadow_offset,
    ACTIONS(29), 1,
      anon_sym_screen_shader,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_variable_section_repeat2,
    STATE(5), 1,
      sym__decoration_section_var,
    ACTIONS(25), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(19), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(23), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(21), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [55] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_shadow_offset,
    ACTIONS(51), 1,
      anon_sym_screen_shader,
    STATE(5), 1,
      sym__decoration_section_var,
    ACTIONS(45), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    STATE(3), 2,
      sym_comment,
      aux_sym_variable_section_repeat2,
    ACTIONS(36), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(42), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(39), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [108] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(27), 1,
      anon_sym_shadow_offset,
    ACTIONS(29), 1,
      anon_sym_screen_shader,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_variable_section_repeat2,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      sym__decoration_section_var,
    ACTIONS(25), 2,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
    ACTIONS(19), 5,
      anon_sym_rounding,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
    ACTIONS(23), 7,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_shadow_scale,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
    ACTIONS(21), 8,
      anon_sym_multisample_edges,
      anon_sym_blur,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_ignore_window,
      anon_sym_dim_inactive,
  [163] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      sym__newline,
    STATE(5), 1,
      sym_comment,
    ACTIONS(58), 25,
      anon_sym_RBRACE,
      anon_sym_rounding,
      anon_sym_multisample_edges,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_blur,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
      anon_sym_shadow_ignore_window,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
      anon_sym_shadow_offset,
      anon_sym_shadow_scale,
      anon_sym_dim_inactive,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
      anon_sym_screen_shader,
  [200] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      sym__newline,
    STATE(6), 1,
      sym_comment,
    ACTIONS(62), 25,
      anon_sym_RBRACE,
      anon_sym_rounding,
      anon_sym_multisample_edges,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_blur,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
      anon_sym_shadow_ignore_window,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
      anon_sym_shadow_offset,
      anon_sym_shadow_scale,
      anon_sym_dim_inactive,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
      anon_sym_screen_shader,
  [237] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      sym__newline,
    STATE(7), 1,
      sym_comment,
    ACTIONS(66), 25,
      anon_sym_RBRACE,
      anon_sym_rounding,
      anon_sym_multisample_edges,
      anon_sym_active_opacity,
      anon_sym_inactive_opacity,
      anon_sym_fullscreen_opacity,
      anon_sym_blur,
      anon_sym_blur_size,
      anon_sym_blur_passes,
      anon_sym_blur_ignore_opacity,
      anon_sym_blur_new_optimizations,
      anon_sym_blur_xray,
      anon_sym_drop_shadow,
      anon_sym_shadow_range,
      anon_sym_shadow_render_power,
      anon_sym_shadow_ignore_window,
      anon_sym_col_DOTshadow,
      anon_sym_col_DOTshadow_inactive,
      anon_sym_shadow_offset,
      anon_sym_shadow_scale,
      anon_sym_dim_inactive,
      anon_sym_dim_strength,
      anon_sym_dim_special,
      anon_sym_dim_around,
      anon_sym_screen_shader,
  [274] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym__newline,
    ACTIONS(70), 1,
      anon_sym_sensitivity,
    ACTIONS(78), 1,
      anon_sym_layout,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_variable_section_repeat1,
    STATE(13), 1,
      sym__general_section_var,
    ACTIONS(76), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(72), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(74), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [320] = 10,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_sensitivity,
    ACTIONS(97), 1,
      anon_sym_layout,
    STATE(13), 1,
      sym__general_section_var,
    STATE(9), 2,
      sym_comment,
      aux_sym_variable_section_repeat1,
    ACTIONS(94), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(88), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(91), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [364] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym__newline,
    ACTIONS(70), 1,
      anon_sym_sensitivity,
    ACTIONS(78), 1,
      anon_sym_layout,
    STATE(9), 1,
      aux_sym_variable_section_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      sym__general_section_var,
    ACTIONS(76), 4,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
    ACTIONS(72), 5,
      anon_sym_border_size,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_cursor_inactive_timeout,
      anon_sym_extend_border_grab_area,
    ACTIONS(74), 6,
      anon_sym_no_border_on_floating,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_hover_icon_on_border,
  [410] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      sym__newline,
    STATE(11), 1,
      sym_comment,
    ACTIONS(102), 18,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_border_size,
      anon_sym_no_border_on_floating,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
      anon_sym_cursor_inactive_timeout,
      anon_sym_layout,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_extend_border_grab_area,
      anon_sym_hover_icon_on_border,
  [440] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym__newline,
    STATE(12), 1,
      sym_comment,
    ACTIONS(106), 18,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_border_size,
      anon_sym_no_border_on_floating,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
      anon_sym_cursor_inactive_timeout,
      anon_sym_layout,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_extend_border_grab_area,
      anon_sym_hover_icon_on_border,
  [470] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      sym__newline,
    STATE(13), 1,
      sym_comment,
    ACTIONS(110), 18,
      anon_sym_RBRACE,
      anon_sym_sensitivity,
      anon_sym_border_size,
      anon_sym_no_border_on_floating,
      anon_sym_gaps_in,
      anon_sym_gaps_out,
      anon_sym_col_DOTinactive_border,
      anon_sym_col_DOTactive_border,
      anon_sym_col_DOTgroup_border,
      anon_sym_col_DOTgroup_border_active,
      anon_sym_cursor_inactive_timeout,
      anon_sym_layout,
      anon_sym_no_cursor_warps,
      anon_sym_no_focus_fallback,
      anon_sym_apply_sens_to_raw,
      anon_sym_resize_on_border,
      anon_sym_extend_border_grab_area,
      anon_sym_hover_icon_on_border,
  [500] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(47), 2,
      sym_bool,
      sym_variable_reference,
    STATE(51), 2,
      sym__bool_literal,
      sym__bool_integer,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [530] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(51), 2,
      sym__bool_literal,
      sym__bool_integer,
    STATE(58), 2,
      sym_bool,
      sym_variable_reference,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [560] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(118), 1,
      anon_sym_rgb,
    ACTIONS(120), 1,
      anon_sym_rgba,
    ACTIONS(122), 1,
      anon_sym_0x,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_gradient_repeat1,
    STATE(24), 1,
      sym_color,
    STATE(47), 2,
      sym_gradient,
      sym_variable_reference,
    STATE(26), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [594] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(118), 1,
      anon_sym_rgb,
    ACTIONS(124), 1,
      sym_int,
    ACTIONS(126), 1,
      anon_sym_rgba,
    ACTIONS(128), 1,
      anon_sym_0x,
    ACTIONS(130), 1,
      sym__newline,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_gradient_repeat1,
    STATE(24), 1,
      sym_color,
    STATE(66), 1,
      sym_degree,
    STATE(26), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [630] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      sym_int,
    ACTIONS(134), 1,
      anon_sym_rgb,
    ACTIONS(137), 1,
      anon_sym_rgba,
    ACTIONS(140), 1,
      anon_sym_0x,
    ACTIONS(143), 1,
      sym__newline,
    STATE(24), 1,
      sym_color,
    STATE(18), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(26), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [661] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(118), 1,
      anon_sym_rgb,
    ACTIONS(120), 1,
      anon_sym_rgba,
    ACTIONS(122), 1,
      anon_sym_0x,
    STATE(19), 1,
      sym_comment,
    STATE(58), 2,
      sym_color,
      sym_variable_reference,
    STATE(26), 3,
      sym_color_rgb,
      sym_color_rgba,
      sym_color_hex,
  [689] = 8,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_general,
    ACTIONS(13), 1,
      anon_sym_decoration,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_config_file_repeat1,
    STATE(29), 1,
      sym_variable_section,
  [714] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(152), 1,
      anon_sym_general,
    ACTIONS(155), 1,
      anon_sym_decoration,
    STATE(29), 1,
      sym_variable_section,
    STATE(21), 2,
      sym_comment,
      aux_sym_config_file_repeat1,
  [737] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      sym__newline,
    STATE(22), 1,
      sym_comment,
    ACTIONS(158), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [753] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      sym__newline,
    STATE(23), 1,
      sym_comment,
    ACTIONS(162), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [769] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      sym__newline,
    STATE(24), 1,
      sym_comment,
    ACTIONS(166), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [785] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      sym__newline,
    STATE(25), 1,
      sym_comment,
    ACTIONS(170), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [801] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      sym__newline,
    STATE(26), 1,
      sym_comment,
    ACTIONS(174), 4,
      sym_int,
      anon_sym_rgb,
      anon_sym_rgba,
      anon_sym_0x,
  [817] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      sym_float,
    STATE(27), 1,
      sym_comment,
    STATE(58), 2,
      sym_vec2,
      sym_variable_reference,
  [834] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(182), 2,
      anon_sym_general,
      anon_sym_decoration,
  [849] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(186), 2,
      anon_sym_general,
      anon_sym_decoration,
  [864] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(190), 2,
      anon_sym_general,
      anon_sym_decoration,
  [879] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      sym_str,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_comment,
    STATE(58), 1,
      sym_variable_reference,
  [895] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      sym_str,
    STATE(32), 1,
      sym_comment,
    STATE(47), 1,
      sym_variable_reference,
  [911] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      sym_float,
    STATE(33), 1,
      sym_comment,
    STATE(58), 1,
      sym_variable_reference,
  [927] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      sym_int,
    STATE(34), 1,
      sym_comment,
    STATE(58), 1,
      sym_variable_reference,
  [943] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(200), 1,
      sym_float,
    STATE(35), 1,
      sym_comment,
    STATE(47), 1,
      sym_variable_reference,
  [959] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(200), 1,
      sym_int,
    STATE(36), 1,
      sym_comment,
    STATE(47), 1,
      sym_variable_reference,
  [975] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_comment,
  [985] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym__newline,
    STATE(38), 1,
      sym_comment,
  [995] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_comment,
  [1005] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_comment,
  [1015] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_comment,
  [1025] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
  [1035] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(214), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_comment,
  [1045] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(216), 1,
      anon_sym_EQ,
    STATE(44), 1,
      sym_comment,
  [1055] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_comment,
  [1065] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(220), 1,
      anon_sym_EQ,
    STATE(46), 1,
      sym_comment,
  [1075] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      sym__newline,
    STATE(47), 1,
      sym_comment,
  [1085] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      aux_sym_variable_reference_token1,
    STATE(48), 1,
      sym_comment,
  [1095] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      sym__newline,
    STATE(49), 1,
      sym_comment,
  [1105] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      sym__newline,
    STATE(50), 1,
      sym_comment,
  [1115] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      sym__newline,
    STATE(51), 1,
      sym_comment,
  [1125] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_comment,
  [1135] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_comment,
  [1145] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      sym__hex_comp,
    STATE(54), 1,
      sym_comment,
  [1155] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_comment,
  [1165] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_comment,
  [1175] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_comment,
  [1185] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      sym__newline,
    STATE(58), 1,
      sym_comment,
  [1195] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      sym_float,
    STATE(59), 1,
      sym_comment,
  [1205] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_comment,
  [1215] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      sym__newline,
    STATE(61), 1,
      sym_comment,
  [1225] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      sym__hex_comp,
    STATE(62), 1,
      sym_comment,
  [1235] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      sym__hex_comp,
    STATE(63), 1,
      sym_comment,
  [1245] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      sym__hex_comp,
    STATE(64), 1,
      sym_comment,
  [1255] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      anon_sym_deg,
    STATE(65), 1,
      sym_comment,
  [1265] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      sym__newline,
    STATE(66), 1,
      sym_comment,
  [1275] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      sym__newline,
    STATE(67), 1,
      sym_comment,
  [1285] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      sym__newline,
    STATE(68), 1,
      sym_comment,
  [1295] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      sym__newline,
    STATE(69), 1,
      sym_comment,
  [1305] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      sym__hex_comp,
    STATE(70), 1,
      sym_comment,
  [1315] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      sym__hex_comp,
    STATE(71), 1,
      sym_comment,
  [1325] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      sym__hex_comp,
    STATE(72), 1,
      sym_comment,
  [1335] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      sym__newline,
    STATE(73), 1,
      sym_comment,
  [1345] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(276), 1,
      sym__hex_comp,
    STATE(74), 1,
      sym_comment,
  [1355] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      sym__hex_comp,
    STATE(75), 1,
      sym_comment,
  [1365] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      sym__hex_comp,
    STATE(76), 1,
      sym_comment,
  [1375] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_comment,
  [1385] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(284), 1,
      sym__hex_comp,
    STATE(78), 1,
      sym_comment,
  [1395] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_comment,
  [1405] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_comment,
  [1415] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_comment,
  [1425] = 1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 163,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 320,
  [SMALL_STATE(10)] = 364,
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 440,
  [SMALL_STATE(13)] = 470,
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 530,
  [SMALL_STATE(16)] = 560,
  [SMALL_STATE(17)] = 594,
  [SMALL_STATE(18)] = 630,
  [SMALL_STATE(19)] = 661,
  [SMALL_STATE(20)] = 689,
  [SMALL_STATE(21)] = 714,
  [SMALL_STATE(22)] = 737,
  [SMALL_STATE(23)] = 753,
  [SMALL_STATE(24)] = 769,
  [SMALL_STATE(25)] = 785,
  [SMALL_STATE(26)] = 801,
  [SMALL_STATE(27)] = 817,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 849,
  [SMALL_STATE(30)] = 864,
  [SMALL_STATE(31)] = 879,
  [SMALL_STATE(32)] = 895,
  [SMALL_STATE(33)] = 911,
  [SMALL_STATE(34)] = 927,
  [SMALL_STATE(35)] = 943,
  [SMALL_STATE(36)] = 959,
  [SMALL_STATE(37)] = 975,
  [SMALL_STATE(38)] = 985,
  [SMALL_STATE(39)] = 995,
  [SMALL_STATE(40)] = 1005,
  [SMALL_STATE(41)] = 1015,
  [SMALL_STATE(42)] = 1025,
  [SMALL_STATE(43)] = 1035,
  [SMALL_STATE(44)] = 1045,
  [SMALL_STATE(45)] = 1055,
  [SMALL_STATE(46)] = 1065,
  [SMALL_STATE(47)] = 1075,
  [SMALL_STATE(48)] = 1085,
  [SMALL_STATE(49)] = 1095,
  [SMALL_STATE(50)] = 1105,
  [SMALL_STATE(51)] = 1115,
  [SMALL_STATE(52)] = 1125,
  [SMALL_STATE(53)] = 1135,
  [SMALL_STATE(54)] = 1145,
  [SMALL_STATE(55)] = 1155,
  [SMALL_STATE(56)] = 1165,
  [SMALL_STATE(57)] = 1175,
  [SMALL_STATE(58)] = 1185,
  [SMALL_STATE(59)] = 1195,
  [SMALL_STATE(60)] = 1205,
  [SMALL_STATE(61)] = 1215,
  [SMALL_STATE(62)] = 1225,
  [SMALL_STATE(63)] = 1235,
  [SMALL_STATE(64)] = 1245,
  [SMALL_STATE(65)] = 1255,
  [SMALL_STATE(66)] = 1265,
  [SMALL_STATE(67)] = 1275,
  [SMALL_STATE(68)] = 1285,
  [SMALL_STATE(69)] = 1295,
  [SMALL_STATE(70)] = 1305,
  [SMALL_STATE(71)] = 1315,
  [SMALL_STATE(72)] = 1325,
  [SMALL_STATE(73)] = 1335,
  [SMALL_STATE(74)] = 1345,
  [SMALL_STATE(75)] = 1355,
  [SMALL_STATE(76)] = 1365,
  [SMALL_STATE(77)] = 1375,
  [SMALL_STATE(78)] = 1385,
  [SMALL_STATE(79)] = 1395,
  [SMALL_STATE(80)] = 1405,
  [SMALL_STATE(81)] = 1415,
  [SMALL_STATE(82)] = 1425,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(44),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(43),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(60),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(39),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(40),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 2), SHIFT_REPEAT(41),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat2, 1, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_section_var, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_section_var, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decoration_section_var, 4, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decoration_section_var, 4, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(56),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(55),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(46),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(37),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 2), SHIFT_REPEAT(45),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__general_section_var, 4, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__general_section_var, 4, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__general_section_var, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__general_section_var, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_section_repeat1, 1, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(52),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(53),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(54),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(29),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(57),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(80),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgba, 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgba, 7),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_hex, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_hex, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_rgb, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_rgb, 6),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 5, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 5, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_section, 4, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_section, 4, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_literal, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_integer, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_degree, 2, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hypr(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
