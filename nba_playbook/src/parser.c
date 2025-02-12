#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 523
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 0
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 17
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_PLAY = 1,
  anon_sym_with = 2,
  anon_sym_COMMA = 3,
  anon_sym_BALL = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_shoot = 7,
  anon_sym_LPAREN = 8,
  anon_sym_layup = 9,
  anon_sym_dunk = 10,
  anon_sym_jumper = 11,
  anon_sym_step_DASHback = 12,
  anon_sym_floater = 13,
  anon_sym_fadeaway = 14,
  anon_sym_pull_DASHup = 15,
  anon_sym_bank_DASHshot = 16,
  anon_sym_RPAREN = 17,
  anon_sym_pass = 18,
  anon_sym_to = 19,
  anon_sym_bounce = 20,
  anon_sym_lob = 21,
  anon_sym_chest = 22,
  anon_sym_behind_DASHthe_DASHback = 23,
  anon_sym_no_DASHlook = 24,
  anon_sym_through = 25,
  anon_sym_setscreen = 26,
  anon_sym_for = 27,
  anon_sym_at = 28,
  anon_sym_dribble = 29,
  anon_sym_crossover = 30,
  anon_sym_hesitation = 31,
  anon_sym_spin_DASHmove = 32,
  anon_sym_in_DASHand_DASHout = 33,
  anon_sym_cut = 34,
  anon_sym_backdoor = 35,
  anon_sym_flare = 36,
  anon_sym_curl = 37,
  anon_sym_fade = 38,
  anon_sym_postup = 39,
  anon_sym_block = 40,
  anon_sym_shot = 41,
  anon_sym_by = 42,
  anon_sym_steal = 43,
  anon_sym_from = 44,
  anon_sym_contest = 45,
  anon_sym_switch = 46,
  anon_sym_onto = 47,
  anon_sym_doubleteam = 48,
  anon_sym_on = 49,
  anon_sym_intentionally = 50,
  anon_sym_fouls = 51,
  anon_sym_callstimeout = 52,
  anon_sym_TopofKey = 53,
  anon_sym_FreeThrowLine = 54,
  anon_sym_ElbowLeft = 55,
  anon_sym_ElbowRight = 56,
  anon_sym_HalfCourt = 57,
  anon_sym_Backcourt = 58,
  anon_sym_Logo = 59,
  anon_sym_LeftWing = 60,
  anon_sym_RightWing = 61,
  anon_sym_LeftCorner = 62,
  anon_sym_RightCorner = 63,
  anon_sym_RestrictedArea = 64,
  anon_sym_Paint = 65,
  anon_sym_LowBlock = 66,
  anon_sym_LowPost = 67,
  anon_sym_HighPost = 68,
  anon_sym_PERSON = 69,
  anon_sym_INFORMATION = 70,
  anon_sym_Height = 71,
  anon_sym_COLON = 72,
  anon_sym_m = 73,
  anon_sym_Weight = 74,
  anon_sym_kg = 75,
  anon_sym_Wingspan = 76,
  anon_sym_Age = 77,
  anon_sym_years = 78,
  anon_sym_ATTRIBUTES = 79,
  anon_sym_PERCENT = 80,
  anon_sym_CALCULATE = 81,
  anon_sym_RETURN = 82,
  anon_sym_SEMI = 83,
  anon_sym_EQ = 84,
  anon_sym_STAR = 85,
  anon_sym_SLASH = 86,
  anon_sym_SLASH_SLASH = 87,
  anon_sym_PLUS = 88,
  anon_sym_DASH = 89,
  anon_sym_DOT = 90,
  anon_sym_EVAL = 91,
  anon_sym_TEAM = 92,
  anon_sym_AT = 93,
  anon_sym_PointGuard = 94,
  anon_sym_ShootingGuard = 95,
  anon_sym_SmallForward = 96,
  anon_sym_PowerForward = 97,
  anon_sym_Center = 98,
  anon_sym_BallHandler = 99,
  anon_sym_OnBall = 100,
  anon_sym_OffBall = 101,
  sym_opponent_identifier = 102,
  sym_identifier = 103,
  sym__string_first_capitalised = 104,
  sym_string_capitalised = 105,
  sym__digit = 106,
  sym_start = 107,
  sym__action_only = 108,
  sym_playbook = 109,
  sym_play = 110,
  sym_returns = 111,
  sym__action_holder = 112,
  sym_offensive_action = 113,
  sym_defensive_action = 114,
  sym_special_action = 115,
  sym_shoot = 116,
  sym_shoot_type = 117,
  sym_pass = 118,
  sym_pass_type = 119,
  sym_screen = 120,
  sym_dribble = 121,
  sym_dribble_move = 122,
  sym_cut = 123,
  sym_cut_type = 124,
  sym_post_up = 125,
  sym_block = 126,
  sym_steal = 127,
  sym_contest = 128,
  sym_switch = 129,
  sym_double_team = 130,
  sym_foul = 131,
  sym_timeout = 132,
  sym_location = 133,
  sym__frontcourt = 134,
  sym__backcourt = 135,
  sym__wing = 136,
  sym__corner = 137,
  sym__paint = 138,
  sym__post = 139,
  sym_player_def = 140,
  sym_player_name = 141,
  sym_player_personals = 142,
  sym_player_attributes = 143,
  sym_attribute_category = 144,
  sym_attribute = 145,
  sym_calculate = 146,
  sym_calculation_holder = 147,
  sym_calculation_variable = 148,
  sym_calculation_expression = 149,
  sym__calculation_line = 150,
  sym__calculate_higher_precedence = 151,
  sym__calculate_lower_precedence = 152,
  sym_calculation_bracket = 153,
  sym__calculation_values = 154,
  sym_attribute_access = 155,
  sym_evaluate = 156,
  sym_evaluation_holder = 157,
  sym_evaluation_function = 158,
  sym_function_chain = 159,
  sym_team = 160,
  sym_team_holder = 161,
  sym_player = 162,
  sym_name = 163,
  sym_player_identifier = 164,
  sym_float = 165,
  sym__num = 166,
  sym_num = 167,
  aux_sym_start_repeat1 = 168,
  aux_sym_playbook_repeat1 = 169,
  aux_sym_play_repeat1 = 170,
  aux_sym__action_holder_repeat1 = 171,
  aux_sym__action_holder_repeat2 = 172,
  aux_sym__action_holder_repeat3 = 173,
  aux_sym_player_attributes_repeat1 = 174,
  aux_sym_attribute_category_repeat1 = 175,
  aux_sym_calculation_holder_repeat1 = 176,
  aux_sym_evaluate_repeat1 = 177,
  aux_sym_evaluation_holder_repeat1 = 178,
  aux_sym_function_chain_repeat1 = 179,
  aux_sym_team_holder_repeat1 = 180,
  aux_sym_name_repeat1 = 181,
  aux_sym__num_repeat1 = 182,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLAY] = "PLAY",
  [anon_sym_with] = "with",
  [anon_sym_COMMA] = ",",
  [anon_sym_BALL] = "BALL",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_shoot] = "shoot",
  [anon_sym_LPAREN] = "(",
  [anon_sym_layup] = "layup",
  [anon_sym_dunk] = "dunk",
  [anon_sym_jumper] = "jumper",
  [anon_sym_step_DASHback] = "step-back",
  [anon_sym_floater] = "floater",
  [anon_sym_fadeaway] = "fadeaway",
  [anon_sym_pull_DASHup] = "pull-up",
  [anon_sym_bank_DASHshot] = "bank-shot",
  [anon_sym_RPAREN] = ")",
  [anon_sym_pass] = "pass",
  [anon_sym_to] = "to",
  [anon_sym_bounce] = "bounce",
  [anon_sym_lob] = "lob",
  [anon_sym_chest] = "chest",
  [anon_sym_behind_DASHthe_DASHback] = "behind-the-back",
  [anon_sym_no_DASHlook] = "no-look",
  [anon_sym_through] = "through",
  [anon_sym_setscreen] = "set screen",
  [anon_sym_for] = "for",
  [anon_sym_at] = "at",
  [anon_sym_dribble] = "dribble",
  [anon_sym_crossover] = "crossover",
  [anon_sym_hesitation] = "hesitation",
  [anon_sym_spin_DASHmove] = "spin-move",
  [anon_sym_in_DASHand_DASHout] = "in-and-out",
  [anon_sym_cut] = "cut",
  [anon_sym_backdoor] = "backdoor",
  [anon_sym_flare] = "flare",
  [anon_sym_curl] = "curl",
  [anon_sym_fade] = "fade",
  [anon_sym_postup] = "post up",
  [anon_sym_block] = "block",
  [anon_sym_shot] = "shot",
  [anon_sym_by] = "by",
  [anon_sym_steal] = "steal",
  [anon_sym_from] = "from",
  [anon_sym_contest] = "contest",
  [anon_sym_switch] = "switch",
  [anon_sym_onto] = "onto",
  [anon_sym_doubleteam] = "double team",
  [anon_sym_on] = "on",
  [anon_sym_intentionally] = "intentionally",
  [anon_sym_fouls] = "fouls",
  [anon_sym_callstimeout] = "calls timeout",
  [anon_sym_TopofKey] = "Top of Key",
  [anon_sym_FreeThrowLine] = "Free Throw Line",
  [anon_sym_ElbowLeft] = "Elbow Left",
  [anon_sym_ElbowRight] = "Elbow Right",
  [anon_sym_HalfCourt] = "Half Court",
  [anon_sym_Backcourt] = "Backcourt",
  [anon_sym_Logo] = "Logo",
  [anon_sym_LeftWing] = "Left Wing",
  [anon_sym_RightWing] = "Right Wing",
  [anon_sym_LeftCorner] = "Left Corner",
  [anon_sym_RightCorner] = "Right Corner",
  [anon_sym_RestrictedArea] = "Restricted Area",
  [anon_sym_Paint] = "Paint",
  [anon_sym_LowBlock] = "Low Block",
  [anon_sym_LowPost] = "Low Post",
  [anon_sym_HighPost] = "High Post",
  [anon_sym_PERSON] = "PERSON",
  [anon_sym_INFORMATION] = "INFORMATION",
  [anon_sym_Height] = "Height",
  [anon_sym_COLON] = ":",
  [anon_sym_m] = "m",
  [anon_sym_Weight] = "Weight",
  [anon_sym_kg] = "kg",
  [anon_sym_Wingspan] = "Wingspan",
  [anon_sym_Age] = "Age",
  [anon_sym_years] = "years",
  [anon_sym_ATTRIBUTES] = "ATTRIBUTES",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CALCULATE] = "CALCULATE",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "/ /",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_EVAL] = "EVAL",
  [anon_sym_TEAM] = "TEAM",
  [anon_sym_AT] = "@",
  [anon_sym_PointGuard] = "Point Guard",
  [anon_sym_ShootingGuard] = "Shooting Guard",
  [anon_sym_SmallForward] = "Small Forward",
  [anon_sym_PowerForward] = "Power Forward",
  [anon_sym_Center] = "Center",
  [anon_sym_BallHandler] = "Ball Handler",
  [anon_sym_OnBall] = "On Ball",
  [anon_sym_OffBall] = "Off Ball",
  [sym_opponent_identifier] = "opponent_identifier",
  [sym_identifier] = "identifier",
  [sym__string_first_capitalised] = "_string_first_capitalised",
  [sym_string_capitalised] = "identifier",
  [sym__digit] = "_digit",
  [sym_start] = "start",
  [sym__action_only] = "_action_only",
  [sym_playbook] = "playbook",
  [sym_play] = "play",
  [sym_returns] = "returns",
  [sym__action_holder] = "_action_holder",
  [sym_offensive_action] = "offensive_action",
  [sym_defensive_action] = "defensive_action",
  [sym_special_action] = "special_action",
  [sym_shoot] = "shoot",
  [sym_shoot_type] = "shoot_type",
  [sym_pass] = "pass",
  [sym_pass_type] = "pass_type",
  [sym_screen] = "screen",
  [sym_dribble] = "dribble",
  [sym_dribble_move] = "dribble_move",
  [sym_cut] = "cut",
  [sym_cut_type] = "cut_type",
  [sym_post_up] = "post_up",
  [sym_block] = "block",
  [sym_steal] = "steal",
  [sym_contest] = "contest",
  [sym_switch] = "switch",
  [sym_double_team] = "double_team",
  [sym_foul] = "foul",
  [sym_timeout] = "timeout",
  [sym_location] = "location",
  [sym__frontcourt] = "_frontcourt",
  [sym__backcourt] = "_backcourt",
  [sym__wing] = "_wing",
  [sym__corner] = "_corner",
  [sym__paint] = "_paint",
  [sym__post] = "_post",
  [sym_player_def] = "player_def",
  [sym_player_name] = "player_name",
  [sym_player_personals] = "player_personals",
  [sym_player_attributes] = "player_attributes",
  [sym_attribute_category] = "attribute_category",
  [sym_attribute] = "attribute",
  [sym_calculate] = "calculate",
  [sym_calculation_holder] = "calculation_holder",
  [sym_calculation_variable] = "calculation_variable",
  [sym_calculation_expression] = "calculation_expression",
  [sym__calculation_line] = "_calculation_line",
  [sym__calculate_higher_precedence] = "_calculate_higher_precedence",
  [sym__calculate_lower_precedence] = "_calculate_lower_precedence",
  [sym_calculation_bracket] = "calculation_bracket",
  [sym__calculation_values] = "_calculation_values",
  [sym_attribute_access] = "attribute_access",
  [sym_evaluate] = "evaluate",
  [sym_evaluation_holder] = "evaluation_holder",
  [sym_evaluation_function] = "evaluation_function",
  [sym_function_chain] = "function_chain",
  [sym_team] = "team",
  [sym_team_holder] = "team_holder",
  [sym_player] = "player",
  [sym_name] = "name",
  [sym_player_identifier] = "player_identifier",
  [sym_float] = "float",
  [sym__num] = "_num",
  [sym_num] = "num",
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym_playbook_repeat1] = "playbook_repeat1",
  [aux_sym_play_repeat1] = "play_repeat1",
  [aux_sym__action_holder_repeat1] = "_action_holder_repeat1",
  [aux_sym__action_holder_repeat2] = "_action_holder_repeat2",
  [aux_sym__action_holder_repeat3] = "_action_holder_repeat3",
  [aux_sym_player_attributes_repeat1] = "player_attributes_repeat1",
  [aux_sym_attribute_category_repeat1] = "attribute_category_repeat1",
  [aux_sym_calculation_holder_repeat1] = "calculation_holder_repeat1",
  [aux_sym_evaluate_repeat1] = "evaluate_repeat1",
  [aux_sym_evaluation_holder_repeat1] = "evaluation_holder_repeat1",
  [aux_sym_function_chain_repeat1] = "function_chain_repeat1",
  [aux_sym_team_holder_repeat1] = "team_holder_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
  [aux_sym__num_repeat1] = "_num_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLAY] = anon_sym_PLAY,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BALL] = anon_sym_BALL,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_shoot] = anon_sym_shoot,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_layup] = anon_sym_layup,
  [anon_sym_dunk] = anon_sym_dunk,
  [anon_sym_jumper] = anon_sym_jumper,
  [anon_sym_step_DASHback] = anon_sym_step_DASHback,
  [anon_sym_floater] = anon_sym_floater,
  [anon_sym_fadeaway] = anon_sym_fadeaway,
  [anon_sym_pull_DASHup] = anon_sym_pull_DASHup,
  [anon_sym_bank_DASHshot] = anon_sym_bank_DASHshot,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_bounce] = anon_sym_bounce,
  [anon_sym_lob] = anon_sym_lob,
  [anon_sym_chest] = anon_sym_chest,
  [anon_sym_behind_DASHthe_DASHback] = anon_sym_behind_DASHthe_DASHback,
  [anon_sym_no_DASHlook] = anon_sym_no_DASHlook,
  [anon_sym_through] = anon_sym_through,
  [anon_sym_setscreen] = anon_sym_setscreen,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_dribble] = anon_sym_dribble,
  [anon_sym_crossover] = anon_sym_crossover,
  [anon_sym_hesitation] = anon_sym_hesitation,
  [anon_sym_spin_DASHmove] = anon_sym_spin_DASHmove,
  [anon_sym_in_DASHand_DASHout] = anon_sym_in_DASHand_DASHout,
  [anon_sym_cut] = anon_sym_cut,
  [anon_sym_backdoor] = anon_sym_backdoor,
  [anon_sym_flare] = anon_sym_flare,
  [anon_sym_curl] = anon_sym_curl,
  [anon_sym_fade] = anon_sym_fade,
  [anon_sym_postup] = anon_sym_postup,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_shot] = anon_sym_shot,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_steal] = anon_sym_steal,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_contest] = anon_sym_contest,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_onto] = anon_sym_onto,
  [anon_sym_doubleteam] = anon_sym_doubleteam,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_intentionally] = anon_sym_intentionally,
  [anon_sym_fouls] = anon_sym_fouls,
  [anon_sym_callstimeout] = anon_sym_callstimeout,
  [anon_sym_TopofKey] = anon_sym_TopofKey,
  [anon_sym_FreeThrowLine] = anon_sym_FreeThrowLine,
  [anon_sym_ElbowLeft] = anon_sym_ElbowLeft,
  [anon_sym_ElbowRight] = anon_sym_ElbowRight,
  [anon_sym_HalfCourt] = anon_sym_HalfCourt,
  [anon_sym_Backcourt] = anon_sym_Backcourt,
  [anon_sym_Logo] = anon_sym_Logo,
  [anon_sym_LeftWing] = anon_sym_LeftWing,
  [anon_sym_RightWing] = anon_sym_RightWing,
  [anon_sym_LeftCorner] = anon_sym_LeftCorner,
  [anon_sym_RightCorner] = anon_sym_RightCorner,
  [anon_sym_RestrictedArea] = anon_sym_RestrictedArea,
  [anon_sym_Paint] = anon_sym_Paint,
  [anon_sym_LowBlock] = anon_sym_LowBlock,
  [anon_sym_LowPost] = anon_sym_LowPost,
  [anon_sym_HighPost] = anon_sym_HighPost,
  [anon_sym_PERSON] = anon_sym_PERSON,
  [anon_sym_INFORMATION] = anon_sym_INFORMATION,
  [anon_sym_Height] = anon_sym_Height,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_Weight] = anon_sym_Weight,
  [anon_sym_kg] = anon_sym_kg,
  [anon_sym_Wingspan] = anon_sym_Wingspan,
  [anon_sym_Age] = anon_sym_Age,
  [anon_sym_years] = anon_sym_years,
  [anon_sym_ATTRIBUTES] = anon_sym_ATTRIBUTES,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CALCULATE] = anon_sym_CALCULATE,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EVAL] = anon_sym_EVAL,
  [anon_sym_TEAM] = anon_sym_TEAM,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PointGuard] = anon_sym_PointGuard,
  [anon_sym_ShootingGuard] = anon_sym_ShootingGuard,
  [anon_sym_SmallForward] = anon_sym_SmallForward,
  [anon_sym_PowerForward] = anon_sym_PowerForward,
  [anon_sym_Center] = anon_sym_Center,
  [anon_sym_BallHandler] = anon_sym_BallHandler,
  [anon_sym_OnBall] = anon_sym_OnBall,
  [anon_sym_OffBall] = anon_sym_OffBall,
  [sym_opponent_identifier] = sym_opponent_identifier,
  [sym_identifier] = sym_identifier,
  [sym__string_first_capitalised] = sym__string_first_capitalised,
  [sym_string_capitalised] = sym_identifier,
  [sym__digit] = sym__digit,
  [sym_start] = sym_start,
  [sym__action_only] = sym__action_only,
  [sym_playbook] = sym_playbook,
  [sym_play] = sym_play,
  [sym_returns] = sym_returns,
  [sym__action_holder] = sym__action_holder,
  [sym_offensive_action] = sym_offensive_action,
  [sym_defensive_action] = sym_defensive_action,
  [sym_special_action] = sym_special_action,
  [sym_shoot] = sym_shoot,
  [sym_shoot_type] = sym_shoot_type,
  [sym_pass] = sym_pass,
  [sym_pass_type] = sym_pass_type,
  [sym_screen] = sym_screen,
  [sym_dribble] = sym_dribble,
  [sym_dribble_move] = sym_dribble_move,
  [sym_cut] = sym_cut,
  [sym_cut_type] = sym_cut_type,
  [sym_post_up] = sym_post_up,
  [sym_block] = sym_block,
  [sym_steal] = sym_steal,
  [sym_contest] = sym_contest,
  [sym_switch] = sym_switch,
  [sym_double_team] = sym_double_team,
  [sym_foul] = sym_foul,
  [sym_timeout] = sym_timeout,
  [sym_location] = sym_location,
  [sym__frontcourt] = sym__frontcourt,
  [sym__backcourt] = sym__backcourt,
  [sym__wing] = sym__wing,
  [sym__corner] = sym__corner,
  [sym__paint] = sym__paint,
  [sym__post] = sym__post,
  [sym_player_def] = sym_player_def,
  [sym_player_name] = sym_player_name,
  [sym_player_personals] = sym_player_personals,
  [sym_player_attributes] = sym_player_attributes,
  [sym_attribute_category] = sym_attribute_category,
  [sym_attribute] = sym_attribute,
  [sym_calculate] = sym_calculate,
  [sym_calculation_holder] = sym_calculation_holder,
  [sym_calculation_variable] = sym_calculation_variable,
  [sym_calculation_expression] = sym_calculation_expression,
  [sym__calculation_line] = sym__calculation_line,
  [sym__calculate_higher_precedence] = sym__calculate_higher_precedence,
  [sym__calculate_lower_precedence] = sym__calculate_lower_precedence,
  [sym_calculation_bracket] = sym_calculation_bracket,
  [sym__calculation_values] = sym__calculation_values,
  [sym_attribute_access] = sym_attribute_access,
  [sym_evaluate] = sym_evaluate,
  [sym_evaluation_holder] = sym_evaluation_holder,
  [sym_evaluation_function] = sym_evaluation_function,
  [sym_function_chain] = sym_function_chain,
  [sym_team] = sym_team,
  [sym_team_holder] = sym_team_holder,
  [sym_player] = sym_player,
  [sym_name] = sym_name,
  [sym_player_identifier] = sym_player_identifier,
  [sym_float] = sym_float,
  [sym__num] = sym__num,
  [sym_num] = sym_num,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym_playbook_repeat1] = aux_sym_playbook_repeat1,
  [aux_sym_play_repeat1] = aux_sym_play_repeat1,
  [aux_sym__action_holder_repeat1] = aux_sym__action_holder_repeat1,
  [aux_sym__action_holder_repeat2] = aux_sym__action_holder_repeat2,
  [aux_sym__action_holder_repeat3] = aux_sym__action_holder_repeat3,
  [aux_sym_player_attributes_repeat1] = aux_sym_player_attributes_repeat1,
  [aux_sym_attribute_category_repeat1] = aux_sym_attribute_category_repeat1,
  [aux_sym_calculation_holder_repeat1] = aux_sym_calculation_holder_repeat1,
  [aux_sym_evaluate_repeat1] = aux_sym_evaluate_repeat1,
  [aux_sym_evaluation_holder_repeat1] = aux_sym_evaluation_holder_repeat1,
  [aux_sym_function_chain_repeat1] = aux_sym_function_chain_repeat1,
  [aux_sym_team_holder_repeat1] = aux_sym_team_holder_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
  [aux_sym__num_repeat1] = aux_sym__num_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BALL] = {
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
  [anon_sym_shoot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dunk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jumper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_step_DASHback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floater] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fadeaway] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pull_DASHup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bank_DASHshot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bounce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_behind_DASHthe_DASHback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHlook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_through] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dribble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crossover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hesitation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spin_DASHmove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in_DASHand_DASHout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backdoor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_curl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fade] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_steal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_onto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doubleteam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intentionally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fouls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callstimeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TopofKey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FreeThrowLine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ElbowLeft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ElbowRight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HalfCourt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Backcourt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Logo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LeftWing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RightWing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LeftCorner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RightCorner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RestrictedArea] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Paint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LowBlock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LowPost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HighPost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERSON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFORMATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Weight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Wingspan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Age] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTRIBUTES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CALCULATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EVAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PointGuard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ShootingGuard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SmallForward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PowerForward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BallHandler] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OnBall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OffBall] = {
    .visible = true,
    .named = false,
  },
  [sym_opponent_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__string_first_capitalised] = {
    .visible = false,
    .named = true,
  },
  [sym_string_capitalised] = {
    .visible = true,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym__action_only] = {
    .visible = false,
    .named = true,
  },
  [sym_playbook] = {
    .visible = true,
    .named = true,
  },
  [sym_play] = {
    .visible = true,
    .named = true,
  },
  [sym_returns] = {
    .visible = true,
    .named = true,
  },
  [sym__action_holder] = {
    .visible = false,
    .named = true,
  },
  [sym_offensive_action] = {
    .visible = true,
    .named = true,
  },
  [sym_defensive_action] = {
    .visible = true,
    .named = true,
  },
  [sym_special_action] = {
    .visible = true,
    .named = true,
  },
  [sym_shoot] = {
    .visible = true,
    .named = true,
  },
  [sym_shoot_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pass] = {
    .visible = true,
    .named = true,
  },
  [sym_pass_type] = {
    .visible = true,
    .named = true,
  },
  [sym_screen] = {
    .visible = true,
    .named = true,
  },
  [sym_dribble] = {
    .visible = true,
    .named = true,
  },
  [sym_dribble_move] = {
    .visible = true,
    .named = true,
  },
  [sym_cut] = {
    .visible = true,
    .named = true,
  },
  [sym_cut_type] = {
    .visible = true,
    .named = true,
  },
  [sym_post_up] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_steal] = {
    .visible = true,
    .named = true,
  },
  [sym_contest] = {
    .visible = true,
    .named = true,
  },
  [sym_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_double_team] = {
    .visible = true,
    .named = true,
  },
  [sym_foul] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym__frontcourt] = {
    .visible = false,
    .named = true,
  },
  [sym__backcourt] = {
    .visible = false,
    .named = true,
  },
  [sym__wing] = {
    .visible = false,
    .named = true,
  },
  [sym__corner] = {
    .visible = false,
    .named = true,
  },
  [sym__paint] = {
    .visible = false,
    .named = true,
  },
  [sym__post] = {
    .visible = false,
    .named = true,
  },
  [sym_player_def] = {
    .visible = true,
    .named = true,
  },
  [sym_player_name] = {
    .visible = true,
    .named = true,
  },
  [sym_player_personals] = {
    .visible = true,
    .named = true,
  },
  [sym_player_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_category] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_calculate] = {
    .visible = true,
    .named = true,
  },
  [sym_calculation_holder] = {
    .visible = true,
    .named = true,
  },
  [sym_calculation_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_calculation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__calculation_line] = {
    .visible = false,
    .named = true,
  },
  [sym__calculate_higher_precedence] = {
    .visible = false,
    .named = true,
  },
  [sym__calculate_lower_precedence] = {
    .visible = false,
    .named = true,
  },
  [sym_calculation_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym__calculation_values] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_access] = {
    .visible = true,
    .named = true,
  },
  [sym_evaluate] = {
    .visible = true,
    .named = true,
  },
  [sym_evaluation_holder] = {
    .visible = true,
    .named = true,
  },
  [sym_evaluation_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_chain] = {
    .visible = true,
    .named = true,
  },
  [sym_team] = {
    .visible = true,
    .named = true,
  },
  [sym_team_holder] = {
    .visible = true,
    .named = true,
  },
  [sym_player] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_player_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym__num] = {
    .visible = false,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_start_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_playbook_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_play_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__action_holder_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__action_holder_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__action_holder_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_player_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_category_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_calculation_holder_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_evaluate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_evaluation_holder_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_chain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_team_holder_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__num_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [24] = 22,
  [25] = 21,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 21,
  [30] = 23,
  [31] = 31,
  [32] = 28,
  [33] = 28,
  [34] = 26,
  [35] = 31,
  [36] = 31,
  [37] = 26,
  [38] = 22,
  [39] = 23,
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 5,
  [95] = 4,
  [96] = 10,
  [97] = 11,
  [98] = 93,
  [99] = 99,
  [100] = 100,
  [101] = 43,
  [102] = 102,
  [103] = 93,
  [104] = 92,
  [105] = 92,
  [106] = 43,
  [107] = 4,
  [108] = 11,
  [109] = 109,
  [110] = 47,
  [111] = 46,
  [112] = 48,
  [113] = 5,
  [114] = 4,
  [115] = 10,
  [116] = 11,
  [117] = 47,
  [118] = 46,
  [119] = 48,
  [120] = 5,
  [121] = 10,
  [122] = 74,
  [123] = 78,
  [124] = 80,
  [125] = 82,
  [126] = 83,
  [127] = 86,
  [128] = 55,
  [129] = 88,
  [130] = 61,
  [131] = 59,
  [132] = 60,
  [133] = 62,
  [134] = 63,
  [135] = 64,
  [136] = 65,
  [137] = 73,
  [138] = 74,
  [139] = 79,
  [140] = 55,
  [141] = 61,
  [142] = 79,
  [143] = 4,
  [144] = 89,
  [145] = 89,
  [146] = 81,
  [147] = 87,
  [148] = 56,
  [149] = 11,
  [150] = 72,
  [151] = 78,
  [152] = 80,
  [153] = 82,
  [154] = 83,
  [155] = 86,
  [156] = 81,
  [157] = 88,
  [158] = 87,
  [159] = 59,
  [160] = 60,
  [161] = 62,
  [162] = 63,
  [163] = 64,
  [164] = 65,
  [165] = 73,
  [166] = 166,
  [167] = 56,
  [168] = 5,
  [169] = 72,
  [170] = 10,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 174,
  [176] = 176,
  [177] = 177,
  [178] = 173,
  [179] = 172,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 176,
  [187] = 177,
  [188] = 188,
  [189] = 174,
  [190] = 176,
  [191] = 177,
  [192] = 192,
  [193] = 192,
  [194] = 194,
  [195] = 173,
  [196] = 185,
  [197] = 182,
  [198] = 182,
  [199] = 172,
  [200] = 180,
  [201] = 201,
  [202] = 181,
  [203] = 180,
  [204] = 201,
  [205] = 181,
  [206] = 185,
  [207] = 201,
  [208] = 192,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 212,
  [216] = 212,
  [217] = 212,
  [218] = 218,
  [219] = 219,
  [220] = 212,
  [221] = 218,
  [222] = 218,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 254,
  [266] = 262,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 250,
  [271] = 253,
  [272] = 257,
  [273] = 260,
  [274] = 268,
  [275] = 251,
  [276] = 256,
  [277] = 255,
  [278] = 278,
  [279] = 279,
  [280] = 254,
  [281] = 262,
  [282] = 245,
  [283] = 42,
  [284] = 250,
  [285] = 253,
  [286] = 257,
  [287] = 260,
  [288] = 268,
  [289] = 251,
  [290] = 256,
  [291] = 255,
  [292] = 76,
  [293] = 245,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 324,
  [329] = 109,
  [330] = 319,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 319,
  [344] = 323,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 323,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 319,
  [363] = 339,
  [364] = 342,
  [365] = 347,
  [366] = 319,
  [367] = 339,
  [368] = 342,
  [369] = 347,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 412,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 430,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 402,
  [436] = 436,
  [437] = 437,
  [438] = 406,
  [439] = 414,
  [440] = 427,
  [441] = 441,
  [442] = 432,
  [443] = 443,
  [444] = 444,
  [445] = 403,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 417,
  [452] = 452,
  [453] = 419,
  [454] = 454,
  [455] = 417,
  [456] = 422,
  [457] = 423,
  [458] = 424,
  [459] = 425,
  [460] = 412,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 430,
  [465] = 422,
  [466] = 441,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 406,
  [473] = 414,
  [474] = 427,
  [475] = 441,
  [476] = 476,
  [477] = 419,
  [478] = 423,
  [479] = 479,
  [480] = 417,
  [481] = 419,
  [482] = 417,
  [483] = 419,
  [484] = 484,
  [485] = 485,
  [486] = 413,
  [487] = 487,
  [488] = 488,
  [489] = 402,
  [490] = 463,
  [491] = 437,
  [492] = 487,
  [493] = 493,
  [494] = 471,
  [495] = 485,
  [496] = 496,
  [497] = 447,
  [498] = 449,
  [499] = 470,
  [500] = 493,
  [501] = 424,
  [502] = 413,
  [503] = 503,
  [504] = 425,
  [505] = 505,
  [506] = 463,
  [507] = 437,
  [508] = 487,
  [509] = 493,
  [510] = 471,
  [511] = 485,
  [512] = 512,
  [513] = 447,
  [514] = 449,
  [515] = 470,
  [516] = 516,
  [517] = 517,
  [518] = 452,
  [519] = 436,
  [520] = 452,
  [521] = 436,
  [522] = 432,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(489);
      ADVANCE_MAP(
        '!', 602,
        '%', 576,
        '(', 500,
        ')', 509,
        '*', 582,
        '+', 585,
        ',', 494,
        '-', 586,
        '.', 587,
        '/', 583,
        ':', 568,
        ';', 580,
        '=', 581,
        '@', 592,
        'A', 95,
        'B', 40,
        'C', 43,
        'E', 105,
        'F', 386,
        'H', 108,
        'I', 81,
        'L', 175,
        'O', 215,
        'P', 57,
        'R', 60,
        'S', 237,
        'T', 62,
        'W', 213,
        'a', 423,
        'b', 109,
        'c', 114,
        'd', 340,
        'f', 110,
        'h', 187,
        'i', 303,
        'j', 461,
        'k', 221,
        'l', 112,
        'm', 569,
        'n', 332,
        'o', 304,
        'p', 119,
        's', 185,
        't', 236,
        'w', 247,
        'y', 188,
        '{', 497,
        '}', 498,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(464);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(412);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(362);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(445);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(455);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '!', 602,
        '%', 576,
        '(', 500,
        ')', 509,
        ',', 494,
        'B', 641,
        'C', 643,
        'O', 646,
        'P', 659,
        'S', 649,
        '_', 607,
        '}', 498,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(667);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '!', 602,
        '(', 500,
        'B', 622,
        'C', 643,
        'O', 646,
        'P', 659,
        'S', 649,
        'a', 423,
        'b', 140,
        'c', 468,
        'f', 135,
        'o', 308,
        'w', 247,
        '}', 498,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(667);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '!', 602,
        '(', 500,
        'B', 143,
        'C', 189,
        'O', 215,
        'P', 331,
        'R', 59,
        'S', 237,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(602);
      if (lookahead == ')') ADVANCE(509);
      if (lookahead == '_') ADVANCE(607);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(667);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(602);
      if (lookahead == '@') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(667);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '!', 602,
        'B', 641,
        'C', 643,
        'O', 646,
        'P', 659,
        'S', 649,
        '_', 607,
        'a', 606,
        '}', 498,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(667);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '!', 602,
        'B', 641,
        'C', 643,
        'O', 646,
        'P', 659,
        'S', 649,
        '_', 607,
        'w', 604,
        '}', 498,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(667);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(145);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(465);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(414);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(451);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(584);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(404);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(641);
      if (lookahead == 'C') ADVANCE(643);
      if (lookahead == 'O') ADVANCE(646);
      if (lookahead == 'P') ADVANCE(659);
      if (lookahead == 'S') ADVANCE(649);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(667);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(294);
      if (lookahead == 'P') ADVANCE(365);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(139);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(141);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(347);
      if (lookahead == 'W') ADVANCE(257);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(367);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(368);
      if (lookahead == 'W') ADVANCE(258);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(577);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(350);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(369);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(471);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(475);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'K') ADVANCE(190);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(495);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(588);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(207);
      if (lookahead == 'R') ADVANCE(265);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(263);
      END_STATE();
    case 79:
      if (lookahead == 'M') ADVANCE(590);
      END_STATE();
    case 80:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(564);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(579);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(566);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 'P') ADVANCE(366);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(575);
      END_STATE();
    case 94:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 102:
      if (lookahead == 'U') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == 'U') ADVANCE(76);
      END_STATE();
    case 105:
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'Y') ADVANCE(490);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(668);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == 'y') ADVANCE(536);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(513);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(335);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(296);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(291);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(596);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(594);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'h') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'h') ADVANCE(358);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(435);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(447);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(555);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(556);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(410);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(336);
      if (lookahead == 'w') ADVANCE(2);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(492);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(540);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(517);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 240:
      if (lookahead == 'h') ADVANCE(429);
      END_STATE();
    case 241:
      if (lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 242:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(438);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(402);
      END_STATE();
    case 245:
      if (lookahead == 'h') ADVANCE(254);
      END_STATE();
    case 246:
      if (lookahead == 'h') ADVANCE(459);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(191);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 266:
      if (lookahead == 'k') ADVANCE(502);
      END_STATE();
    case 267:
      if (lookahead == 'k') ADVANCE(534);
      END_STATE();
    case 268:
      if (lookahead == 'k') ADVANCE(516);
      END_STATE();
    case 269:
      if (lookahead == 'k') ADVANCE(561);
      END_STATE();
    case 270:
      if (lookahead == 'k') ADVANCE(504);
      END_STATE();
    case 271:
      if (lookahead == 'k') ADVANCE(515);
      END_STATE();
    case 272:
      if (lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 273:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 274:
      if (lookahead == 'k') ADVANCE(160);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(530);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(600);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(601);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(462);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 371:
      if (lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 372:
      if (lookahead == 'p') ADVANCE(507);
      END_STATE();
    case 373:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 374:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 465:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 466:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 476:
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 477:
      if (lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 478:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 479:
      if (lookahead == 'w') ADVANCE(6);
      END_STATE();
    case 480:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 481:
      if (lookahead == 'w') ADVANCE(125);
      END_STATE();
    case 482:
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 483:
      if (lookahead == 'y') ADVANCE(506);
      END_STATE();
    case 484:
      if (lookahead == 'y') ADVANCE(548);
      END_STATE();
    case 485:
      if (lookahead == 'y') ADVANCE(545);
      END_STATE();
    case 486:
      if (lookahead == 'y') ADVANCE(463);
      END_STATE();
    case 487:
      if (lookahead == '}') ADVANCE(498);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(487);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(668);
      END_STATE();
    case 488:
      if (eof) ADVANCE(489);
      ADVANCE_MAP(
        '!', 602,
        '(', 500,
        ')', 509,
        ',', 494,
        '.', 587,
        'B', 641,
        'C', 617,
        'E', 639,
        'O', 646,
        'P', 624,
        'S', 649,
        'T', 626,
        'a', 423,
        'b', 127,
        'c', 115,
        'd', 340,
        'f', 131,
        'i', 329,
        'j', 461,
        'l', 111,
        'o', 326,
        'p', 119,
        's', 186,
        'w', 247,
        '{', 497,
        '}', 498,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(667);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_PLAY);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_PLAY);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_BALL);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_BALL);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_shoot);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_layup);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_dunk);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_jumper);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_step_DASHback);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_floater);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_fadeaway);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_pull_DASHup);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_bank_DASHshot);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_bounce);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_lob);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_chest);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_behind_DASHthe_DASHback);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_no_DASHlook);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_setscreen);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_at);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_dribble);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_crossover);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_hesitation);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_spin_DASHmove);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_in_DASHand_DASHout);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_cut);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_backdoor);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_flare);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_curl);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_fade);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_fade);
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_postup);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_shot);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_steal);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_contest);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_doubleteam);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_intentionally);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_fouls);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_callstimeout);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_TopofKey);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_FreeThrowLine);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_ElbowLeft);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_ElbowRight);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_HalfCourt);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_Backcourt);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_Logo);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LeftWing);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_RightWing);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LeftCorner);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_RightCorner);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_RestrictedArea);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_Paint);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LowBlock);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LowPost);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_HighPost);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_PERSON);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_PERSON);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_INFORMATION);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_m);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_Weight);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_kg);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_Wingspan);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_Age);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ATTRIBUTES);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_CALCULATE);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_CALCULATE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_EVAL);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_EVAL);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_TEAM);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_TEAM);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_PointGuard);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_ShootingGuard);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_SmallForward);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_PowerForward);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_Center);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_Center);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_BallHandler);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_OnBall);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_OffBall);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_opponent_identifier);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == ' ') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == ' ') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == ' ') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == ' ') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == ' ') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == ' ') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == ' ') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'A') ADVANCE(627);
      if (lookahead == 'e') ADVANCE(656);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'A') ADVANCE(640);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'A') ADVANCE(632);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'A') ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'A') ADVANCE(628);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'A') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(652);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'C') ADVANCE(638);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'E') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(618);
      if (lookahead == 'o') ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'E') ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'E') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'L') ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'L') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'L') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'L') ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'L') ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'M') ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'N') ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'O') ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'R') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'S') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'T') ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'U') ADVANCE(630);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'V') ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'Y') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'a') ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'a') ADVANCE(654);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'e') ADVANCE(656);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'e') ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'e') ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'n') ADVANCE(610);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'f') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'g') ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'h') ADVANCE(660);
      if (lookahead == 'm') ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'i') ADVANCE(657);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'i') ADVANCE(658);
      if (lookahead == 'w') ADVANCE(644);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'l') ADVANCE(653);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'l') ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'l') ADVANCE(655);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'l') ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'n') ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'n') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'n') ADVANCE(665);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'o') ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'o') ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'o') ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'r') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 'r') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 't') ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 't') ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (lookahead == 't') ADVANCE(645);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__string_first_capitalised);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_string_capitalised);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 488},
  [2] = {.lex_state = 488},
  [3] = {.lex_state = 488},
  [4] = {.lex_state = 488},
  [5] = {.lex_state = 488},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 488},
  [11] = {.lex_state = 488},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 488},
  [44] = {.lex_state = 488},
  [45] = {.lex_state = 488},
  [46] = {.lex_state = 488},
  [47] = {.lex_state = 488},
  [48] = {.lex_state = 488},
  [49] = {.lex_state = 488},
  [50] = {.lex_state = 488},
  [51] = {.lex_state = 488},
  [52] = {.lex_state = 488},
  [53] = {.lex_state = 488},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 488},
  [56] = {.lex_state = 488},
  [57] = {.lex_state = 488},
  [58] = {.lex_state = 488},
  [59] = {.lex_state = 488},
  [60] = {.lex_state = 488},
  [61] = {.lex_state = 488},
  [62] = {.lex_state = 488},
  [63] = {.lex_state = 488},
  [64] = {.lex_state = 488},
  [65] = {.lex_state = 488},
  [66] = {.lex_state = 488},
  [67] = {.lex_state = 488},
  [68] = {.lex_state = 488},
  [69] = {.lex_state = 488},
  [70] = {.lex_state = 488},
  [71] = {.lex_state = 488},
  [72] = {.lex_state = 488},
  [73] = {.lex_state = 488},
  [74] = {.lex_state = 488},
  [75] = {.lex_state = 488},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 488},
  [78] = {.lex_state = 488},
  [79] = {.lex_state = 488},
  [80] = {.lex_state = 488},
  [81] = {.lex_state = 488},
  [82] = {.lex_state = 488},
  [83] = {.lex_state = 488},
  [84] = {.lex_state = 488},
  [85] = {.lex_state = 488},
  [86] = {.lex_state = 488},
  [87] = {.lex_state = 488},
  [88] = {.lex_state = 488},
  [89] = {.lex_state = 488},
  [90] = {.lex_state = 488},
  [91] = {.lex_state = 488},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 24},
  [96] = {.lex_state = 24},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 28},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 24},
  [118] = {.lex_state = 24},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 24},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 24},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 23},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 24},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 24},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 23},
  [171] = {.lex_state = 48},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 488},
  [219] = {.lex_state = 26},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 488},
  [222] = {.lex_state = 488},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 26},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 26},
  [232] = {.lex_state = 26},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 27},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 27},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 27},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 27},
  [251] = {.lex_state = 27},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 27},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 27},
  [256] = {.lex_state = 27},
  [257] = {.lex_state = 27},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 27},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 27},
  [266] = {.lex_state = 27},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 27},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 27},
  [272] = {.lex_state = 27},
  [273] = {.lex_state = 27},
  [274] = {.lex_state = 27},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 27},
  [277] = {.lex_state = 27},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 27},
  [281] = {.lex_state = 27},
  [282] = {.lex_state = 27},
  [283] = {.lex_state = 23},
  [284] = {.lex_state = 27},
  [285] = {.lex_state = 27},
  [286] = {.lex_state = 27},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 27},
  [289] = {.lex_state = 27},
  [290] = {.lex_state = 27},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 23},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 25},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 487},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 487},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 25},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 487},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 23},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 24},
  [318] = {.lex_state = 27},
  [319] = {.lex_state = 27},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 27},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 23},
  [330] = {.lex_state = 27},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 23},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 23},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 27},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 27},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 27},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 23},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 107},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 23},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 25},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 487},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 23},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 488},
  [425] = {.lex_state = 24},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 488},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 23},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 23},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 488},
  [459] = {.lex_state = 24},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 24},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 488},
  [492] = {.lex_state = 24},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 488},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 24},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 488},
  [508] = {.lex_state = 24},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLAY] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BALL] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_shoot] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_layup] = ACTIONS(1),
    [anon_sym_dunk] = ACTIONS(1),
    [anon_sym_jumper] = ACTIONS(1),
    [anon_sym_step_DASHback] = ACTIONS(1),
    [anon_sym_floater] = ACTIONS(1),
    [anon_sym_fadeaway] = ACTIONS(1),
    [anon_sym_pull_DASHup] = ACTIONS(1),
    [anon_sym_bank_DASHshot] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_bounce] = ACTIONS(1),
    [anon_sym_lob] = ACTIONS(1),
    [anon_sym_chest] = ACTIONS(1),
    [anon_sym_behind_DASHthe_DASHback] = ACTIONS(1),
    [anon_sym_no_DASHlook] = ACTIONS(1),
    [anon_sym_through] = ACTIONS(1),
    [anon_sym_setscreen] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_dribble] = ACTIONS(1),
    [anon_sym_crossover] = ACTIONS(1),
    [anon_sym_hesitation] = ACTIONS(1),
    [anon_sym_spin_DASHmove] = ACTIONS(1),
    [anon_sym_in_DASHand_DASHout] = ACTIONS(1),
    [anon_sym_cut] = ACTIONS(1),
    [anon_sym_backdoor] = ACTIONS(1),
    [anon_sym_flare] = ACTIONS(1),
    [anon_sym_curl] = ACTIONS(1),
    [anon_sym_fade] = ACTIONS(1),
    [anon_sym_postup] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_shot] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_steal] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_contest] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_onto] = ACTIONS(1),
    [anon_sym_doubleteam] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_intentionally] = ACTIONS(1),
    [anon_sym_fouls] = ACTIONS(1),
    [anon_sym_callstimeout] = ACTIONS(1),
    [anon_sym_TopofKey] = ACTIONS(1),
    [anon_sym_FreeThrowLine] = ACTIONS(1),
    [anon_sym_ElbowLeft] = ACTIONS(1),
    [anon_sym_ElbowRight] = ACTIONS(1),
    [anon_sym_HalfCourt] = ACTIONS(1),
    [anon_sym_Backcourt] = ACTIONS(1),
    [anon_sym_Logo] = ACTIONS(1),
    [anon_sym_LeftWing] = ACTIONS(1),
    [anon_sym_RightWing] = ACTIONS(1),
    [anon_sym_LeftCorner] = ACTIONS(1),
    [anon_sym_RightCorner] = ACTIONS(1),
    [anon_sym_RestrictedArea] = ACTIONS(1),
    [anon_sym_Paint] = ACTIONS(1),
    [anon_sym_LowBlock] = ACTIONS(1),
    [anon_sym_LowPost] = ACTIONS(1),
    [anon_sym_HighPost] = ACTIONS(1),
    [anon_sym_PERSON] = ACTIONS(1),
    [anon_sym_INFORMATION] = ACTIONS(1),
    [anon_sym_Height] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_Weight] = ACTIONS(1),
    [anon_sym_kg] = ACTIONS(1),
    [anon_sym_Wingspan] = ACTIONS(1),
    [anon_sym_Age] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
    [anon_sym_ATTRIBUTES] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CALCULATE] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EVAL] = ACTIONS(1),
    [anon_sym_TEAM] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PointGuard] = ACTIONS(1),
    [anon_sym_ShootingGuard] = ACTIONS(1),
    [anon_sym_SmallForward] = ACTIONS(1),
    [anon_sym_PowerForward] = ACTIONS(1),
    [anon_sym_Center] = ACTIONS(1),
    [anon_sym_BallHandler] = ACTIONS(1),
    [anon_sym_OnBall] = ACTIONS(1),
    [anon_sym_OffBall] = ACTIONS(1),
    [sym_opponent_identifier] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(476),
    [sym__action_only] = STATE(3),
    [sym_playbook] = STATE(3),
    [sym_play] = STATE(44),
    [sym_offensive_action] = STATE(3),
    [sym_defensive_action] = STATE(3),
    [sym_special_action] = STATE(3),
    [sym_shoot] = STATE(55),
    [sym_pass] = STATE(55),
    [sym_screen] = STATE(55),
    [sym_dribble] = STATE(55),
    [sym_cut] = STATE(55),
    [sym_post_up] = STATE(55),
    [sym_block] = STATE(61),
    [sym_steal] = STATE(61),
    [sym_contest] = STATE(61),
    [sym_switch] = STATE(61),
    [sym_double_team] = STATE(61),
    [sym_foul] = STATE(79),
    [sym_timeout] = STATE(79),
    [sym_player_def] = STATE(3),
    [sym_calculate] = STATE(3),
    [sym_evaluate] = STATE(3),
    [sym_team] = STATE(3),
    [sym_player] = STATE(93),
    [sym_name] = STATE(455),
    [sym_player_identifier] = STATE(105),
    [aux_sym_start_repeat1] = STATE(3),
    [aux_sym_playbook_repeat1] = STATE(44),
    [aux_sym_name_repeat1] = STATE(321),
    [anon_sym_PLAY] = ACTIONS(3),
    [anon_sym_PERSON] = ACTIONS(5),
    [anon_sym_CALCULATE] = ACTIONS(7),
    [anon_sym_EVAL] = ACTIONS(9),
    [anon_sym_TEAM] = ACTIONS(11),
    [anon_sym_PointGuard] = ACTIONS(13),
    [anon_sym_ShootingGuard] = ACTIONS(13),
    [anon_sym_SmallForward] = ACTIONS(13),
    [anon_sym_PowerForward] = ACTIONS(13),
    [anon_sym_Center] = ACTIONS(15),
    [anon_sym_BallHandler] = ACTIONS(13),
    [anon_sym_OnBall] = ACTIONS(13),
    [anon_sym_OffBall] = ACTIONS(13),
    [sym_opponent_identifier] = ACTIONS(17),
    [sym__string_first_capitalised] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_PLAY,
    ACTIONS(26), 1,
      anon_sym_PERSON,
    ACTIONS(29), 1,
      anon_sym_CALCULATE,
    ACTIONS(32), 1,
      anon_sym_EVAL,
    ACTIONS(35), 1,
      anon_sym_TEAM,
    ACTIONS(41), 1,
      anon_sym_Center,
    ACTIONS(44), 1,
      sym_opponent_identifier,
    ACTIONS(47), 1,
      sym__string_first_capitalised,
    STATE(93), 1,
      sym_player,
    STATE(105), 1,
      sym_player_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(44), 2,
      sym_play,
      aux_sym_playbook_repeat1,
    STATE(79), 2,
      sym_foul,
      sym_timeout,
    STATE(61), 5,
      sym_block,
      sym_steal,
      sym_contest,
      sym_switch,
      sym_double_team,
    STATE(55), 6,
      sym_shoot,
      sym_pass,
      sym_screen,
      sym_dribble,
      sym_cut,
      sym_post_up,
    ACTIONS(38), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
    STATE(2), 10,
      sym__action_only,
      sym_playbook,
      sym_offensive_action,
      sym_defensive_action,
      sym_special_action,
      sym_player_def,
      sym_calculate,
      sym_evaluate,
      sym_team,
      aux_sym_start_repeat1,
  [84] = 19,
    ACTIONS(3), 1,
      anon_sym_PLAY,
    ACTIONS(5), 1,
      anon_sym_PERSON,
    ACTIONS(7), 1,
      anon_sym_CALCULATE,
    ACTIONS(9), 1,
      anon_sym_EVAL,
    ACTIONS(11), 1,
      anon_sym_TEAM,
    ACTIONS(15), 1,
      anon_sym_Center,
    ACTIONS(17), 1,
      sym_opponent_identifier,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_player,
    STATE(105), 1,
      sym_player_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(44), 2,
      sym_play,
      aux_sym_playbook_repeat1,
    STATE(79), 2,
      sym_foul,
      sym_timeout,
    STATE(61), 5,
      sym_block,
      sym_steal,
      sym_contest,
      sym_switch,
      sym_double_team,
    STATE(55), 6,
      sym_shoot,
      sym_pass,
      sym_screen,
      sym_dribble,
      sym_cut,
      sym_post_up,
    ACTIONS(13), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
    STATE(2), 10,
      sym__action_only,
      sym_playbook,
      sym_offensive_action,
      sym_defensive_action,
      sym_special_action,
      sym_player_def,
      sym_calculate,
      sym_evaluate,
      sym_team,
      aux_sym_start_repeat1,
  [168] = 2,
    ACTIONS(54), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(52), 29,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_shoot,
      anon_sym_pass,
      anon_sym_setscreen,
      anon_sym_at,
      anon_sym_dribble,
      anon_sym_cut,
      anon_sym_postup,
      anon_sym_block,
      anon_sym_steal,
      anon_sym_contest,
      anon_sym_switch,
      anon_sym_doubleteam,
      anon_sym_intentionally,
      anon_sym_fouls,
      anon_sym_callstimeout,
      anon_sym_DOT,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [209] = 2,
    ACTIONS(58), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(56), 29,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_shoot,
      anon_sym_pass,
      anon_sym_setscreen,
      anon_sym_at,
      anon_sym_dribble,
      anon_sym_cut,
      anon_sym_postup,
      anon_sym_block,
      anon_sym_steal,
      anon_sym_contest,
      anon_sym_switch,
      anon_sym_doubleteam,
      anon_sym_intentionally,
      anon_sym_fouls,
      anon_sym_callstimeout,
      anon_sym_DOT,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [250] = 15,
    ACTIONS(15), 1,
      anon_sym_Center,
    ACTIONS(17), 1,
      sym_opponent_identifier,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(92), 1,
      sym_player_identifier,
    STATE(98), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(9), 2,
      sym_evaluation_function,
      aux_sym_evaluation_holder_repeat1,
    STATE(139), 2,
      sym_foul,
      sym_timeout,
    STATE(130), 5,
      sym_block,
      sym_steal,
      sym_contest,
      sym_switch,
      sym_double_team,
    STATE(166), 5,
      sym__action_only,
      sym_offensive_action,
      sym_defensive_action,
      sym_special_action,
      sym_function_chain,
    STATE(128), 6,
      sym_shoot,
      sym_pass,
      sym_screen,
      sym_dribble,
      sym_cut,
      sym_post_up,
    ACTIONS(13), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [317] = 15,
    ACTIONS(15), 1,
      anon_sym_Center,
    ACTIONS(17), 1,
      sym_opponent_identifier,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_player_identifier,
    STATE(98), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(6), 2,
      sym_evaluation_function,
      aux_sym_evaluation_holder_repeat1,
    STATE(139), 2,
      sym_foul,
      sym_timeout,
    STATE(130), 5,
      sym_block,
      sym_steal,
      sym_contest,
      sym_switch,
      sym_double_team,
    STATE(166), 5,
      sym__action_only,
      sym_offensive_action,
      sym_defensive_action,
      sym_special_action,
      sym_function_chain,
    STATE(128), 6,
      sym_shoot,
      sym_pass,
      sym_screen,
      sym_dribble,
      sym_cut,
      sym_post_up,
    ACTIONS(13), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [384] = 17,
    ACTIONS(15), 1,
      anon_sym_Center,
    ACTIONS(17), 1,
      sym_opponent_identifier,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(66), 1,
      anon_sym_BALL,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_player,
    STATE(104), 1,
      sym_player_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(462), 1,
      sym_returns,
    STATE(12), 2,
      sym_offensive_action,
      aux_sym__action_holder_repeat1,
    STATE(14), 2,
      sym_defensive_action,
      aux_sym__action_holder_repeat2,
    STATE(40), 2,
      sym_special_action,
      aux_sym__action_holder_repeat3,
    STATE(142), 2,
      sym_foul,
      sym_timeout,
    STATE(141), 5,
      sym_block,
      sym_steal,
      sym_contest,
      sym_switch,
      sym_double_team,
    STATE(140), 6,
      sym_shoot,
      sym_pass,
      sym_screen,
      sym_dribble,
      sym_cut,
      sym_post_up,
    ACTIONS(13), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [455] = 15,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_Center,
    ACTIONS(78), 1,
      sym_opponent_identifier,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      sym__string_first_capitalised,
    STATE(92), 1,
      sym_player_identifier,
    STATE(98), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(9), 2,
      sym_evaluation_function,
      aux_sym_evaluation_holder_repeat1,
    STATE(139), 2,
      sym_foul,
      sym_timeout,
    STATE(130), 5,
      sym_block,
      sym_steal,
      sym_contest,
      sym_switch,
      sym_double_team,
    STATE(166), 5,
      sym__action_only,
      sym_offensive_action,
      sym_defensive_action,
      sym_special_action,
      sym_function_chain,
    STATE(128), 6,
      sym_shoot,
      sym_pass,
      sym_screen,
      sym_dribble,
      sym_cut,
      sym_post_up,
    ACTIONS(72), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [522] = 2,
    ACTIONS(89), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(87), 28,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_shoot,
      anon_sym_RPAREN,
      anon_sym_pass,
      anon_sym_setscreen,
      anon_sym_at,
      anon_sym_dribble,
      anon_sym_cut,
      anon_sym_postup,
      anon_sym_block,
      anon_sym_steal,
      anon_sym_contest,
      anon_sym_switch,
      anon_sym_doubleteam,
      anon_sym_intentionally,
      anon_sym_fouls,
      anon_sym_callstimeout,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [562] = 2,
    ACTIONS(93), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(91), 28,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_shoot,
      anon_sym_RPAREN,
      anon_sym_pass,
      anon_sym_setscreen,
      anon_sym_at,
      anon_sym_dribble,
      anon_sym_cut,
      anon_sym_postup,
      anon_sym_block,
      anon_sym_steal,
      anon_sym_contest,
      anon_sym_switch,
      anon_sym_doubleteam,
      anon_sym_intentionally,
      anon_sym_fouls,
      anon_sym_callstimeout,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [602] = 13,
    ACTIONS(15), 1,
      anon_sym_Center,
    ACTIONS(17), 1,
      sym_opponent_identifier,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(66), 1,
      anon_sym_BALL,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_player,
    STATE(240), 1,
      sym_player_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(421), 1,
      sym_returns,
    STATE(455), 1,
      sym_name,
    STATE(15), 2,
      sym_offensive_action,
      aux_sym__action_holder_repeat1,
    STATE(140), 6,
      sym_shoot,
      sym_pass,
      sym_screen,
      sym_dribble,
      sym_cut,
      sym_post_up,
    ACTIONS(13), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [654] = 10,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(227), 1,
      sym_calculation_expression,
    STATE(403), 1,
      sym__num,
    STATE(505), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
    STATE(213), 8,
      sym__calculation_line,
      sym__calculate_higher_precedence,
      sym__calculate_lower_precedence,
      sym_calculation_bracket,
      sym__calculation_values,
      sym_attribute_access,
      sym_float,
      sym_num,
  [699] = 13,
    ACTIONS(15), 1,
      anon_sym_Center,
    ACTIONS(17), 1,
      sym_opponent_identifier,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(66), 1,
      anon_sym_BALL,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_player,
    STATE(264), 1,
      sym_player_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(421), 1,
      sym_returns,
    STATE(455), 1,
      sym_name,
    STATE(27), 2,
      sym_defensive_action,
      aux_sym__action_holder_repeat2,
    STATE(141), 5,
      sym_block,
      sym_steal,
      sym_contest,
      sym_switch,
      sym_double_team,
    ACTIONS(13), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [750] = 12,
    ACTIONS(105), 1,
      anon_sym_BALL,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_Center,
    ACTIONS(115), 1,
      sym_opponent_identifier,
    ACTIONS(118), 1,
      sym__string_first_capitalised,
    STATE(239), 1,
      sym_player,
    STATE(240), 1,
      sym_player_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(15), 2,
      sym_offensive_action,
      aux_sym__action_holder_repeat1,
    STATE(140), 6,
      sym_shoot,
      sym_pass,
      sym_screen,
      sym_dribble,
      sym_cut,
      sym_post_up,
    ACTIONS(109), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [799] = 10,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(223), 1,
      sym_calculation_expression,
    STATE(403), 1,
      sym__num,
    STATE(505), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
    STATE(213), 8,
      sym__calculation_line,
      sym__calculate_higher_precedence,
      sym__calculate_lower_precedence,
      sym_calculation_bracket,
      sym__calculation_values,
      sym_attribute_access,
      sym_float,
      sym_num,
  [844] = 10,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(226), 1,
      sym_calculation_expression,
    STATE(403), 1,
      sym__num,
    STATE(505), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
    STATE(213), 8,
      sym__calculation_line,
      sym__calculate_higher_precedence,
      sym__calculate_lower_precedence,
      sym_calculation_bracket,
      sym__calculation_values,
      sym_attribute_access,
      sym_float,
      sym_num,
  [889] = 10,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(225), 1,
      sym_calculation_expression,
    STATE(403), 1,
      sym__num,
    STATE(505), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
    STATE(213), 8,
      sym__calculation_line,
      sym__calculate_higher_precedence,
      sym__calculate_lower_precedence,
      sym_calculation_bracket,
      sym__calculation_values,
      sym_attribute_access,
      sym_float,
      sym_num,
  [934] = 10,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(209), 1,
      sym_calculation_expression,
    STATE(403), 1,
      sym__num,
    STATE(505), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
    STATE(213), 8,
      sym__calculation_line,
      sym__calculate_higher_precedence,
      sym__calculate_lower_precedence,
      sym_calculation_bracket,
      sym__calculation_values,
      sym_attribute_access,
      sym_float,
      sym_num,
  [979] = 10,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(210), 1,
      sym_calculation_expression,
    STATE(403), 1,
      sym__num,
    STATE(505), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
    STATE(213), 8,
      sym__calculation_line,
      sym__calculate_higher_precedence,
      sym__calculate_lower_precedence,
      sym_calculation_bracket,
      sym__calculation_values,
      sym_attribute_access,
      sym_float,
      sym_num,
  [1024] = 3,
    STATE(153), 1,
      sym_location,
    STATE(151), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(121), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1054] = 3,
    STATE(152), 1,
      sym_location,
    STATE(151), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(121), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1084] = 3,
    STATE(72), 1,
      sym_location,
    STATE(78), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(123), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1114] = 3,
    STATE(80), 1,
      sym_location,
    STATE(78), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(123), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1144] = 3,
    STATE(82), 1,
      sym_location,
    STATE(78), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(123), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1174] = 3,
    STATE(63), 1,
      sym_location,
    STATE(78), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(123), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1204] = 12,
    ACTIONS(125), 1,
      anon_sym_BALL,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      anon_sym_Center,
    ACTIONS(135), 1,
      sym_opponent_identifier,
    ACTIONS(138), 1,
      sym__string_first_capitalised,
    STATE(244), 1,
      sym_player,
    STATE(264), 1,
      sym_player_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(27), 2,
      sym_defensive_action,
      aux_sym__action_holder_repeat2,
    STATE(141), 5,
      sym_block,
      sym_steal,
      sym_contest,
      sym_switch,
      sym_double_team,
    ACTIONS(129), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [1252] = 3,
    STATE(62), 1,
      sym_location,
    STATE(78), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(123), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1282] = 3,
    STATE(125), 1,
      sym_location,
    STATE(123), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(141), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1312] = 3,
    STATE(169), 1,
      sym_location,
    STATE(123), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(141), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1342] = 3,
    STATE(73), 1,
      sym_location,
    STATE(78), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(123), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1372] = 3,
    STATE(161), 1,
      sym_location,
    STATE(151), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(121), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1402] = 3,
    STATE(133), 1,
      sym_location,
    STATE(123), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(141), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1432] = 3,
    STATE(134), 1,
      sym_location,
    STATE(123), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(141), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1462] = 3,
    STATE(137), 1,
      sym_location,
    STATE(123), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(141), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1492] = 3,
    STATE(165), 1,
      sym_location,
    STATE(151), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(121), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1522] = 3,
    STATE(162), 1,
      sym_location,
    STATE(151), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(121), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1552] = 3,
    STATE(124), 1,
      sym_location,
    STATE(123), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(141), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1582] = 3,
    STATE(150), 1,
      sym_location,
    STATE(151), 6,
      sym__frontcourt,
      sym__backcourt,
      sym__wing,
      sym__corner,
      sym__paint,
      sym__post,
    ACTIONS(121), 16,
      anon_sym_TopofKey,
      anon_sym_FreeThrowLine,
      anon_sym_ElbowLeft,
      anon_sym_ElbowRight,
      anon_sym_HalfCourt,
      anon_sym_Backcourt,
      anon_sym_Logo,
      anon_sym_LeftWing,
      anon_sym_RightWing,
      anon_sym_LeftCorner,
      anon_sym_RightCorner,
      anon_sym_RestrictedArea,
      anon_sym_Paint,
      anon_sym_LowBlock,
      anon_sym_LowPost,
      anon_sym_HighPost,
  [1612] = 13,
    ACTIONS(15), 1,
      anon_sym_Center,
    ACTIONS(17), 1,
      sym_opponent_identifier,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(66), 1,
      anon_sym_BALL,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(333), 1,
      sym_player,
    STATE(334), 1,
      sym_player_identifier,
    STATE(421), 1,
      sym_returns,
    STATE(455), 1,
      sym_name,
    STATE(41), 2,
      sym_special_action,
      aux_sym__action_holder_repeat3,
    STATE(142), 2,
      sym_foul,
      sym_timeout,
    ACTIONS(13), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [1660] = 12,
    ACTIONS(143), 1,
      anon_sym_BALL,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      anon_sym_Center,
    ACTIONS(153), 1,
      sym_opponent_identifier,
    ACTIONS(156), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(333), 1,
      sym_player,
    STATE(334), 1,
      sym_player_identifier,
    STATE(455), 1,
      sym_name,
    STATE(41), 2,
      sym_special_action,
      aux_sym__action_holder_repeat3,
    STATE(142), 2,
      sym_foul,
      sym_timeout,
    ACTIONS(147), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [1705] = 4,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      sym__digit,
    STATE(42), 1,
      aux_sym__num_repeat1,
    ACTIONS(159), 16,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_m,
      anon_sym_Weight,
      anon_sym_kg,
      anon_sym_Wingspan,
      anon_sym_Age,
      anon_sym_years,
      anon_sym_ATTRIBUTES,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
  [1733] = 4,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_shoot_type,
    ACTIONS(168), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1760] = 4,
    ACTIONS(3), 1,
      anon_sym_PLAY,
    STATE(45), 2,
      sym_play,
      aux_sym_playbook_repeat1,
    ACTIONS(174), 6,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(172), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1787] = 4,
    ACTIONS(178), 1,
      anon_sym_PLAY,
    STATE(45), 2,
      sym_play,
      aux_sym_playbook_repeat1,
    ACTIONS(181), 6,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(176), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1814] = 3,
    ACTIONS(187), 1,
      anon_sym_with,
    ACTIONS(185), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1838] = 3,
    ACTIONS(193), 1,
      anon_sym_at,
    ACTIONS(191), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(189), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1862] = 3,
    ACTIONS(195), 1,
      anon_sym_with,
    ACTIONS(185), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1886] = 2,
    ACTIONS(199), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1907] = 2,
    ACTIONS(203), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(201), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1928] = 2,
    ACTIONS(207), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(205), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1949] = 2,
    ACTIONS(211), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1970] = 2,
    ACTIONS(215), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(213), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [1991] = 5,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      sym__digit,
    STATE(42), 1,
      aux_sym__num_repeat1,
    ACTIONS(217), 12,
      anon_sym_RPAREN,
      anon_sym_m,
      anon_sym_Weight,
      anon_sym_kg,
      anon_sym_Wingspan,
      anon_sym_Age,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2018] = 2,
    ACTIONS(227), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(225), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2039] = 2,
    ACTIONS(231), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(229), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2060] = 2,
    ACTIONS(235), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(233), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2081] = 2,
    ACTIONS(239), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(237), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2102] = 2,
    ACTIONS(243), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2123] = 2,
    ACTIONS(247), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(245), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2144] = 2,
    ACTIONS(251), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2165] = 2,
    ACTIONS(255), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2186] = 2,
    ACTIONS(259), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2207] = 2,
    ACTIONS(263), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(261), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2228] = 2,
    ACTIONS(267), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(265), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2249] = 2,
    ACTIONS(271), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2270] = 2,
    ACTIONS(275), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(273), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2291] = 2,
    ACTIONS(279), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(277), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2312] = 2,
    ACTIONS(283), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2333] = 2,
    ACTIONS(287), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(285), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2354] = 2,
    ACTIONS(291), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2375] = 2,
    ACTIONS(295), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2396] = 2,
    ACTIONS(299), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(297), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2417] = 2,
    ACTIONS(303), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(301), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2438] = 2,
    ACTIONS(307), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(305), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2459] = 4,
    ACTIONS(223), 1,
      sym__digit,
    ACTIONS(309), 1,
      anon_sym_SLASH,
    STATE(42), 1,
      aux_sym__num_repeat1,
    ACTIONS(221), 13,
      anon_sym_RPAREN,
      anon_sym_m,
      anon_sym_Weight,
      anon_sym_kg,
      anon_sym_Wingspan,
      anon_sym_Age,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
  [2484] = 2,
    ACTIONS(313), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(311), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2505] = 2,
    ACTIONS(317), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2526] = 2,
    ACTIONS(321), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2547] = 2,
    ACTIONS(325), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2568] = 2,
    ACTIONS(329), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2589] = 2,
    ACTIONS(333), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2610] = 2,
    ACTIONS(337), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(335), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2631] = 2,
    ACTIONS(341), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(339), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2652] = 2,
    ACTIONS(345), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(343), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2673] = 2,
    ACTIONS(349), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(347), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2694] = 2,
    ACTIONS(353), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(351), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2715] = 2,
    ACTIONS(357), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2736] = 2,
    ACTIONS(361), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(359), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2757] = 2,
    ACTIONS(365), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2778] = 2,
    ACTIONS(369), 7,
      anon_sym_PLAY,
      anon_sym_PERSON,
      anon_sym_CALCULATE,
      anon_sym_EVAL,
      anon_sym_TEAM,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2799] = 14,
    ACTIONS(371), 1,
      anon_sym_shoot,
    ACTIONS(373), 1,
      anon_sym_pass,
    ACTIONS(375), 1,
      anon_sym_setscreen,
    ACTIONS(377), 1,
      anon_sym_dribble,
    ACTIONS(379), 1,
      anon_sym_cut,
    ACTIONS(381), 1,
      anon_sym_postup,
    ACTIONS(383), 1,
      anon_sym_block,
    ACTIONS(385), 1,
      anon_sym_steal,
    ACTIONS(387), 1,
      anon_sym_contest,
    ACTIONS(389), 1,
      anon_sym_switch,
    ACTIONS(391), 1,
      anon_sym_doubleteam,
    ACTIONS(393), 1,
      anon_sym_intentionally,
    ACTIONS(395), 1,
      anon_sym_fouls,
    ACTIONS(397), 1,
      anon_sym_callstimeout,
  [2842] = 14,
    ACTIONS(399), 1,
      anon_sym_shoot,
    ACTIONS(401), 1,
      anon_sym_pass,
    ACTIONS(403), 1,
      anon_sym_setscreen,
    ACTIONS(405), 1,
      anon_sym_dribble,
    ACTIONS(407), 1,
      anon_sym_cut,
    ACTIONS(409), 1,
      anon_sym_postup,
    ACTIONS(411), 1,
      anon_sym_block,
    ACTIONS(413), 1,
      anon_sym_steal,
    ACTIONS(415), 1,
      anon_sym_contest,
    ACTIONS(417), 1,
      anon_sym_switch,
    ACTIONS(419), 1,
      anon_sym_doubleteam,
    ACTIONS(421), 1,
      anon_sym_intentionally,
    ACTIONS(423), 1,
      anon_sym_fouls,
    ACTIONS(425), 1,
      anon_sym_callstimeout,
  [2885] = 2,
    ACTIONS(58), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(56), 11,
      anon_sym_with,
      anon_sym_RBRACE,
      anon_sym_at,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2904] = 2,
    ACTIONS(54), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(52), 11,
      anon_sym_with,
      anon_sym_RBRACE,
      anon_sym_at,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2923] = 2,
    ACTIONS(89), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(87), 11,
      anon_sym_with,
      anon_sym_RBRACE,
      anon_sym_at,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2942] = 2,
    ACTIONS(93), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(91), 11,
      anon_sym_with,
      anon_sym_RBRACE,
      anon_sym_at,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [2961] = 14,
    ACTIONS(371), 1,
      anon_sym_shoot,
    ACTIONS(377), 1,
      anon_sym_dribble,
    ACTIONS(379), 1,
      anon_sym_cut,
    ACTIONS(381), 1,
      anon_sym_postup,
    ACTIONS(397), 1,
      anon_sym_callstimeout,
    ACTIONS(427), 1,
      anon_sym_pass,
    ACTIONS(429), 1,
      anon_sym_setscreen,
    ACTIONS(431), 1,
      anon_sym_block,
    ACTIONS(433), 1,
      anon_sym_steal,
    ACTIONS(435), 1,
      anon_sym_contest,
    ACTIONS(437), 1,
      anon_sym_switch,
    ACTIONS(439), 1,
      anon_sym_doubleteam,
    ACTIONS(441), 1,
      anon_sym_intentionally,
    ACTIONS(443), 1,
      anon_sym_fouls,
  [3004] = 2,
    ACTIONS(447), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(445), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3023] = 2,
    ACTIONS(451), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(449), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3042] = 4,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_shoot_type,
    ACTIONS(168), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(166), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3065] = 2,
    ACTIONS(457), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(455), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3084] = 14,
    ACTIONS(459), 1,
      anon_sym_shoot,
    ACTIONS(461), 1,
      anon_sym_pass,
    ACTIONS(463), 1,
      anon_sym_setscreen,
    ACTIONS(465), 1,
      anon_sym_dribble,
    ACTIONS(467), 1,
      anon_sym_cut,
    ACTIONS(469), 1,
      anon_sym_postup,
    ACTIONS(471), 1,
      anon_sym_block,
    ACTIONS(473), 1,
      anon_sym_steal,
    ACTIONS(475), 1,
      anon_sym_contest,
    ACTIONS(477), 1,
      anon_sym_switch,
    ACTIONS(479), 1,
      anon_sym_doubleteam,
    ACTIONS(481), 1,
      anon_sym_intentionally,
    ACTIONS(483), 1,
      anon_sym_fouls,
    ACTIONS(485), 1,
      anon_sym_callstimeout,
  [3127] = 14,
    ACTIONS(459), 1,
      anon_sym_shoot,
    ACTIONS(465), 1,
      anon_sym_dribble,
    ACTIONS(467), 1,
      anon_sym_cut,
    ACTIONS(469), 1,
      anon_sym_postup,
    ACTIONS(485), 1,
      anon_sym_callstimeout,
    ACTIONS(487), 1,
      anon_sym_pass,
    ACTIONS(489), 1,
      anon_sym_setscreen,
    ACTIONS(491), 1,
      anon_sym_block,
    ACTIONS(493), 1,
      anon_sym_steal,
    ACTIONS(495), 1,
      anon_sym_contest,
    ACTIONS(497), 1,
      anon_sym_switch,
    ACTIONS(499), 1,
      anon_sym_doubleteam,
    ACTIONS(501), 1,
      anon_sym_intentionally,
    ACTIONS(503), 1,
      anon_sym_fouls,
  [3170] = 14,
    ACTIONS(399), 1,
      anon_sym_shoot,
    ACTIONS(405), 1,
      anon_sym_dribble,
    ACTIONS(407), 1,
      anon_sym_cut,
    ACTIONS(409), 1,
      anon_sym_postup,
    ACTIONS(425), 1,
      anon_sym_callstimeout,
    ACTIONS(505), 1,
      anon_sym_pass,
    ACTIONS(507), 1,
      anon_sym_setscreen,
    ACTIONS(509), 1,
      anon_sym_block,
    ACTIONS(511), 1,
      anon_sym_steal,
    ACTIONS(513), 1,
      anon_sym_contest,
    ACTIONS(515), 1,
      anon_sym_switch,
    ACTIONS(517), 1,
      anon_sym_doubleteam,
    ACTIONS(519), 1,
      anon_sym_intentionally,
    ACTIONS(521), 1,
      anon_sym_fouls,
  [3213] = 4,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_shoot_type,
    ACTIONS(168), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(166), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3236] = 2,
    ACTIONS(54), 4,
      anon_sym_with,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(52), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3254] = 2,
    ACTIONS(93), 4,
      anon_sym_with,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(91), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3272] = 2,
    ACTIONS(527), 1,
      anon_sym_SLASH,
    ACTIONS(525), 12,
      anon_sym_RPAREN,
      anon_sym_m,
      anon_sym_Weight,
      anon_sym_kg,
      anon_sym_Wingspan,
      anon_sym_Age,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3290] = 3,
    ACTIONS(529), 1,
      anon_sym_at,
    ACTIONS(191), 3,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(189), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3310] = 3,
    ACTIONS(531), 1,
      anon_sym_with,
    ACTIONS(185), 3,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(183), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3330] = 3,
    ACTIONS(533), 1,
      anon_sym_with,
    ACTIONS(185), 3,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(183), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3350] = 2,
    ACTIONS(58), 4,
      anon_sym_at,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(56), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3368] = 2,
    ACTIONS(54), 4,
      anon_sym_at,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(52), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3386] = 2,
    ACTIONS(89), 4,
      anon_sym_at,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(87), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3404] = 2,
    ACTIONS(93), 4,
      anon_sym_at,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(91), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3422] = 3,
    ACTIONS(535), 1,
      anon_sym_at,
    ACTIONS(191), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(189), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3442] = 3,
    ACTIONS(537), 1,
      anon_sym_with,
    ACTIONS(185), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(183), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3462] = 3,
    ACTIONS(539), 1,
      anon_sym_with,
    ACTIONS(185), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(183), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3482] = 2,
    ACTIONS(58), 4,
      anon_sym_with,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(56), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3500] = 2,
    ACTIONS(89), 4,
      anon_sym_with,
      anon_sym_Center,
      sym_identifier,
      sym__string_first_capitalised,
    ACTIONS(87), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3518] = 2,
    ACTIONS(303), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(301), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3535] = 2,
    ACTIONS(317), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(315), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3552] = 2,
    ACTIONS(325), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(323), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3569] = 2,
    ACTIONS(333), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(331), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3586] = 2,
    ACTIONS(337), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(335), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3603] = 2,
    ACTIONS(349), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(347), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3620] = 2,
    ACTIONS(227), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(225), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3637] = 2,
    ACTIONS(357), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(355), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3654] = 2,
    ACTIONS(251), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(249), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3671] = 2,
    ACTIONS(243), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(241), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3688] = 2,
    ACTIONS(247), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(245), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3705] = 2,
    ACTIONS(255), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(253), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3722] = 2,
    ACTIONS(259), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(257), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3739] = 2,
    ACTIONS(263), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(261), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3756] = 2,
    ACTIONS(267), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(265), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3773] = 2,
    ACTIONS(299), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(297), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3790] = 2,
    ACTIONS(303), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(301), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3807] = 2,
    ACTIONS(321), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(319), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3824] = 2,
    ACTIONS(227), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(225), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3841] = 2,
    ACTIONS(251), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(249), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3858] = 2,
    ACTIONS(321), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(319), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3875] = 2,
    ACTIONS(54), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(52), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3892] = 2,
    ACTIONS(361), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(359), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3909] = 2,
    ACTIONS(361), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(359), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3926] = 2,
    ACTIONS(329), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(327), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3943] = 2,
    ACTIONS(353), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(351), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3960] = 2,
    ACTIONS(231), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(229), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [3977] = 2,
    ACTIONS(93), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(91), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [3994] = 2,
    ACTIONS(295), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(293), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4011] = 2,
    ACTIONS(317), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(315), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4028] = 2,
    ACTIONS(325), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(323), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4045] = 2,
    ACTIONS(333), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(331), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4062] = 2,
    ACTIONS(337), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(335), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4079] = 2,
    ACTIONS(349), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(347), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4096] = 2,
    ACTIONS(329), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(327), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [4113] = 2,
    ACTIONS(357), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(355), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4130] = 2,
    ACTIONS(353), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(351), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [4147] = 2,
    ACTIONS(243), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(241), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4164] = 2,
    ACTIONS(247), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(245), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4181] = 2,
    ACTIONS(255), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(253), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4198] = 2,
    ACTIONS(259), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(257), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4215] = 2,
    ACTIONS(263), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(261), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4232] = 2,
    ACTIONS(267), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(265), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4249] = 2,
    ACTIONS(299), 3,
      anon_sym_BALL,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(297), 9,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
  [4266] = 2,
    ACTIONS(543), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(541), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [4283] = 2,
    ACTIONS(231), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(229), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [4300] = 2,
    ACTIONS(58), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(56), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [4317] = 2,
    ACTIONS(295), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(293), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [4334] = 2,
    ACTIONS(89), 2,
      anon_sym_Center,
      sym__string_first_capitalised,
    ACTIONS(87), 10,
      anon_sym_RBRACE,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
      sym_opponent_identifier,
      sym_identifier,
  [4351] = 5,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(547), 1,
      anon_sym_Center,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(477), 1,
      sym_name,
    ACTIONS(545), 7,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4373] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(83), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4390] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(56), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4407] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(87), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4424] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(147), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4441] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(60), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4458] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(64), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4475] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(148), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4492] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(154), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4509] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(155), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4526] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(157), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4543] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(74), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4560] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(295), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4577] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(372), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4594] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(47), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4611] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(132), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4628] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(135), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4645] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(415), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4662] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(158), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4679] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(160), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4696] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(163), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4713] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(164), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4730] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(65), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4747] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(301), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4764] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(167), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4781] = 3,
    ACTIONS(559), 1,
      sym_opponent_identifier,
    STATE(110), 1,
      sym_player_identifier,
    ACTIONS(557), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4798] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(138), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4815] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(122), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4832] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(126), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4849] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(127), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4866] = 3,
    ACTIONS(563), 1,
      sym_opponent_identifier,
    STATE(112), 1,
      sym_player_identifier,
    ACTIONS(561), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4883] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(129), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4900] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(86), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4917] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(48), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4934] = 3,
    ACTIONS(99), 1,
      sym_opponent_identifier,
    STATE(88), 1,
      sym_player_identifier,
    ACTIONS(13), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4951] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(117), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4968] = 3,
    ACTIONS(551), 1,
      sym_opponent_identifier,
    STATE(119), 1,
      sym_player_identifier,
    ACTIONS(549), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [4985] = 3,
    ACTIONS(555), 1,
      sym_opponent_identifier,
    STATE(136), 1,
      sym_player_identifier,
    ACTIONS(553), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [5002] = 2,
    ACTIONS(567), 1,
      anon_sym_SLASH,
    ACTIONS(565), 7,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5015] = 3,
    ACTIONS(573), 1,
      anon_sym_SLASH,
    ACTIONS(571), 3,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(569), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5030] = 2,
    ACTIONS(577), 1,
      anon_sym_SLASH,
    ACTIONS(575), 7,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5043] = 1,
    ACTIONS(579), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [5054] = 2,
    ACTIONS(583), 1,
      anon_sym_SLASH,
    ACTIONS(581), 7,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5067] = 2,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    ACTIONS(585), 7,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5080] = 1,
    ACTIONS(589), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [5091] = 1,
    ACTIONS(591), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [5102] = 1,
    ACTIONS(545), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [5113] = 1,
    ACTIONS(593), 8,
      anon_sym_layup,
      anon_sym_dunk,
      anon_sym_jumper,
      anon_sym_step_DASHback,
      anon_sym_floater,
      anon_sym_fadeaway,
      anon_sym_pull_DASHup,
      anon_sym_bank_DASHshot,
  [5124] = 7,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(350), 2,
      sym_function_chain,
      sym_player,
  [5147] = 1,
    ACTIONS(601), 8,
      anon_sym_PointGuard,
      anon_sym_ShootingGuard,
      anon_sym_SmallForward,
      anon_sym_PowerForward,
      anon_sym_Center,
      anon_sym_BallHandler,
      anon_sym_OnBall,
      anon_sym_OffBall,
  [5158] = 1,
    ACTIONS(603), 8,
      anon_sym_layup,
      anon_sym_dunk,
      anon_sym_jumper,
      anon_sym_step_DASHback,
      anon_sym_floater,
      anon_sym_fadeaway,
      anon_sym_pull_DASHup,
      anon_sym_bank_DASHshot,
  [5169] = 1,
    ACTIONS(605), 8,
      anon_sym_layup,
      anon_sym_dunk,
      anon_sym_jumper,
      anon_sym_step_DASHback,
      anon_sym_floater,
      anon_sym_fadeaway,
      anon_sym_pull_DASHup,
      anon_sym_bank_DASHshot,
  [5180] = 4,
    ACTIONS(573), 1,
      anon_sym_SLASH,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    ACTIONS(609), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(571), 3,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
  [5196] = 6,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
    STATE(393), 2,
      sym_function_chain,
      sym_player,
  [5216] = 4,
    ACTIONS(573), 1,
      anon_sym_SLASH,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    ACTIONS(609), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(571), 3,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
  [5232] = 4,
    ACTIONS(573), 1,
      anon_sym_SLASH,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    ACTIONS(609), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(571), 3,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
  [5248] = 4,
    ACTIONS(573), 1,
      anon_sym_SLASH,
    ACTIONS(615), 1,
      anon_sym_SEMI,
    ACTIONS(609), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(571), 3,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
  [5264] = 6,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(428), 1,
      sym_player_name,
    STATE(429), 1,
      sym_player,
    STATE(455), 1,
      sym_name,
  [5283] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(619), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(391), 2,
      sym_float,
      sym_num,
  [5300] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(621), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(398), 2,
      sym_float,
      sym_num,
  [5317] = 6,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(316), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5336] = 6,
    ACTIONS(19), 1,
      sym__string_first_capitalised,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(386), 1,
      sym_player,
    STATE(455), 1,
      sym_name,
  [5355] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(627), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(380), 2,
      sym_float,
      sym_num,
  [5372] = 6,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(370), 1,
      sym_player,
    STATE(455), 1,
      sym_name,
    STATE(496), 1,
      sym_team_holder,
  [5391] = 1,
    ACTIONS(629), 6,
      anon_sym_bounce,
      anon_sym_lob,
      anon_sym_chest,
      anon_sym_behind_DASHthe_DASHback,
      anon_sym_no_DASHlook,
      anon_sym_through,
  [5400] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(631), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(392), 2,
      sym_float,
      sym_num,
  [5417] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(633), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(395), 2,
      sym_float,
      sym_num,
  [5434] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(635), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(399), 2,
      sym_float,
      sym_num,
  [5451] = 6,
    ACTIONS(459), 1,
      anon_sym_shoot,
    ACTIONS(461), 1,
      anon_sym_pass,
    ACTIONS(463), 1,
      anon_sym_setscreen,
    ACTIONS(465), 1,
      anon_sym_dribble,
    ACTIONS(467), 1,
      anon_sym_cut,
    ACTIONS(469), 1,
      anon_sym_postup,
  [5470] = 6,
    ACTIONS(459), 1,
      anon_sym_shoot,
    ACTIONS(465), 1,
      anon_sym_dribble,
    ACTIONS(467), 1,
      anon_sym_cut,
    ACTIONS(469), 1,
      anon_sym_postup,
    ACTIONS(487), 1,
      anon_sym_pass,
    ACTIONS(489), 1,
      anon_sym_setscreen,
  [5489] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(637), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(397), 2,
      sym_float,
      sym_num,
  [5506] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(639), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(378), 2,
      sym_float,
      sym_num,
  [5523] = 5,
    ACTIONS(103), 1,
      sym__digit,
    ACTIONS(641), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(382), 2,
      sym_float,
      sym_num,
  [5540] = 5,
    ACTIONS(471), 1,
      anon_sym_block,
    ACTIONS(473), 1,
      anon_sym_steal,
    ACTIONS(475), 1,
      anon_sym_contest,
    ACTIONS(477), 1,
      anon_sym_switch,
    ACTIONS(479), 1,
      anon_sym_doubleteam,
  [5556] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(47), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5572] = 1,
    ACTIONS(643), 5,
      anon_sym_behind_DASHthe_DASHback,
      anon_sym_crossover,
      anon_sym_hesitation,
      anon_sym_spin_DASHmove,
      anon_sym_in_DASHand_DASHout,
  [5580] = 3,
    ACTIONS(223), 1,
      sym__digit,
    STATE(42), 1,
      aux_sym__num_repeat1,
    ACTIONS(217), 3,
      anon_sym_RBRACE,
      anon_sym_years,
      anon_sym_ATTRIBUTES,
  [5592] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(383), 1,
      sym_player,
    STATE(455), 1,
      sym_name,
  [5608] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(398), 2,
      sym_float,
      sym_num,
  [5622] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(83), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5638] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(64), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5654] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(373), 2,
      sym_float,
      sym_num,
  [5668] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(86), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5684] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(87), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5700] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(74), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5716] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(65), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5732] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(46), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5748] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(392), 2,
      sym_float,
      sym_num,
  [5762] = 5,
    ACTIONS(645), 1,
      anon_sym_COLON,
    ACTIONS(647), 1,
      sym__digit,
    STATE(76), 1,
      aux_sym__num_repeat1,
    STATE(335), 1,
      sym_float,
    STATE(445), 1,
      sym__num,
  [5778] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(88), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5794] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(395), 2,
      sym_float,
      sym_num,
  [5808] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(56), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5824] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(391), 2,
      sym_float,
      sym_num,
  [5838] = 5,
    ACTIONS(491), 1,
      anon_sym_block,
    ACTIONS(493), 1,
      anon_sym_steal,
    ACTIONS(495), 1,
      anon_sym_contest,
    ACTIONS(497), 1,
      anon_sym_switch,
    ACTIONS(499), 1,
      anon_sym_doubleteam,
  [5854] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(158), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [5870] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(167), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [5886] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(375), 2,
      sym_float,
      sym_num,
  [5900] = 5,
    ACTIONS(597), 1,
      sym_opponent_identifier,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(60), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(455), 1,
      sym_name,
  [5916] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(400), 2,
      sym_float,
      sym_num,
  [5930] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(126), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [5946] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(127), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [5962] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(651), 1,
      sym_opponent_identifier,
    STATE(111), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(482), 1,
      sym_name,
  [5978] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(129), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [5994] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(132), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [6010] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(135), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [6026] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(136), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [6042] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(649), 1,
      sym_opponent_identifier,
    STATE(138), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(417), 1,
      sym_name,
  [6058] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(378), 2,
      sym_float,
      sym_num,
  [6072] = 4,
    ACTIONS(103), 1,
      sym__digit,
    STATE(54), 1,
      aux_sym__num_repeat1,
    STATE(403), 1,
      sym__num,
    STATE(382), 2,
      sym_float,
      sym_num,
  [6086] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(147), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6102] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(148), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6118] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(117), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6134] = 3,
    ACTIONS(655), 1,
      sym__digit,
    STATE(283), 1,
      aux_sym__num_repeat1,
    ACTIONS(159), 3,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_identifier,
  [6146] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(154), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6162] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(155), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6178] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(118), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6194] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(157), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6210] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(160), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6226] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(163), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6242] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(164), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6258] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(653), 1,
      sym_opponent_identifier,
    STATE(122), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(451), 1,
      sym_name,
  [6274] = 3,
    ACTIONS(658), 1,
      sym__digit,
    STATE(283), 1,
      aux_sym__num_repeat1,
    ACTIONS(221), 3,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_identifier,
  [6286] = 5,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    ACTIONS(660), 1,
      sym_opponent_identifier,
    STATE(110), 1,
      sym_player,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(480), 1,
      sym_name,
  [6302] = 4,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      sym__digit,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(359), 1,
      sym_num,
  [6315] = 4,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_calculation_holder,
    STATE(305), 1,
      aux_sym_play_repeat1,
  [6328] = 3,
    ACTIONS(670), 1,
      anon_sym_RETURN,
    ACTIONS(672), 1,
      sym_identifier,
    STATE(296), 2,
      sym_calculation_variable,
      aux_sym_calculation_holder_repeat1,
  [6339] = 4,
    ACTIONS(647), 1,
      sym__digit,
    STATE(76), 1,
      aux_sym__num_repeat1,
    STATE(337), 1,
      sym_float,
    STATE(445), 1,
      sym__num,
  [6352] = 3,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      sym_string_capitalised,
    STATE(311), 2,
      sym_attribute_category,
      aux_sym_player_attributes_repeat1,
  [6363] = 4,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym__action_holder,
    STATE(320), 1,
      aux_sym_play_repeat1,
  [6376] = 3,
    ACTIONS(677), 1,
      sym_string_capitalised,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(298), 2,
      sym_attribute_category,
      aux_sym_player_attributes_repeat1,
  [6387] = 4,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym__action_holder,
    STATE(299), 1,
      aux_sym_play_repeat1,
  [6400] = 4,
    ACTIONS(664), 1,
      sym__digit,
    ACTIONS(683), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(352), 1,
      sym_num,
  [6413] = 3,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 1,
      sym_identifier,
    STATE(303), 2,
      sym_attribute,
      aux_sym_attribute_category_repeat1,
  [6424] = 3,
    ACTIONS(690), 1,
      anon_sym_RETURN,
    ACTIONS(692), 1,
      sym_identifier,
    STATE(314), 2,
      sym_calculation_variable,
      aux_sym_calculation_holder_repeat1,
  [6435] = 4,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_calculation_holder,
    STATE(320), 1,
      aux_sym_play_repeat1,
  [6448] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_function_chain_repeat1,
  [6461] = 4,
    ACTIONS(664), 1,
      sym__digit,
    ACTIONS(700), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(341), 1,
      sym_num,
  [6474] = 4,
    ACTIONS(664), 1,
      sym__digit,
    ACTIONS(702), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(346), 1,
      sym_num,
  [6487] = 4,
    ACTIONS(664), 1,
      sym__digit,
    ACTIONS(704), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(349), 1,
      sym_num,
  [6500] = 4,
    ACTIONS(664), 1,
      sym__digit,
    ACTIONS(706), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(355), 1,
      sym_num,
  [6513] = 3,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      sym_string_capitalised,
    STATE(311), 2,
      sym_attribute_category,
      aux_sym_player_attributes_repeat1,
  [6524] = 4,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_evaluation_holder,
    STATE(371), 1,
      aux_sym_evaluate_repeat1,
  [6537] = 3,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(303), 2,
      sym_attribute,
      aux_sym_attribute_category_repeat1,
  [6548] = 3,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_RETURN,
    STATE(296), 2,
      sym_calculation_variable,
      aux_sym_calculation_holder_repeat1,
  [6559] = 4,
    ACTIONS(664), 1,
      sym__digit,
    ACTIONS(723), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(357), 1,
      sym_num,
  [6572] = 4,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_evaluation_holder,
    STATE(312), 1,
      aux_sym_evaluate_repeat1,
  [6585] = 1,
    ACTIONS(725), 4,
      anon_sym_backdoor,
      anon_sym_flare,
      anon_sym_curl,
      anon_sym_fade,
  [6592] = 3,
    ACTIONS(727), 1,
      anon_sym_AT,
    ACTIONS(729), 1,
      sym__string_first_capitalised,
    STATE(318), 1,
      aux_sym_name_repeat1,
  [6602] = 3,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(481), 1,
      sym_name,
  [6612] = 3,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      aux_sym_play_repeat1,
  [6622] = 3,
    ACTIONS(737), 1,
      anon_sym_AT,
    ACTIONS(739), 1,
      sym__string_first_capitalised,
    STATE(318), 1,
      aux_sym_name_repeat1,
  [6632] = 3,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_with,
    STATE(70), 1,
      sym__action_holder,
  [6642] = 3,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      anon_sym_to,
    STATE(406), 1,
      sym_pass_type,
  [6652] = 3,
    ACTIONS(647), 1,
      sym__digit,
    STATE(76), 1,
      aux_sym__num_repeat1,
    STATE(109), 1,
      sym__num,
  [6662] = 3,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_function_chain_repeat1,
  [6672] = 3,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_team_holder_repeat1,
  [6682] = 2,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(313), 2,
      sym_attribute,
      aux_sym_attribute_category_repeat1,
  [6690] = 3,
    ACTIONS(754), 1,
      sym__digit,
    STATE(292), 1,
      aux_sym__num_repeat1,
    STATE(329), 1,
      sym__num,
  [6700] = 1,
    ACTIONS(525), 3,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_identifier,
  [6706] = 3,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(477), 1,
      sym_name,
  [6716] = 3,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    ACTIONS(756), 1,
      anon_sym_with,
    STATE(71), 1,
      sym_calculation_holder,
  [6726] = 3,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_function_chain_repeat1,
  [6736] = 3,
    ACTIONS(481), 1,
      anon_sym_intentionally,
    ACTIONS(483), 1,
      anon_sym_fouls,
    ACTIONS(485), 1,
      anon_sym_callstimeout,
  [6746] = 3,
    ACTIONS(485), 1,
      anon_sym_callstimeout,
    ACTIONS(501), 1,
      anon_sym_intentionally,
    ACTIONS(503), 1,
      anon_sym_fouls,
  [6756] = 2,
    ACTIONS(765), 1,
      anon_sym_PERCENT,
    ACTIONS(763), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [6764] = 3,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    ACTIONS(769), 1,
      anon_sym_ATTRIBUTES,
    STATE(469), 1,
      sym_player_attributes,
  [6774] = 2,
    ACTIONS(773), 1,
      anon_sym_PERCENT,
    ACTIONS(771), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [6782] = 3,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
    ACTIONS(775), 1,
      anon_sym_with,
    STATE(85), 1,
      sym_evaluation_holder,
  [6792] = 3,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_to,
    STATE(447), 1,
      sym_pass_type,
  [6802] = 3,
    ACTIONS(664), 1,
      sym__digit,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(346), 1,
      sym_num,
  [6812] = 2,
    ACTIONS(781), 1,
      anon_sym_years,
    ACTIONS(779), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [6820] = 3,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(785), 1,
      anon_sym_to,
    STATE(431), 1,
      sym_dribble_move,
  [6830] = 3,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(483), 1,
      sym_name,
  [6840] = 3,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym_to,
    STATE(438), 1,
      sym_pass_type,
  [6850] = 3,
    ACTIONS(664), 1,
      sym__digit,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(349), 1,
      sym_num,
  [6860] = 2,
    ACTIONS(791), 1,
      anon_sym_years,
    ACTIONS(789), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [6868] = 3,
    ACTIONS(793), 1,
      anon_sym_LPAREN,
    ACTIONS(795), 1,
      anon_sym_to,
    STATE(442), 1,
      sym_cut_type,
  [6878] = 3,
    ACTIONS(664), 1,
      sym__digit,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(352), 1,
      sym_num,
  [6888] = 2,
    ACTIONS(799), 1,
      anon_sym_years,
    ACTIONS(797), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [6896] = 3,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_function_chain_repeat1,
  [6906] = 3,
    ACTIONS(664), 1,
      sym__digit,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(355), 1,
      sym_num,
  [6916] = 2,
    ACTIONS(803), 1,
      anon_sym_years,
    ACTIONS(801), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [6924] = 3,
    ACTIONS(664), 1,
      sym__digit,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(357), 1,
      sym_num,
  [6934] = 3,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(805), 1,
      anon_sym_to,
    STATE(472), 1,
      sym_pass_type,
  [6944] = 2,
    ACTIONS(809), 1,
      anon_sym_years,
    ACTIONS(807), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [6952] = 3,
    ACTIONS(664), 1,
      sym__digit,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(359), 1,
      sym_num,
  [6962] = 2,
    ACTIONS(813), 1,
      anon_sym_years,
    ACTIONS(811), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [6970] = 3,
    ACTIONS(664), 1,
      sym__digit,
    STATE(247), 1,
      aux_sym__num_repeat1,
    STATE(360), 1,
      sym_num,
  [6980] = 2,
    ACTIONS(817), 1,
      anon_sym_years,
    ACTIONS(815), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [6988] = 2,
    ACTIONS(821), 1,
      anon_sym_years,
    ACTIONS(819), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [6996] = 3,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_team_holder_repeat1,
  [7006] = 3,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(419), 1,
      sym_name,
  [7016] = 3,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(827), 1,
      anon_sym_to,
    STATE(497), 1,
      sym_pass_type,
  [7026] = 3,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(829), 1,
      anon_sym_to,
    STATE(430), 1,
      sym_dribble_move,
  [7036] = 3,
    ACTIONS(793), 1,
      anon_sym_LPAREN,
    ACTIONS(831), 1,
      anon_sym_to,
    STATE(432), 1,
      sym_cut_type,
  [7046] = 3,
    ACTIONS(617), 1,
      sym__string_first_capitalised,
    STATE(321), 1,
      aux_sym_name_repeat1,
    STATE(453), 1,
      sym_name,
  [7056] = 3,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym_to,
    STATE(513), 1,
      sym_pass_type,
  [7066] = 3,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(835), 1,
      anon_sym_to,
    STATE(464), 1,
      sym_dribble_move,
  [7076] = 3,
    ACTIONS(793), 1,
      anon_sym_LPAREN,
    ACTIONS(837), 1,
      anon_sym_to,
    STATE(522), 1,
      sym_cut_type,
  [7086] = 3,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_team_holder_repeat1,
  [7096] = 3,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    STATE(371), 1,
      aux_sym_evaluate_repeat1,
  [7106] = 1,
    ACTIONS(735), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [7111] = 2,
    ACTIONS(846), 1,
      anon_sym_m,
    ACTIONS(848), 1,
      anon_sym_Age,
  [7118] = 1,
    ACTIONS(771), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [7123] = 2,
    ACTIONS(850), 1,
      anon_sym_kg,
    ACTIONS(852), 1,
      anon_sym_Wingspan,
  [7130] = 2,
    ACTIONS(854), 1,
      sym_identifier,
    ACTIONS(856), 1,
      sym_string_capitalised,
  [7137] = 1,
    ACTIONS(801), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [7142] = 2,
    ACTIONS(858), 1,
      anon_sym_m,
    ACTIONS(860), 1,
      anon_sym_Age,
  [7149] = 1,
    ACTIONS(862), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [7154] = 2,
    ACTIONS(864), 1,
      anon_sym_kg,
    ACTIONS(866), 1,
      anon_sym_Wingspan,
  [7161] = 1,
    ACTIONS(807), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [7166] = 2,
    ACTIONS(868), 1,
      anon_sym_m,
    ACTIONS(870), 1,
      anon_sym_Age,
  [7173] = 1,
    ACTIONS(752), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7178] = 1,
    ACTIONS(811), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [7183] = 1,
    ACTIONS(872), 2,
      anon_sym_RETURN,
      sym_identifier,
  [7188] = 1,
    ACTIONS(844), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [7193] = 1,
    ACTIONS(815), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [7198] = 2,
    ACTIONS(874), 1,
      anon_sym_INFORMATION,
    STATE(336), 1,
      sym_player_personals,
  [7205] = 1,
    ACTIONS(819), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [7210] = 1,
    ACTIONS(876), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [7215] = 2,
    ACTIONS(878), 1,
      anon_sym_m,
    ACTIONS(880), 1,
      anon_sym_Age,
  [7222] = 2,
    ACTIONS(882), 1,
      anon_sym_kg,
    ACTIONS(884), 1,
      anon_sym_Wingspan,
  [7229] = 1,
    ACTIONS(761), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7234] = 1,
    ACTIONS(886), 2,
      anon_sym_RBRACE,
      sym_string_capitalised,
  [7239] = 2,
    ACTIONS(888), 1,
      anon_sym_kg,
    ACTIONS(890), 1,
      anon_sym_Wingspan,
  [7246] = 1,
    ACTIONS(789), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [7251] = 2,
    ACTIONS(892), 1,
      anon_sym_m,
    ACTIONS(894), 1,
      anon_sym_Weight,
  [7258] = 2,
    ACTIONS(896), 1,
      anon_sym_m,
    ACTIONS(898), 1,
      anon_sym_Age,
  [7265] = 2,
    ACTIONS(900), 1,
      anon_sym_m,
    ACTIONS(902), 1,
      anon_sym_Age,
  [7272] = 2,
    ACTIONS(904), 1,
      anon_sym_m,
    ACTIONS(906), 1,
      anon_sym_Weight,
  [7279] = 1,
    ACTIONS(797), 2,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTES,
  [7284] = 1,
    ACTIONS(908), 1,
      anon_sym_at,
  [7288] = 1,
    ACTIONS(910), 1,
      anon_sym_DOT,
  [7292] = 1,
    ACTIONS(906), 1,
      anon_sym_Weight,
  [7296] = 1,
    ACTIONS(912), 1,
      anon_sym_Wingspan,
  [7300] = 1,
    ACTIONS(914), 1,
      anon_sym_to,
  [7304] = 1,
    ACTIONS(916), 1,
      anon_sym_EQ,
  [7308] = 1,
    ACTIONS(918), 1,
      sym_identifier,
  [7312] = 1,
    ACTIONS(870), 1,
      anon_sym_Age,
  [7316] = 1,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
  [7320] = 1,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
  [7324] = 1,
    ACTIONS(922), 1,
      anon_sym_fouls,
  [7328] = 1,
    ACTIONS(924), 1,
      anon_sym_for,
  [7332] = 1,
    ACTIONS(926), 1,
      anon_sym_by,
  [7336] = 1,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [7340] = 1,
    ACTIONS(930), 1,
      anon_sym_to,
  [7344] = 1,
    ACTIONS(932), 1,
      anon_sym_AT,
  [7348] = 1,
    ACTIONS(880), 1,
      anon_sym_Age,
  [7352] = 1,
    ACTIONS(934), 1,
      anon_sym_AT,
  [7356] = 1,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
  [7360] = 1,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
  [7364] = 1,
    ACTIONS(940), 1,
      anon_sym_for,
  [7368] = 1,
    ACTIONS(942), 1,
      anon_sym_from,
  [7372] = 1,
    ACTIONS(944), 1,
      anon_sym_onto,
  [7376] = 1,
    ACTIONS(946), 1,
      anon_sym_on,
  [7380] = 1,
    ACTIONS(948), 1,
      anon_sym_fouls,
  [7384] = 1,
    ACTIONS(950), 1,
      anon_sym_by,
  [7388] = 1,
    ACTIONS(952), 1,
      anon_sym_LBRACE,
  [7392] = 1,
    ACTIONS(954), 1,
      anon_sym_LBRACE,
  [7396] = 1,
    ACTIONS(956), 1,
      anon_sym_to,
  [7400] = 1,
    ACTIONS(958), 1,
      anon_sym_to,
  [7404] = 1,
    ACTIONS(960), 1,
      anon_sym_to,
  [7408] = 1,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
  [7412] = 1,
    ACTIONS(898), 1,
      anon_sym_Age,
  [7416] = 1,
    ACTIONS(964), 1,
      anon_sym_at,
  [7420] = 1,
    ACTIONS(966), 1,
      anon_sym_shot,
  [7424] = 1,
    ACTIONS(968), 1,
      anon_sym_onto,
  [7428] = 1,
    ACTIONS(970), 1,
      anon_sym_to,
  [7432] = 1,
    ACTIONS(972), 1,
      anon_sym_by,
  [7436] = 1,
    ACTIONS(974), 1,
      anon_sym_by,
  [7440] = 1,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
  [7444] = 1,
    ACTIONS(978), 1,
      anon_sym_to,
  [7448] = 1,
    ACTIONS(980), 1,
      anon_sym_Weight,
  [7452] = 1,
    ACTIONS(848), 1,
      anon_sym_Age,
  [7456] = 1,
    ACTIONS(982), 1,
      anon_sym_DOT,
  [7460] = 1,
    ACTIONS(984), 1,
      sym_identifier,
  [7464] = 1,
    ACTIONS(986), 1,
      anon_sym_to,
  [7468] = 1,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
  [7472] = 1,
    ACTIONS(990), 1,
      anon_sym_by,
  [7476] = 1,
    ACTIONS(992), 1,
      anon_sym_Age,
  [7480] = 1,
    ACTIONS(994), 1,
      anon_sym_AT,
  [7484] = 1,
    ACTIONS(996), 1,
      anon_sym_shot,
  [7488] = 1,
    ACTIONS(998), 1,
      anon_sym_AT,
  [7492] = 1,
    ACTIONS(1000), 1,
      sym_identifier,
  [7496] = 1,
    ACTIONS(1002), 1,
      anon_sym_AT,
  [7500] = 1,
    ACTIONS(1004), 1,
      anon_sym_for,
  [7504] = 1,
    ACTIONS(1006), 1,
      anon_sym_from,
  [7508] = 1,
    ACTIONS(1008), 1,
      anon_sym_onto,
  [7512] = 1,
    ACTIONS(1010), 1,
      anon_sym_on,
  [7516] = 1,
    ACTIONS(1012), 1,
      anon_sym_fouls,
  [7520] = 1,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
  [7524] = 1,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
  [7528] = 1,
    ACTIONS(1016), 1,
      anon_sym_from,
  [7532] = 1,
    ACTIONS(1018), 1,
      anon_sym_to,
  [7536] = 1,
    ACTIONS(1020), 1,
      anon_sym_for,
  [7540] = 1,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
  [7544] = 1,
    ACTIONS(884), 1,
      anon_sym_Wingspan,
  [7548] = 1,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
  [7552] = 1,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
  [7556] = 1,
    ACTIONS(1028), 1,
      anon_sym_by,
  [7560] = 1,
    ACTIONS(1030), 1,
      anon_sym_shot,
  [7564] = 1,
    ACTIONS(1032), 1,
      anon_sym_to,
  [7568] = 1,
    ACTIONS(1034), 1,
      anon_sym_by,
  [7572] = 1,
    ACTIONS(1036), 1,
      anon_sym_by,
  [7576] = 1,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
  [7580] = 1,
    ACTIONS(1040), 1,
      ts_builtin_sym_end,
  [7584] = 1,
    ACTIONS(1042), 1,
      anon_sym_AT,
  [7588] = 1,
    ACTIONS(1044), 1,
      anon_sym_from,
  [7592] = 1,
    ACTIONS(890), 1,
      anon_sym_Wingspan,
  [7596] = 1,
    ACTIONS(1046), 1,
      anon_sym_AT,
  [7600] = 1,
    ACTIONS(1048), 1,
      anon_sym_AT,
  [7604] = 1,
    ACTIONS(1050), 1,
      anon_sym_AT,
  [7608] = 1,
    ACTIONS(1052), 1,
      anon_sym_AT,
  [7612] = 1,
    ACTIONS(1054), 1,
      anon_sym_Height,
  [7616] = 1,
    ACTIONS(1056), 1,
      anon_sym_shot,
  [7620] = 1,
    ACTIONS(1058), 1,
      anon_sym_for,
  [7624] = 1,
    ACTIONS(1060), 1,
      anon_sym_on,
  [7628] = 1,
    ACTIONS(1062), 1,
      anon_sym_to,
  [7632] = 1,
    ACTIONS(1064), 1,
      anon_sym_at,
  [7636] = 1,
    ACTIONS(1066), 1,
      anon_sym_from,
  [7640] = 1,
    ACTIONS(1068), 1,
      anon_sym_onto,
  [7644] = 1,
    ACTIONS(1070), 1,
      anon_sym_on,
  [7648] = 1,
    ACTIONS(1072), 1,
      anon_sym_fouls,
  [7652] = 1,
    ACTIONS(1074), 1,
      anon_sym_shot,
  [7656] = 1,
    ACTIONS(1076), 1,
      anon_sym_shot,
  [7660] = 1,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
  [7664] = 1,
    ACTIONS(1080), 1,
      anon_sym_to,
  [7668] = 1,
    ACTIONS(1082), 1,
      anon_sym_by,
  [7672] = 1,
    ACTIONS(1084), 1,
      anon_sym_by,
  [7676] = 1,
    ACTIONS(1086), 1,
      anon_sym_fouls,
  [7680] = 1,
    ACTIONS(1088), 1,
      anon_sym_onto,
  [7684] = 1,
    ACTIONS(1090), 1,
      anon_sym_for,
  [7688] = 1,
    ACTIONS(852), 1,
      anon_sym_Wingspan,
  [7692] = 1,
    ACTIONS(1092), 1,
      anon_sym_on,
  [7696] = 1,
    ACTIONS(1094), 1,
      anon_sym_DOT,
  [7700] = 1,
    ACTIONS(1096), 1,
      anon_sym_from,
  [7704] = 1,
    ACTIONS(1098), 1,
      anon_sym_onto,
  [7708] = 1,
    ACTIONS(1100), 1,
      anon_sym_on,
  [7712] = 1,
    ACTIONS(1102), 1,
      anon_sym_fouls,
  [7716] = 1,
    ACTIONS(1104), 1,
      anon_sym_shot,
  [7720] = 1,
    ACTIONS(1106), 1,
      anon_sym_shot,
  [7724] = 1,
    ACTIONS(1108), 1,
      anon_sym_to,
  [7728] = 1,
    ACTIONS(1110), 1,
      anon_sym_to,
  [7732] = 1,
    ACTIONS(1112), 1,
      anon_sym_by,
  [7736] = 1,
    ACTIONS(1114), 1,
      anon_sym_by,
  [7740] = 1,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
  [7744] = 1,
    ACTIONS(860), 1,
      anon_sym_Age,
  [7748] = 1,
    ACTIONS(1118), 1,
      anon_sym_shot,
  [7752] = 1,
    ACTIONS(1120), 1,
      anon_sym_shot,
  [7756] = 1,
    ACTIONS(1122), 1,
      anon_sym_shot,
  [7760] = 1,
    ACTIONS(1124), 1,
      anon_sym_shot,
  [7764] = 1,
    ACTIONS(1126), 1,
      anon_sym_to,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 209,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 317,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 455,
  [SMALL_STATE(10)] = 522,
  [SMALL_STATE(11)] = 562,
  [SMALL_STATE(12)] = 602,
  [SMALL_STATE(13)] = 654,
  [SMALL_STATE(14)] = 699,
  [SMALL_STATE(15)] = 750,
  [SMALL_STATE(16)] = 799,
  [SMALL_STATE(17)] = 844,
  [SMALL_STATE(18)] = 889,
  [SMALL_STATE(19)] = 934,
  [SMALL_STATE(20)] = 979,
  [SMALL_STATE(21)] = 1024,
  [SMALL_STATE(22)] = 1054,
  [SMALL_STATE(23)] = 1084,
  [SMALL_STATE(24)] = 1114,
  [SMALL_STATE(25)] = 1144,
  [SMALL_STATE(26)] = 1174,
  [SMALL_STATE(27)] = 1204,
  [SMALL_STATE(28)] = 1252,
  [SMALL_STATE(29)] = 1282,
  [SMALL_STATE(30)] = 1312,
  [SMALL_STATE(31)] = 1342,
  [SMALL_STATE(32)] = 1372,
  [SMALL_STATE(33)] = 1402,
  [SMALL_STATE(34)] = 1432,
  [SMALL_STATE(35)] = 1462,
  [SMALL_STATE(36)] = 1492,
  [SMALL_STATE(37)] = 1522,
  [SMALL_STATE(38)] = 1552,
  [SMALL_STATE(39)] = 1582,
  [SMALL_STATE(40)] = 1612,
  [SMALL_STATE(41)] = 1660,
  [SMALL_STATE(42)] = 1705,
  [SMALL_STATE(43)] = 1733,
  [SMALL_STATE(44)] = 1760,
  [SMALL_STATE(45)] = 1787,
  [SMALL_STATE(46)] = 1814,
  [SMALL_STATE(47)] = 1838,
  [SMALL_STATE(48)] = 1862,
  [SMALL_STATE(49)] = 1886,
  [SMALL_STATE(50)] = 1907,
  [SMALL_STATE(51)] = 1928,
  [SMALL_STATE(52)] = 1949,
  [SMALL_STATE(53)] = 1970,
  [SMALL_STATE(54)] = 1991,
  [SMALL_STATE(55)] = 2018,
  [SMALL_STATE(56)] = 2039,
  [SMALL_STATE(57)] = 2060,
  [SMALL_STATE(58)] = 2081,
  [SMALL_STATE(59)] = 2102,
  [SMALL_STATE(60)] = 2123,
  [SMALL_STATE(61)] = 2144,
  [SMALL_STATE(62)] = 2165,
  [SMALL_STATE(63)] = 2186,
  [SMALL_STATE(64)] = 2207,
  [SMALL_STATE(65)] = 2228,
  [SMALL_STATE(66)] = 2249,
  [SMALL_STATE(67)] = 2270,
  [SMALL_STATE(68)] = 2291,
  [SMALL_STATE(69)] = 2312,
  [SMALL_STATE(70)] = 2333,
  [SMALL_STATE(71)] = 2354,
  [SMALL_STATE(72)] = 2375,
  [SMALL_STATE(73)] = 2396,
  [SMALL_STATE(74)] = 2417,
  [SMALL_STATE(75)] = 2438,
  [SMALL_STATE(76)] = 2459,
  [SMALL_STATE(77)] = 2484,
  [SMALL_STATE(78)] = 2505,
  [SMALL_STATE(79)] = 2526,
  [SMALL_STATE(80)] = 2547,
  [SMALL_STATE(81)] = 2568,
  [SMALL_STATE(82)] = 2589,
  [SMALL_STATE(83)] = 2610,
  [SMALL_STATE(84)] = 2631,
  [SMALL_STATE(85)] = 2652,
  [SMALL_STATE(86)] = 2673,
  [SMALL_STATE(87)] = 2694,
  [SMALL_STATE(88)] = 2715,
  [SMALL_STATE(89)] = 2736,
  [SMALL_STATE(90)] = 2757,
  [SMALL_STATE(91)] = 2778,
  [SMALL_STATE(92)] = 2799,
  [SMALL_STATE(93)] = 2842,
  [SMALL_STATE(94)] = 2885,
  [SMALL_STATE(95)] = 2904,
  [SMALL_STATE(96)] = 2923,
  [SMALL_STATE(97)] = 2942,
  [SMALL_STATE(98)] = 2961,
  [SMALL_STATE(99)] = 3004,
  [SMALL_STATE(100)] = 3023,
  [SMALL_STATE(101)] = 3042,
  [SMALL_STATE(102)] = 3065,
  [SMALL_STATE(103)] = 3084,
  [SMALL_STATE(104)] = 3127,
  [SMALL_STATE(105)] = 3170,
  [SMALL_STATE(106)] = 3213,
  [SMALL_STATE(107)] = 3236,
  [SMALL_STATE(108)] = 3254,
  [SMALL_STATE(109)] = 3272,
  [SMALL_STATE(110)] = 3290,
  [SMALL_STATE(111)] = 3310,
  [SMALL_STATE(112)] = 3330,
  [SMALL_STATE(113)] = 3350,
  [SMALL_STATE(114)] = 3368,
  [SMALL_STATE(115)] = 3386,
  [SMALL_STATE(116)] = 3404,
  [SMALL_STATE(117)] = 3422,
  [SMALL_STATE(118)] = 3442,
  [SMALL_STATE(119)] = 3462,
  [SMALL_STATE(120)] = 3482,
  [SMALL_STATE(121)] = 3500,
  [SMALL_STATE(122)] = 3518,
  [SMALL_STATE(123)] = 3535,
  [SMALL_STATE(124)] = 3552,
  [SMALL_STATE(125)] = 3569,
  [SMALL_STATE(126)] = 3586,
  [SMALL_STATE(127)] = 3603,
  [SMALL_STATE(128)] = 3620,
  [SMALL_STATE(129)] = 3637,
  [SMALL_STATE(130)] = 3654,
  [SMALL_STATE(131)] = 3671,
  [SMALL_STATE(132)] = 3688,
  [SMALL_STATE(133)] = 3705,
  [SMALL_STATE(134)] = 3722,
  [SMALL_STATE(135)] = 3739,
  [SMALL_STATE(136)] = 3756,
  [SMALL_STATE(137)] = 3773,
  [SMALL_STATE(138)] = 3790,
  [SMALL_STATE(139)] = 3807,
  [SMALL_STATE(140)] = 3824,
  [SMALL_STATE(141)] = 3841,
  [SMALL_STATE(142)] = 3858,
  [SMALL_STATE(143)] = 3875,
  [SMALL_STATE(144)] = 3892,
  [SMALL_STATE(145)] = 3909,
  [SMALL_STATE(146)] = 3926,
  [SMALL_STATE(147)] = 3943,
  [SMALL_STATE(148)] = 3960,
  [SMALL_STATE(149)] = 3977,
  [SMALL_STATE(150)] = 3994,
  [SMALL_STATE(151)] = 4011,
  [SMALL_STATE(152)] = 4028,
  [SMALL_STATE(153)] = 4045,
  [SMALL_STATE(154)] = 4062,
  [SMALL_STATE(155)] = 4079,
  [SMALL_STATE(156)] = 4096,
  [SMALL_STATE(157)] = 4113,
  [SMALL_STATE(158)] = 4130,
  [SMALL_STATE(159)] = 4147,
  [SMALL_STATE(160)] = 4164,
  [SMALL_STATE(161)] = 4181,
  [SMALL_STATE(162)] = 4198,
  [SMALL_STATE(163)] = 4215,
  [SMALL_STATE(164)] = 4232,
  [SMALL_STATE(165)] = 4249,
  [SMALL_STATE(166)] = 4266,
  [SMALL_STATE(167)] = 4283,
  [SMALL_STATE(168)] = 4300,
  [SMALL_STATE(169)] = 4317,
  [SMALL_STATE(170)] = 4334,
  [SMALL_STATE(171)] = 4351,
  [SMALL_STATE(172)] = 4373,
  [SMALL_STATE(173)] = 4390,
  [SMALL_STATE(174)] = 4407,
  [SMALL_STATE(175)] = 4424,
  [SMALL_STATE(176)] = 4441,
  [SMALL_STATE(177)] = 4458,
  [SMALL_STATE(178)] = 4475,
  [SMALL_STATE(179)] = 4492,
  [SMALL_STATE(180)] = 4509,
  [SMALL_STATE(181)] = 4526,
  [SMALL_STATE(182)] = 4543,
  [SMALL_STATE(183)] = 4560,
  [SMALL_STATE(184)] = 4577,
  [SMALL_STATE(185)] = 4594,
  [SMALL_STATE(186)] = 4611,
  [SMALL_STATE(187)] = 4628,
  [SMALL_STATE(188)] = 4645,
  [SMALL_STATE(189)] = 4662,
  [SMALL_STATE(190)] = 4679,
  [SMALL_STATE(191)] = 4696,
  [SMALL_STATE(192)] = 4713,
  [SMALL_STATE(193)] = 4730,
  [SMALL_STATE(194)] = 4747,
  [SMALL_STATE(195)] = 4764,
  [SMALL_STATE(196)] = 4781,
  [SMALL_STATE(197)] = 4798,
  [SMALL_STATE(198)] = 4815,
  [SMALL_STATE(199)] = 4832,
  [SMALL_STATE(200)] = 4849,
  [SMALL_STATE(201)] = 4866,
  [SMALL_STATE(202)] = 4883,
  [SMALL_STATE(203)] = 4900,
  [SMALL_STATE(204)] = 4917,
  [SMALL_STATE(205)] = 4934,
  [SMALL_STATE(206)] = 4951,
  [SMALL_STATE(207)] = 4968,
  [SMALL_STATE(208)] = 4985,
  [SMALL_STATE(209)] = 5002,
  [SMALL_STATE(210)] = 5015,
  [SMALL_STATE(211)] = 5030,
  [SMALL_STATE(212)] = 5043,
  [SMALL_STATE(213)] = 5054,
  [SMALL_STATE(214)] = 5067,
  [SMALL_STATE(215)] = 5080,
  [SMALL_STATE(216)] = 5091,
  [SMALL_STATE(217)] = 5102,
  [SMALL_STATE(218)] = 5113,
  [SMALL_STATE(219)] = 5124,
  [SMALL_STATE(220)] = 5147,
  [SMALL_STATE(221)] = 5158,
  [SMALL_STATE(222)] = 5169,
  [SMALL_STATE(223)] = 5180,
  [SMALL_STATE(224)] = 5196,
  [SMALL_STATE(225)] = 5216,
  [SMALL_STATE(226)] = 5232,
  [SMALL_STATE(227)] = 5248,
  [SMALL_STATE(228)] = 5264,
  [SMALL_STATE(229)] = 5283,
  [SMALL_STATE(230)] = 5300,
  [SMALL_STATE(231)] = 5317,
  [SMALL_STATE(232)] = 5336,
  [SMALL_STATE(233)] = 5355,
  [SMALL_STATE(234)] = 5372,
  [SMALL_STATE(235)] = 5391,
  [SMALL_STATE(236)] = 5400,
  [SMALL_STATE(237)] = 5417,
  [SMALL_STATE(238)] = 5434,
  [SMALL_STATE(239)] = 5451,
  [SMALL_STATE(240)] = 5470,
  [SMALL_STATE(241)] = 5489,
  [SMALL_STATE(242)] = 5506,
  [SMALL_STATE(243)] = 5523,
  [SMALL_STATE(244)] = 5540,
  [SMALL_STATE(245)] = 5556,
  [SMALL_STATE(246)] = 5572,
  [SMALL_STATE(247)] = 5580,
  [SMALL_STATE(248)] = 5592,
  [SMALL_STATE(249)] = 5608,
  [SMALL_STATE(250)] = 5622,
  [SMALL_STATE(251)] = 5638,
  [SMALL_STATE(252)] = 5654,
  [SMALL_STATE(253)] = 5668,
  [SMALL_STATE(254)] = 5684,
  [SMALL_STATE(255)] = 5700,
  [SMALL_STATE(256)] = 5716,
  [SMALL_STATE(257)] = 5732,
  [SMALL_STATE(258)] = 5748,
  [SMALL_STATE(259)] = 5762,
  [SMALL_STATE(260)] = 5778,
  [SMALL_STATE(261)] = 5794,
  [SMALL_STATE(262)] = 5808,
  [SMALL_STATE(263)] = 5824,
  [SMALL_STATE(264)] = 5838,
  [SMALL_STATE(265)] = 5854,
  [SMALL_STATE(266)] = 5870,
  [SMALL_STATE(267)] = 5886,
  [SMALL_STATE(268)] = 5900,
  [SMALL_STATE(269)] = 5916,
  [SMALL_STATE(270)] = 5930,
  [SMALL_STATE(271)] = 5946,
  [SMALL_STATE(272)] = 5962,
  [SMALL_STATE(273)] = 5978,
  [SMALL_STATE(274)] = 5994,
  [SMALL_STATE(275)] = 6010,
  [SMALL_STATE(276)] = 6026,
  [SMALL_STATE(277)] = 6042,
  [SMALL_STATE(278)] = 6058,
  [SMALL_STATE(279)] = 6072,
  [SMALL_STATE(280)] = 6086,
  [SMALL_STATE(281)] = 6102,
  [SMALL_STATE(282)] = 6118,
  [SMALL_STATE(283)] = 6134,
  [SMALL_STATE(284)] = 6146,
  [SMALL_STATE(285)] = 6162,
  [SMALL_STATE(286)] = 6178,
  [SMALL_STATE(287)] = 6194,
  [SMALL_STATE(288)] = 6210,
  [SMALL_STATE(289)] = 6226,
  [SMALL_STATE(290)] = 6242,
  [SMALL_STATE(291)] = 6258,
  [SMALL_STATE(292)] = 6274,
  [SMALL_STATE(293)] = 6286,
  [SMALL_STATE(294)] = 6302,
  [SMALL_STATE(295)] = 6315,
  [SMALL_STATE(296)] = 6328,
  [SMALL_STATE(297)] = 6339,
  [SMALL_STATE(298)] = 6352,
  [SMALL_STATE(299)] = 6363,
  [SMALL_STATE(300)] = 6376,
  [SMALL_STATE(301)] = 6387,
  [SMALL_STATE(302)] = 6400,
  [SMALL_STATE(303)] = 6413,
  [SMALL_STATE(304)] = 6424,
  [SMALL_STATE(305)] = 6435,
  [SMALL_STATE(306)] = 6448,
  [SMALL_STATE(307)] = 6461,
  [SMALL_STATE(308)] = 6474,
  [SMALL_STATE(309)] = 6487,
  [SMALL_STATE(310)] = 6500,
  [SMALL_STATE(311)] = 6513,
  [SMALL_STATE(312)] = 6524,
  [SMALL_STATE(313)] = 6537,
  [SMALL_STATE(314)] = 6548,
  [SMALL_STATE(315)] = 6559,
  [SMALL_STATE(316)] = 6572,
  [SMALL_STATE(317)] = 6585,
  [SMALL_STATE(318)] = 6592,
  [SMALL_STATE(319)] = 6602,
  [SMALL_STATE(320)] = 6612,
  [SMALL_STATE(321)] = 6622,
  [SMALL_STATE(322)] = 6632,
  [SMALL_STATE(323)] = 6642,
  [SMALL_STATE(324)] = 6652,
  [SMALL_STATE(325)] = 6662,
  [SMALL_STATE(326)] = 6672,
  [SMALL_STATE(327)] = 6682,
  [SMALL_STATE(328)] = 6690,
  [SMALL_STATE(329)] = 6700,
  [SMALL_STATE(330)] = 6706,
  [SMALL_STATE(331)] = 6716,
  [SMALL_STATE(332)] = 6726,
  [SMALL_STATE(333)] = 6736,
  [SMALL_STATE(334)] = 6746,
  [SMALL_STATE(335)] = 6756,
  [SMALL_STATE(336)] = 6764,
  [SMALL_STATE(337)] = 6774,
  [SMALL_STATE(338)] = 6782,
  [SMALL_STATE(339)] = 6792,
  [SMALL_STATE(340)] = 6802,
  [SMALL_STATE(341)] = 6812,
  [SMALL_STATE(342)] = 6820,
  [SMALL_STATE(343)] = 6830,
  [SMALL_STATE(344)] = 6840,
  [SMALL_STATE(345)] = 6850,
  [SMALL_STATE(346)] = 6860,
  [SMALL_STATE(347)] = 6868,
  [SMALL_STATE(348)] = 6878,
  [SMALL_STATE(349)] = 6888,
  [SMALL_STATE(350)] = 6896,
  [SMALL_STATE(351)] = 6906,
  [SMALL_STATE(352)] = 6916,
  [SMALL_STATE(353)] = 6924,
  [SMALL_STATE(354)] = 6934,
  [SMALL_STATE(355)] = 6944,
  [SMALL_STATE(356)] = 6952,
  [SMALL_STATE(357)] = 6962,
  [SMALL_STATE(358)] = 6970,
  [SMALL_STATE(359)] = 6980,
  [SMALL_STATE(360)] = 6988,
  [SMALL_STATE(361)] = 6996,
  [SMALL_STATE(362)] = 7006,
  [SMALL_STATE(363)] = 7016,
  [SMALL_STATE(364)] = 7026,
  [SMALL_STATE(365)] = 7036,
  [SMALL_STATE(366)] = 7046,
  [SMALL_STATE(367)] = 7056,
  [SMALL_STATE(368)] = 7066,
  [SMALL_STATE(369)] = 7076,
  [SMALL_STATE(370)] = 7086,
  [SMALL_STATE(371)] = 7096,
  [SMALL_STATE(372)] = 7106,
  [SMALL_STATE(373)] = 7111,
  [SMALL_STATE(374)] = 7118,
  [SMALL_STATE(375)] = 7123,
  [SMALL_STATE(376)] = 7130,
  [SMALL_STATE(377)] = 7137,
  [SMALL_STATE(378)] = 7142,
  [SMALL_STATE(379)] = 7149,
  [SMALL_STATE(380)] = 7154,
  [SMALL_STATE(381)] = 7161,
  [SMALL_STATE(382)] = 7166,
  [SMALL_STATE(383)] = 7173,
  [SMALL_STATE(384)] = 7178,
  [SMALL_STATE(385)] = 7183,
  [SMALL_STATE(386)] = 7188,
  [SMALL_STATE(387)] = 7193,
  [SMALL_STATE(388)] = 7198,
  [SMALL_STATE(389)] = 7205,
  [SMALL_STATE(390)] = 7210,
  [SMALL_STATE(391)] = 7215,
  [SMALL_STATE(392)] = 7222,
  [SMALL_STATE(393)] = 7229,
  [SMALL_STATE(394)] = 7234,
  [SMALL_STATE(395)] = 7239,
  [SMALL_STATE(396)] = 7246,
  [SMALL_STATE(397)] = 7251,
  [SMALL_STATE(398)] = 7258,
  [SMALL_STATE(399)] = 7265,
  [SMALL_STATE(400)] = 7272,
  [SMALL_STATE(401)] = 7279,
  [SMALL_STATE(402)] = 7284,
  [SMALL_STATE(403)] = 7288,
  [SMALL_STATE(404)] = 7292,
  [SMALL_STATE(405)] = 7296,
  [SMALL_STATE(406)] = 7300,
  [SMALL_STATE(407)] = 7304,
  [SMALL_STATE(408)] = 7308,
  [SMALL_STATE(409)] = 7312,
  [SMALL_STATE(410)] = 7316,
  [SMALL_STATE(411)] = 7320,
  [SMALL_STATE(412)] = 7324,
  [SMALL_STATE(413)] = 7328,
  [SMALL_STATE(414)] = 7332,
  [SMALL_STATE(415)] = 7336,
  [SMALL_STATE(416)] = 7340,
  [SMALL_STATE(417)] = 7344,
  [SMALL_STATE(418)] = 7348,
  [SMALL_STATE(419)] = 7352,
  [SMALL_STATE(420)] = 7356,
  [SMALL_STATE(421)] = 7360,
  [SMALL_STATE(422)] = 7364,
  [SMALL_STATE(423)] = 7368,
  [SMALL_STATE(424)] = 7372,
  [SMALL_STATE(425)] = 7376,
  [SMALL_STATE(426)] = 7380,
  [SMALL_STATE(427)] = 7384,
  [SMALL_STATE(428)] = 7388,
  [SMALL_STATE(429)] = 7392,
  [SMALL_STATE(430)] = 7396,
  [SMALL_STATE(431)] = 7400,
  [SMALL_STATE(432)] = 7404,
  [SMALL_STATE(433)] = 7408,
  [SMALL_STATE(434)] = 7412,
  [SMALL_STATE(435)] = 7416,
  [SMALL_STATE(436)] = 7420,
  [SMALL_STATE(437)] = 7424,
  [SMALL_STATE(438)] = 7428,
  [SMALL_STATE(439)] = 7432,
  [SMALL_STATE(440)] = 7436,
  [SMALL_STATE(441)] = 7440,
  [SMALL_STATE(442)] = 7444,
  [SMALL_STATE(443)] = 7448,
  [SMALL_STATE(444)] = 7452,
  [SMALL_STATE(445)] = 7456,
  [SMALL_STATE(446)] = 7460,
  [SMALL_STATE(447)] = 7464,
  [SMALL_STATE(448)] = 7468,
  [SMALL_STATE(449)] = 7472,
  [SMALL_STATE(450)] = 7476,
  [SMALL_STATE(451)] = 7480,
  [SMALL_STATE(452)] = 7484,
  [SMALL_STATE(453)] = 7488,
  [SMALL_STATE(454)] = 7492,
  [SMALL_STATE(455)] = 7496,
  [SMALL_STATE(456)] = 7500,
  [SMALL_STATE(457)] = 7504,
  [SMALL_STATE(458)] = 7508,
  [SMALL_STATE(459)] = 7512,
  [SMALL_STATE(460)] = 7516,
  [SMALL_STATE(461)] = 7520,
  [SMALL_STATE(462)] = 7524,
  [SMALL_STATE(463)] = 7528,
  [SMALL_STATE(464)] = 7532,
  [SMALL_STATE(465)] = 7536,
  [SMALL_STATE(466)] = 7540,
  [SMALL_STATE(467)] = 7544,
  [SMALL_STATE(468)] = 7548,
  [SMALL_STATE(469)] = 7552,
  [SMALL_STATE(470)] = 7556,
  [SMALL_STATE(471)] = 7560,
  [SMALL_STATE(472)] = 7564,
  [SMALL_STATE(473)] = 7568,
  [SMALL_STATE(474)] = 7572,
  [SMALL_STATE(475)] = 7576,
  [SMALL_STATE(476)] = 7580,
  [SMALL_STATE(477)] = 7584,
  [SMALL_STATE(478)] = 7588,
  [SMALL_STATE(479)] = 7592,
  [SMALL_STATE(480)] = 7596,
  [SMALL_STATE(481)] = 7600,
  [SMALL_STATE(482)] = 7604,
  [SMALL_STATE(483)] = 7608,
  [SMALL_STATE(484)] = 7612,
  [SMALL_STATE(485)] = 7616,
  [SMALL_STATE(486)] = 7620,
  [SMALL_STATE(487)] = 7624,
  [SMALL_STATE(488)] = 7628,
  [SMALL_STATE(489)] = 7632,
  [SMALL_STATE(490)] = 7636,
  [SMALL_STATE(491)] = 7640,
  [SMALL_STATE(492)] = 7644,
  [SMALL_STATE(493)] = 7648,
  [SMALL_STATE(494)] = 7652,
  [SMALL_STATE(495)] = 7656,
  [SMALL_STATE(496)] = 7660,
  [SMALL_STATE(497)] = 7664,
  [SMALL_STATE(498)] = 7668,
  [SMALL_STATE(499)] = 7672,
  [SMALL_STATE(500)] = 7676,
  [SMALL_STATE(501)] = 7680,
  [SMALL_STATE(502)] = 7684,
  [SMALL_STATE(503)] = 7688,
  [SMALL_STATE(504)] = 7692,
  [SMALL_STATE(505)] = 7696,
  [SMALL_STATE(506)] = 7700,
  [SMALL_STATE(507)] = 7704,
  [SMALL_STATE(508)] = 7708,
  [SMALL_STATE(509)] = 7712,
  [SMALL_STATE(510)] = 7716,
  [SMALL_STATE(511)] = 7720,
  [SMALL_STATE(512)] = 7724,
  [SMALL_STATE(513)] = 7728,
  [SMALL_STATE(514)] = 7732,
  [SMALL_STATE(515)] = 7736,
  [SMALL_STATE(516)] = 7740,
  [SMALL_STATE(517)] = 7744,
  [SMALL_STATE(518)] = 7748,
  [SMALL_STATE(519)] = 7752,
  [SMALL_STATE(520)] = 7756,
  [SMALL_STATE(521)] = 7760,
  [SMALL_STATE(522)] = 7764,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_identifier, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_player_identifier, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_identifier, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_player_identifier, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_evaluation_holder_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_evaluation_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_evaluation_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_evaluation_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_evaluation_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_evaluation_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_player, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_player, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat2, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat2, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat2, 2, 0, 0), SHIFT_REPEAT(5),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat2, 2, 0, 0), SHIFT_REPEAT(5),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat2, 2, 0, 0), SHIFT_REPEAT(171),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat2, 2, 0, 0), SHIFT_REPEAT(321),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat3, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat3, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat3, 2, 0, 0), SHIFT_REPEAT(5),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat3, 2, 0, 0), SHIFT_REPEAT(5),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_holder_repeat3, 2, 0, 0), SHIFT_REPEAT(171),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_holder_repeat3, 2, 0, 0), SHIFT_REPEAT(321),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__num_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__num_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__num_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shoot, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shoot, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_playbook, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_playbook, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_playbook_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_playbook_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_playbook_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_team, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_team, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_screen, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_screen, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_holder, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__action_holder, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluate, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluate, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_holder, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_holder, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_def, 5, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_player_def, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculate, 5, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calculate, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__num, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offensive_action, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offensive_action, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass, 4, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluate, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluate, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_team, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_team, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shoot_type, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shoot_type, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defensive_action, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defensive_action, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dribble, 5, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dribble, 5, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cut, 5, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cut, 5, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contest, 5, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contest, 5, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play, 6, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_play, 6, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_holder, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__action_holder, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_def, 6, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_player_def, 6, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_holder, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__action_holder, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_play, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculate, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calculate, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dribble, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dribble, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_screen, 6, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_screen, 6, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_team, 6, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_team, 6, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculation_holder, 5, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calculation_holder, 5, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__num, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculation_holder, 6, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calculation_holder, 6, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_action, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_action, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cut, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cut, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shoot, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shoot, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_up, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_up, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steal, 4, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_steal, 4, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_holder, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_holder, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluate, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluate, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foul, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foul, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foul, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foul, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeout, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play, 5, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_play, 5, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculate, 6, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calculate, 6, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_chain, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_chain, 3, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_chain, 4, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_chain, 4, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_chain, 5, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_chain, 5, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluation_function, 1, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_evaluation_function, 1, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__calculate_higher_precedence, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__calculate_higher_precedence, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__calculate_lower_precedence, 3, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculation_bracket, 3, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calculation_bracket, 3, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculation_expression, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calculation_expression, 1, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_access, 3, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_access, 3, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__num_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_calculation_holder_repeat1, 2, 0, 0),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_calculation_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_attributes, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_attributes, 1, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_category_repeat1, 2, 0, 0),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_category_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_player_attributes_repeat1, 2, 0, 0),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_player_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2, 0, 0),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_play_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_play_repeat1, 2, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_team_holder_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_team_holder_repeat1, 2, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_chain_repeat1, 2, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 9, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 10, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 11, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 12, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 13, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 14, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 15, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 16, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_team_holder, 2, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_team_holder, 1, 0, 0),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_evaluate_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_evaluate_repeat1, 2, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculation_variable, 4, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_personals, 17, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_category, 4, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 2, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cut_type, 3, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_name, 1, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1040] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dribble_move, 3, 0, 0),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_type, 3, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nba_playbook(void) {
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
