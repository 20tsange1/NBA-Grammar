/**
 * @file NbaPlaybook grammar for tree-sitter
 * @author Edgar
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "nba_playbook",

  extras: ($) => [
		$.comment,
		/\s|\\\r?\n/,
	],

	word: ($) => ($.identifier, $.string_capitalised),

	rules: {
		start: $ => (repeat(choice(
      $.playbook
      ,$._action_only
      ,$.player_def
      ,$.calculate
      ,$.evaluate
      ,$.team
      ,$.conditional
      ,$.setup
    ))
    ),
    
    _action_only: $ => choice(
      $.offensive_action
      ,$.defensive_action
      ,$.special_action
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
    
    _action_holder: $ => (seq("{", repeat(choice(
      $.conditional
      ,$.offensive_action
      ,$.defensive_action
      ,$.special_action
    )), optional($.returns), "}")
    ),
    
    offensive_action: $ => (choice(
      $.shoot
      ,$.pass
      ,$.screen
      ,$.dribble
      ,$.cut
      ,$.post_up
    )
    ),
    
    defensive_action: $ => (choice(
      $.block
      ,$.steal
      ,$.contest
      ,$.switch
      ,$.double_team
    )
    ),
    
    special_action: $ => (choice(
      $.foul
      ,$.timeout
    )
    ),
    
    shoot: $ => (seq(choice(
      $.player
      ,$.player_identifier
    ), "shoot", optional($.shoot_type))
    ),
    
    shoot_type: $ => (seq("(", choice(
      "layup"
      ,"dunk"
      ,"jumper"
      ,"step-back"
      ,"floater"
      ,"fadeaway"
      ,"pull-up"
      ,"bank-shot"
    ), ")")
    ),
    
    pass: $ => choice(
      seq($.player, "pass", optional($.pass_type), "to", $.player)
      ,seq($.player_identifier, "pass", optional($.pass_type), "to", $.player_identifier)
    ),
    
    pass_type: $ => (seq("(", choice(
      "bounce"
      ,"lob"
      ,"chest"
      ,"behind-the-back"
      ,"no-look"
      ,"through"
    ), ")")
    ),
    
    screen: $ => choice(
      seq($.player, "set screen", "for", $.player, optional((seq("at", $.location)
    )))
      ,seq($.player_identifier, "set screen", "for", $.player_identifier, optional((seq("at", $.location)
    )))
    ),
    
    dribble: $ => choice(
      seq($.player, "dribble", optional($.dribble_move), "to", $.location)
      ,seq($.player_identifier, "dribble", optional($.dribble_move), "to", $.location)
    ),
    
    dribble_move: $ => (seq("(", choice(
      "crossover"
      ,"hesitation"
      ,"spin-move"
      ,"behind-the-back"
      ,"in-and-out"
    ), ")")
    ),
    
    cut: $ => choice(
      seq($.player, "cut", optional($.cut_type), "to", $.location)
      ,seq($.player_identifier, "cut", optional($.cut_type), "to", $.location)
    ),
    
    cut_type: $ => (seq("(", choice(
      "backdoor"
      ,"flare"
      ,"curl"
      ,"fade"
    ), ")")
    ),
    
    post_up: $ => choice(
      seq($.player, "post up", "at", $.location)
      ,seq($.player_identifier, "post up", "at", $.location)
    ),
    
    block: $ => choice(
      seq($.player, "block", "shot", "by", $.player)
      ,seq($.player_identifier, "block", "shot", "by", $.player_identifier)
    ),
    
    steal: $ => choice(
      seq($.player, "steal", "from", $.player)
      ,seq($.player_identifier, "steal", "from", $.player_identifier)
    ),
    
    contest: $ => choice(
      seq($.player, "contest", "shot", "by", $.player)
      ,seq($.player_identifier, "contest", "shot", "by", $.player_identifier)
    ),
    
    switch: $ => choice(
      seq($.player, "switch", "onto", $.player)
      ,seq($.player_identifier, "switch", "onto", $.player_identifier)
    ),
    
    double_team: $ => choice(
      seq($.player, "double team", "on", $.player, optional((seq("with", $.player)
    )))
      ,seq($.player_identifier, "double team", "on", $.player_identifier, optional((seq("with", $.player_identifier)
    )))
    ),
    
    foul: $ => prec(2,choice(
      seq($.player, optional("intentionally"), "fouls", $.player)
      ,seq($.player_identifier, optional("intentionally"), "fouls", $.player_identifier)
    )),
    
    timeout: $ => choice(
      seq($.player, "calls timeout")
      ,seq($.player_identifier, "calls timeout")
    ),
    
    location: $ => choice(
      $._frontcourt
      ,$._backcourt
      ,$._wing
      ,$._corner
      ,$._paint
      ,$._post
    ),
    
    _frontcourt: $ => choice(
      "Top of Key"
      ,"Free Throw Line"
      ,"Elbow Left"
      ,"Elbow Right"
    ),
    
    _backcourt: $ => choice(
      "Half Court"
      ,"Backcourt"
      ,"Logo"
    ),
    
    _wing: $ => choice(
      "Left Wing"
      ,"Right Wing"
    ),
    
    _corner: $ => choice(
      "Left Corner"
      ,"Right Corner"
    ),
    
    _paint: $ => choice(
      "Restricted Area"
      ,"Paint"
      ,"Low Block"
    ),
    
    _post: $ => choice(
      "Low Post"
      ,"High Post"
    ),
    
    player_def: $ => (seq("PERSON", $.player_name, "{", $.player_personals, optional($.player_attributes), "}")
    ),
    
    player_name: $ => ($.player
    ),
    
    player_personals: $ => (seq("INFORMATION", "Height", optional(":"), choice(
      $.float
      ,$.num
    ), optional("m"), "Weight", optional(":"), choice(
      $.float
      ,$.num
    ), optional("kg"), "Wingspan", optional(":"), choice(
      $.float
      ,$.num
    ), optional("m"), "Age", optional(":"), $.num, optional("years"))
    ),
    
    player_attributes: $ => (seq("ATTRIBUTES", repeat($.attribute_category))
    ),
    
    attribute_category: $ => (seq(alias($.string_capitalised, $.identifier), "(", repeat1($.attribute), ")")
    ),
    
    attribute: $ => ((seq($.identifier, optional(":"), choice(
      $.float
      ,$.bool
    ), optional("%"))
    )
    ),
    
    calculate: $ => (seq('CALCULATE', choice(
      alias($.string_capitalised, $.identifier)
      ,$.identifier
    ), optional((seq("with", $.player_identifier, repeat((seq(",", $.player_identifier)
    )))
    )), $.calculation_holder)
    ),
    
    calculation_holder: $ => (seq("{", repeat($.calculation_variable), "RETURN", ($.calculation_expression
    ), ";", "}")
    ),
    
    calculation_variable: $ => (seq($.identifier, optional(choice(
      "+"
      ,"-"
      ,"/"
      ,"*"
    )), "=", $.calculation_expression, ";")
    ),
    
    calculation_expression: $ => choice(
      $._calculation_values
      ,$.calculation_bracket
      ,$._calculation_line
    ),
    
    _calculation_line: $ => (choice(
      $._calculate_higher_precedence
      ,$._calculate_lower_precedence
    )
    ),
    
    _calculate_higher_precedence: $ => prec.left(2,(seq($.calculation_expression, choice(
      "*"
      ,"/"
      ,"%"
      ,"//"
      ,"**"
    ), $.calculation_expression)
    )),
    
    _calculate_lower_precedence: $ => prec.left(1,(seq($.calculation_expression, choice(
      "+"
      ,"-"
    ), $.calculation_expression)
    )),
    
    calculation_bracket: $ => prec(3,(seq("(", $.calculation_expression, ")")
    )),
    
    _calculation_values: $ => prec(3,(choice(
      $.attribute_access
      ,$.float
      ,$.num
      ,$.identifier
    )
    )),
    
    attribute_access: $ => prec(1,(seq($.player_identifier, ".", $.identifier)
    )),
    
    evaluate: $ => (seq('EVAL', optional((seq("with", choice(
      $.player
      ,seq($.identifier, optional($.array_access))
    ), repeat((seq(",", choice(
      $.player
      ,seq($.identifier, optional($.array_access))
    ))
    )))
    )), $.evaluation_holder)
    ),
    
    evaluation_holder: $ => (seq("{", repeat($.evaluation_function), "}")
    ),
    
    evaluation_function: $ => choice(
      $.function_chain
      ,$._action_only
    ),
    
    function_chain: $ => ((seq($.identifier, "(", optional((seq(choice(
      choice(
      $.player
      ,seq($.identifier, optional($.array_access))
    )
      ,$.function_chain
    ), repeat((seq(",", choice(
      $.player
      ,$.function_chain
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
    
    conditional: $ => (seq("IF", $.condition, "{", repeat(choice(
      $._action_only
      ,$.conditional
    )), "}", optional((seq("OTHERWISE", "{", repeat(choice(
      $._action_only
      ,$.conditional
    )), "}")
    )))
    ),
    
    condition: $ => choice(
      $.negate_condition
      ,$.sub_condition
      ,$.compare
    ),
    
    negate_condition: $ => (seq("NOT", $.condition)
    ),
    
    sub_condition: $ => choice(
      seq("[", $.condition, repeat((seq("AND", $.condition)
    )), "]")
      ,seq("[", $.condition, repeat((seq("OR", $.condition)
    )), "]")
    ),
    
    compare: $ => (seq($._comparison_values, repeat((seq($.comparator, $._comparison_values)
    )))
    ),
    
    comparator: $ => (seq(choice(
      ">"
      ,"<"
      ,"="
    ), optional("="))
    ),
    
    _comparison_values: $ => (choice(
      $._calculation_values
      ,$.bool
      ,$.player_location
    )
    ),
    
    player_location: $ => choice(
      seq($.player, "at", $.location)
      ,seq($.player_identifier, "at", $.location)
      ,seq($.identifier, optional($.array_access), "at", $.location)
    ),
    
    setup: $ => (seq("SETUP", optional((seq("with", choice(
      $.player
      ,seq($.identifier, optional($.array_access))
    ), repeat((seq(",", choice(
      $.player
      ,seq($.identifier, optional($.array_access))
    ))
    )))
    )), $.setup_holder)
    ),
    
    setup_holder: $ => (seq("{", repeat($.player_location), $.ball_holder, "}")
    ),
    
    ball_holder: $ => (seq("BALL", choice(
      $.player
      ,seq($.identifier, optional($.array_access))
    ))
    ),
    
    player: $ => prec(4,(seq(optional($.opponent_identifier), $.name, '@')
    )),
    
    name: $ => (repeat1($._string_first_capitalised)
    ),
    
    player_identifier: $ => prec(6,(seq(optional($.opponent_identifier), choice(
      "Point Guard"
      ,"Shooting Guard"
      ,"Small Forward"
      ,"Power Forward"
      ,"Center"
      ,"Ball Handler"
      ,"On Ball"
      ,"Off Ball"
    ))
    )),
    
    opponent_identifier: $ => ("!"
    ),
    
    identifier: $ => (/[a-z_][a-zA-Z0-9_]*/
    ),
    
    array_access: $ => (seq("[", choice(
      $.num
      ,(seq(optional((seq(optional("-"), $.num)
    )), optional((seq(":", optional((seq(optional("-"), $.num)
    )))
    )))
    )
    ), "]")
    ),
    
    string: $ => (/[a-zA-Z_]+/
    ),
    
    _string_first_capitalised: $ => (/[A-Z_][a-zA-Z_]*/
    ),
    
    string_capitalised: $ => (/[A-Z_][A-Z_]*/
    ),
    
    float: $ => (seq($._num, ".", $._num)
    ),
    
    bool: $ => choice(
      "true"
      ,"false"
    ),
    
    _num: $ => prec.right((/[0-9]+/
    )),
    
    num: $ => prec.right((/[0-9]+/
    )),

		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: (_$) =>
			token(choice(
				seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
				seq(
					"/*",
					/[^*]*\*+([^/*][^*]*\*+)*/,
					"/",
				),
			)),
  },
});
