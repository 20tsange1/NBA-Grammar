/**
 * @file NbaPlaybook grammar for tree-sitter
 * @author Edgar
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "nba_playbook",

  rules: {
    start: $ => (repeat1(choice(
      $.playbook
      , $._action_only
      , $.player_def
      , $.calculate
      , $.evaluate
      , $.team
    ))
    ),

    _action_only: $ => choice(
      $.offensive_action
      , $.defensive_action
      , $.special_action
    ),

    playbook: $ => prec.right((repeat1(($.play
    ))
    )),

    play: $ => (seq("PLAY", $.identifier, optional((seq("with", $.player_identifier, repeat((seq(",", $.player_identifier)
    )))
    )), $._action_holder)
    ),

    returns: $ => (seq("BALL", $.player_identifier)
    ),

    _action_holder: $ => choice(
      seq("{", repeat($.offensive_action), optional($.returns), "}")
      , seq("{", repeat($.defensive_action), optional($.returns), "}")
      , seq("{", repeat($.special_action), optional($.returns), "}")
    ),

    offensive_action: $ => (choice(
      $.shoot
      , $.pass
      , $.screen
      , $.dribble
      , $.cut
      , $.post_up
    )
    ),

    defensive_action: $ => (choice(
      $.block
      , $.steal
      , $.contest
      , $.switch
      , $.double_team
    )
    ),

    special_action: $ => (choice(
      $.foul
      , $.timeout
    )
    ),

    shoot: $ => (seq(choice(
      $.player
      , $.player_identifier
    ), "shoot", optional($.shoot_type))
    ),

    shoot_type: $ => (seq("(", choice(
      "layup"
      , "dunk"
      , "jumper"
      , "step-back"
      , "floater"
      , "fadeaway"
      , "pull-up"
      , "bank-shot"
    ), ")")
    ),

    pass: $ => choice(
      seq($.player, "pass", optional($.pass_type), "to", $.player)
      , seq($.player_identifier, "pass", optional($.pass_type), "to", $.player_identifier)
    ),

    pass_type: $ => (seq("(", choice(
      "bounce"
      , "lob"
      , "chest"
      , "behind-the-back"
      , "no-look"
      , "through"
    ), ")")
    ),

    screen: $ => choice(
      seq($.player, "set screen", "for", $.player, optional((seq("at", $.location)
      )))
      , seq($.player_identifier, "set screen", "for", $.player_identifier, optional((seq("at", $.location)
      )))
    ),

    dribble: $ => choice(
      seq($.player, "dribble", optional($.dribble_move), "to", $.location)
      , seq($.player_identifier, "dribble", optional($.dribble_move), "to", $.location)
    ),

    dribble_move: $ => (seq("(", choice(
      "crossover"
      , "hesitation"
      , "spin-move"
      , "behind-the-back"
      , "in-and-out"
    ), ")")
    ),

    cut: $ => choice(
      seq($.player, "cut", optional($.cut_type), "to", $.location)
      , seq($.player_identifier, "cut", optional($.cut_type), "to", $.location)
    ),

    cut_type: $ => (seq("(", choice(
      "backdoor"
      , "flare"
      , "curl"
      , "fade"
    ), ")")
    ),

    post_up: $ => choice(
      seq($.player, "post up", "at", $.location)
      , seq($.player_identifier, "post up", "at", $.location)
    ),

    block: $ => choice(
      seq($.player, "block", "shot", "by", $.player)
      , seq($.player_identifier, "block", "shot", "by", $.player_identifier)
    ),

    steal: $ => choice(
      seq($.player, "steal", "from", $.player)
      , seq($.player_identifier, "steal", "from", $.player_identifier)
    ),

    contest: $ => choice(
      seq($.player, "contest", "shot", "by", $.player)
      , seq($.player_identifier, "contest", "shot", "by", $.player_identifier)
    ),

    switch: $ => choice(
      seq($.player, "switch", "onto", $.player)
      , seq($.player_identifier, "switch", "onto", $.player_identifier)
    ),

    double_team: $ => choice(
      seq($.player, "double team", "on", $.player, optional((seq("with", $.player)
      )))
      , seq($.player_identifier, "double team", "on", $.player_identifier, optional((seq("with", $.player_identifier)
      )))
    ),

    foul: $ => prec(2, choice(
      seq($.player, optional("intentionally"), "fouls", $.player)
      , seq($.player_identifier, optional("intentionally"), "fouls", $.player_identifier)
    )),

    timeout: $ => choice(
      seq($.player, "calls timeout")
      , seq($.player_identifier, "calls timeout")
    ),

    location: $ => choice(
      $._frontcourt
      , $._backcourt
      , $._wing
      , $._corner
      , $._paint
      , $._post
    ),

    _frontcourt: $ => choice(
      "Top of Key"
      , "Free Throw Line"
      , "Elbow Left"
      , "Elbow Right"
    ),

    _backcourt: $ => choice(
      "Half Court"
      , "Backcourt"
      , "Logo"
    ),

    _wing: $ => choice(
      "Left Wing"
      , "Right Wing"
    ),

    _corner: $ => choice(
      "Left Corner"
      , "Right Corner"
    ),

    _paint: $ => choice(
      "Restricted Area"
      , "Paint"
      , "Low Block"
    ),

    _post: $ => choice(
      "Low Post"
      , "High Post"
    ),

    player_def: $ => (seq("PERSON", $.player_name, "{", $.player_personals, optional($.player_attributes), "}")
    ),

    player_name: $ => ($.player
    ),

    player_personals: $ => (seq("INFORMATION", "Height", optional(":"), choice(
      $.float
      , $.num
    ), optional("m"), "Weight", optional(":"), choice(
      $.float
      , $.num
    ), optional("kg"), "Wingspan", optional(":"), choice(
      $.float
      , $.num
    ), optional("m"), "Age", optional(":"), $.num, optional("years"))
    ),

    player_attributes: $ => (seq("ATTRIBUTES", repeat($.attribute_category))
    ),

    attribute_category: $ => (seq(alias($.string_capitalised, $.identifier), "(", repeat1($.attribute), ")")
    ),

    attribute: $ => ((seq($.identifier, optional(":"), $.float, optional("%"))
    )
    ),

    calculate: $ => (seq('CALCULATE', choice(
      alias($.string_capitalised, $.identifier)
      , $.identifier
    ), optional((seq("with", $.player_identifier, repeat((seq(",", $.player_identifier)
    )))
    )), $.calculation_holder)
    ),

    calculation_holder: $ => (seq("{", repeat($.calculation_variable), "RETURN", ($.calculation_expression
    ), ";", "}")
    ),

    calculation_variable: $ => (seq($.identifier, "=", $.calculation_expression, ";")
    ),

    calculation_expression: $ => choice(
      $._calculation_values
      , $.calculation_bracket
      , $._calculation_line
    ),

    _calculation_line: $ => (choice(
      $._calculate_higher_precedence
      , $._calculate_lower_precedence
    )
    ),

    _calculate_higher_precedence: $ => prec.left(2, (seq($.calculation_expression, choice(
      "*"
      , "/"
      , "%"
      , "/ /"
    ), $.calculation_expression)
    )),

    _calculate_lower_precedence: $ => prec.left(1, (seq($.calculation_expression, choice(
      "+"
      , "-"
    ), $.calculation_expression)
    )),

    calculation_bracket: $ => prec(3, (seq("(", $.calculation_expression, ")")
    )),

    _calculation_values: $ => prec(3, (choice(
      $.attribute_access
      , $.float
      , $.num
      , $.identifier
    )
    )),

    attribute_access: $ => prec(1, (seq($.player_identifier, ".", $.identifier)
    )),

    evaluate: $ => (seq('EVAL', optional((seq("with", choice(
      $.player
      , $.identifier
    ), repeat((seq(",", choice(
      $.player
      , $.identifier
    ))
    )))
    )), $.evaluation_holder)
    ),

    evaluation_holder: $ => (seq("{", repeat($.evaluation_function), "}")
    ),

    evaluation_function: $ => choice(
      $.function_chain
      , $._action_only
    ),

    function_chain: $ => ((seq($.identifier, "(", optional((seq(choice(
      choice(
        $.player
        , $.identifier
      )
      , $.function_chain
    ), repeat((seq(",", choice(
      $.player
      , $.function_chain
    ))
    )))
    )), ")")
    )
    ),

    team: $ => (seq('TEAM', $.identifier, "(", $.team_holder, ")")
    ),

    team_holder: $ => (seq($.player, repeat((seq(",", $.player)
    )))
    ),

    player: $ => prec(4, (seq(optional($.opponent_identifier), $.name, '@')
    )),

    name: $ => (repeat1($._string_first_capitalised)
    ),

    player_identifier: $ => prec(6, (seq(optional($.opponent_identifier), choice(
      "Point Guard"
      , "Shooting Guard"
      , "Small Forward"
      , "Power Forward"
      , "Center"
      , "Ball Handler"
      , "On Ball"
      , "Off Ball"
    ))
    )),

    opponent_identifier: $ => ("!"
    ),

    identifier: $ => (/[a-z_][a-zA-Z0-9_]*/
    ),

    string: $ => (/[a-zA-Z_]+/
    ),

    _string_first_capitalised: $ => (/[A-Z_][a-zA-Z_]*/
    ),

    string_capitalised: $ => (/[A-Z_][A-Z_]*/
    ),

    float: $ => (seq($._num, ".", $._num)
    ),

    _num: $ => prec.right((repeat1($._digit)
    )),

    num: $ => prec.right((repeat1($._digit)
    )),

    _digit: $ => (/[0-9]/
    ),
  }
});
