# The NBA Calculator - A Domain Specific Language

## Introduction

The language in question, designed for this assignment, is the NBA Calculator, a domain specific language catering towards NBA analysts seeking to calculate the probabilistic success of a certain move or set of plays. Concerning this coursework, it is assumed that a magical back-end exists to carry out certain functionality along with carrying out calculations. In this case, the language serves to create a model with with analysts can input player's attributes, declare plays, and evaluate such plays. Furthermore, the langauge is designed with flexibility in mind, allowing calculations for actions (such as shooting, passing, and more) to be overridden, providing comprehensive evaluation functionality, whereby the analyst can provide their own formulas and success rates. 

## Example Runthrough

In order to more closely examine the purpose of the language, a complete example will be provided along with an expected output. This will serve to highlight the usability of the language and its readability, both of which were in focus when designing the language.

### Player Declaration
```
// First Player
PERSON Lebron James @ {

    INFORMATION
        Height: 2.06m
        Weight: 113.0kg
        Wingspan: 2.14m
        Age: 40years

    ATTRIBUTES
        HANDLING
        (
            ball_handling: 0.95%
            passing: 0.78%
        )

        SHOOTING
        (
            layup: 0.672%
            three_point_shot: 0.350%
        )
}
```

The player definition above allows player's attributes and characteristics to be defined. It initially begins with the "PERSON" keyword, followed by the player name. The following information is then contained within a certain format, whilst attributes are extendable and defined by the analyst. As the field of analytics is continously in flux, new attributes or characteristics may be added, requiring this extendability. These attributes can then be referenced in other parts of the language, allowing analysts to use it within calculations.

### Team Declaration

```
// Team Declaration
TEAM la_lakers (Lebron James @, Luka Doncic @, Austin Reaves @)
TEAM la_bucks_matchup (Lebron James @, ! Giannis Antetokounmpo @)
```

As it is tedious to continously rewrite the names of players over and over again, team declarations are provided, allowing you to predefine tuples containing the players. It is assumed that the magical backend will handle checking for unique identifiers, along with ensuring that players included have been defined. An exclamation mark (!) is used to denote an opposing player. This provides the analysts with the ability to include the stats and attributes of opponents into their calculations.

As can be seen, players are denoted their names with the first letter capitalised followed by the @ sign.

### Play Declaration

```
// Play Declaration
PLAY pass_shoot with On Ball, Off Ball {
	On Ball pass (chest) to Off Ball
	Off Ball shoot (layup)
}

// Play Declaration
PLAY pass_pass with Point Guard, Small Forward, Center {
	Point Guard pass (chest) to Small Forward
	Small Forward pass (bounce) to Center
	BALL Center
}

PLAY dribble_play with On Ball, !Off Ball {
	IF [!Off Ball at Top of Key AND !Off Ball.defensive_rating >= 75] {
		On Ball dribble (hesitation) to Left Wing
	}
	OTHERWISE {
		On Ball shoot (jumper)
	}
}
```

Additionally, Basketball is a game built up of different moves and actions chained together and executed sequentially. In order to enable that, the language provides the ability to declare plays, set moves whereby 1 or more actions (passing, shooting, driving) are listed sequentially – along with their respective types, e.g chest or bounce or lobs for passing. In a real life basketball game, these correlate to the moves that players can take. In this case, a play can be seen as the equivalent of a function, requiring the analyst to use identifiers for the players involved (arguments) and consequently use them within the play. It is also assumed that the checking of the validity of the identifiers and their usage will be checked by the magical back-end.

Plays can either return the respective player with the ball, or not return anything at all, signifying whether the play retains the ball or not – For example, when the ball is shot, the team no longer has possession of the ball.

The language also provides the ability to define conditions and prerequisites to an action, requiring these conditions to be true or excluding an action / providing an alternative action. Conditions can also be chained, allowing for more complex boolean expressions to be formed (Expressions using AND and OR).

### Calculation Expressions

```
// Pass Calculation
CALCULATE PASS with On Ball, Off Ball {
	on_ball = On Ball.passing * 0.87;
	receiver = Off Ball.ball_handling * 0.85;
	RETURN on_ball * receiver;
}

// Shot Calculation
CALCULATE SHOOT with On Ball {
    RETURN On Ball.layup;
}
```

Moving to the probabilistic calculations that the language enables, it first begins with the definition of the probability of success of each move. While it is assumed that a default probability is provided, this language enables the analyst to define their own success probabilities, allowing analysts to implement unique and innovative analytical solutions. In this case, it is possible to express all equations using the symbols (+ for addition, - for Subtraction, * for multiplication, / for division, % for modulus, // for floor division, ** for power). This calculation then returns a float value <= 1.0 (To be checked by magical backend) - limited by the maximum probability of success (1.0).

```
// Overriding Play Calculation
CALCULATE pass_pass {
    RETURN 1.0;
}
```

Furthermore, some plays that are practiced more or signature moves may have a higher probability of success as opposed to if it was calculated using each individual action. In this case, the probability of the play can be overriden and provided directly by the analyst, or calculated using the same expressions allowed previously.

### Court Positioning Setup

```
//Setting up the court
SETUP with la_lakers {
    la_lakers[0] at Top of Key
    la_lakers[1] at Elbow Left
    la_lakers[2] at Elbow Right
    BALL Lebron James @
}
```

Consequently, before any evaluation of a play, it is the case that the ball carrier must be identified, such that it can be used in a corresponding play correctly (checked by the magical back-end). Furthermore, as conditions may pertain to a player's position, this can also be declared at this stage. This information is then stored by the back-end to be used when plays are called.

### Play Evaluation

```
// Evaluation of play
EVAL with Lebron James @, la_lakers {
    pass_shoot(
        pass_pass(la_lakers), 
        Lebron James @
        )
}
```

Lastly and most importantly, sequences of plays can be evaluated with players as inputs. This allows for the players to be evaluated within the plays and used within the calculations, to return the probability of success. A key feature here is the sequencing of plays, the use of players or identifiers as arguments, and the use of plays within plays. Some plays return the player with the ball, and this can then be used in the play that it is nested within. The evaluation ties up the language altogether, bringing forth its purpose of success calculation and providing the functionality that it is designed for.


### Output Process (Example)

```
pass_pass(la_lakers)

becomes

Lebron James @ pass (chest) to Luka Doncic @
Luka Doncic @ pass (bounce) to Austin Reaves @

returning

BALL Austin Reaves @
```

As the langauge is designed for plays to be used as arguments within a play, this then leads to the following.

```
pass_shoot(pass_pass(la_lakers), Lebron James @)

becomes

pass_shoot(Austin Reaves @, Lebron James @)

which becomes

Austin Reaves @ pass (chest) to Lebron James @
Lebron James @ shoot (layup)
```

These plays are then be chained and calculated using the expressions defined in the calculation block:

```
pass_pass = 1.0
pass_shoot = pass * shoot = ((0.87 * 0.78) * ((Austin Reaves @).ball_handling * 0.85)) * (0.672)

result = pass_pass * pass_shoot
```

Resultantly, analysts are provided with a success probability which can help them analyse their moves against an opposing team and decide on the most optimal plays for the team to make. Although tailored in this case to NBA analysts, moves can be easily altered within the language to support a wider range of sports. Altogether, the language allows analysts to define players, define plays, express calculations, and evaluate a game-like scenario for it's chance of success.

## Design

## Instruction Manual

## E-BNF
```
<start> ::= (<playbook> | <_action_only> | <player_def> | <calculate> | <evaluate> | <team> | <conditional> | <setup>)*
;

<_action_only> ::= <offensive_action> | <defensive_action> | <special_action>
;

<playbook> R::= (<play>)+
;

<play> ::= "PLAY" <identifier> ("with" <player_identifier> ("," <player_identifier>)*)? <_action_holder>
;

<returns> ::= "BALL" <player_identifier>
;

<_action_holder> ::= "{" (<conditional> | <offensive_action> | <defensive_action> | <special_action> )* <returns>? "}"
;

<offensive_action> ::= (<shoot> | <pass> | <screen> | <dribble> | <cut> | <post_up>)
;

<defensive_action> ::= (<block> | <steal> | <contest> | <switch> | <double_team>)
;

<special_action> ::= (<foul> | <timeout>)
;





<shoot> ::= (<player> | <player_identifier>) "shoot" <shoot_type>?
;

<shoot_type> ::= "(" ("layup" | "dunk" | "jumper" | "step-back" | "floater" | "fadeaway" | "pull-up" | "bank-shot" ) ")"
;

<pass> ::= <player> "pass" <pass_type>? "to" <player>
| <player_identifier> "pass" <pass_type>? "to" <player_identifier>
;

<pass_type> ::= "(" ("bounce" | "lob" | "chest" | "behind-the-back" | "no-look" | "through") ")"
;

<screen> ::= <player> "set screen" "for" <player> ("at" <location>)?
| <player_identifier> "set screen" "for" <player_identifier> ("at" <location>)?
;


<dribble> ::= <player> "dribble" <dribble_move>? "to" <location>
| <player_identifier> "dribble" <dribble_move>? "to" <location>
;

<dribble_move> ::= "(" ("crossover" | "hesitation" | "spin-move" | "behind-the-back" | "in-and-out") ")"
;

<cut> ::= <player> "cut" <cut_type>? "to" <location>
| <player_identifier> "cut" <cut_type>? "to" <location>
;

<cut_type> ::= "(" ("backdoor" | "flare" | "curl" | "fade") ")"
;

<post_up> ::= <player> "post up" "at" <location>
| <player_identifier> "post up" "at" <location>
;







<block> ::= <player> "block" "shot" "by" <player>
| <player_identifier> "block" "shot" "by" <player_identifier>
;

<steal> ::= <player> "steal" "from" <player>
| <player_identifier> "steal" "from" <player_identifier>
;

<contest> ::= <player> "contest" "shot" "by" <player>
| <player_identifier> "contest" "shot" "by" <player_identifier>
;

<switch> ::= <player> "switch" "onto" <player>
| <player_identifier> "switch" "onto" <player_identifier>
;

<double_team> ::= <player> "double team" "on" <player> ("with" <player>)?
| <player_identifier> "double team" "on" <player_identifier> ("with" <player_identifier>)?
;




<foul> P2::= <player> "intentionally"? "fouls" <player>
| <player_identifier> "intentionally"? "fouls" <player_identifier>
;

<timeout> ::= <player> "calls timeout"
| <player_identifier> "calls timeout"
;








<location> ::= <_frontcourt> | <_backcourt> | <_wing> | <_corner> | <_paint> | <_post>
;

<_frontcourt> ::= "Top of Key" | "Free Throw Line" | "Elbow Left" | "Elbow Right"
;

<_backcourt> ::= "Half Court" | "Backcourt" | "Logo"
;

<_wing> ::= "Left Wing" | "Right Wing"
;

<_corner> ::= "Left Corner" | "Right Corner"
;

<_paint> ::= "Restricted Area" | "Paint" | "Low Block"
;

<_post> ::= "Low Post" | "High Post"
;




<player_def> ::= "PERSON" <player_name> "{" <player_personals> <player_attributes>? "}"
;

<player_name> ::= <player>
;

<player_personals> ::= "INFORMATION"
"Height" ":"? (<float> | <num>) "m"?
"Weight" ":"? (<float> | <num>)"kg"?
"Wingspan" ":"? (<float> | <num>) "m"?
"Age" ":"? <num> "years"?
;

<player_attributes> ::= "ATTRIBUTES" <attribute_category>* 
;

<attribute_category> ::= <string_capitalised>
"(" <attribute>+ ")"
;

<attribute> ::= (<identifier> ":"? (<float> | <bool>) "%"?)
;



<calculate> ::= CALCULATE (<string_capitalised> | <identifier>) ("with" <player_identifier> ("," <player_identifier>)*)? <calculation_holder>
;

<calculation_holder> ::= "{"
<calculation_variable>*
"RETURN" (<calculation_expression>) ";"
"}"
;

<calculation_variable> ::= <identifier> ("+" | "-" | "/" | "*")? "=" <calculation_expression> ";"
;

<calculation_expression> ::= <_calculation_values> | <calculation_bracket> | <_calculation_line>
;

<_calculation_line> ::=  (<_calculate_higher_precedence> |  <_calculate_lower_precedence>)
;

<_calculate_higher_precedence> L2::= <calculation_expression> ("*" | "/" | "%" | "//" | "**") <calculation_expression>
;

<_calculate_lower_precedence> L1::= <calculation_expression> ("+" | "-") <calculation_expression>
;

<calculation_bracket> P3::= "(" <calculation_expression> ")"
;

<_calculation_values> P3::= ( <attribute_access> | <float> | <num> | <identifier> )
;

<attribute_access> P1::= <player_identifier>"."<identifier>
;





<evaluate> ::= EVAL ("with" (<player> | <identifier> <array_access>?) ("," (<player> | <identifier> <array_access>?))*)? <evaluation_holder>
;

<evaluation_holder> ::= "{" <evaluation_function>* "}"
;

<evaluation_function> ::=  <function_chain> | <_action_only>
;

<function_chain> ::= (<identifier> "(" (((<player> | <identifier> <array_access>?) | <function_chain>) ("," (<player> | <function_chain>))*)? ")")
;



<team> ::= TEAM <identifier> "(" <team_holder> ")"
;

<team_holder> ::= <player> ("," <player>)*
;



<conditional> ::= 
"IF" <condition> "{" 
(<_action_only> | <conditional> )*
"}" 
("OTHERWISE" 
"{" 
(<_action_only> | <conditional> )*
"}")?
;

<condition> ::=  <negate_condition>
| <sub_condition>
| <compare>
;

<negate_condition> ::= "NOT" <condition>
;

<sub_condition> ::= "[" <condition> ("AND" <condition>)* "]" 
| "[" <condition> ("OR" <condition>)* "]"
;

<compare> ::= <_comparison_values> (<comparator> <_comparison_values>)*
;

<comparator> ::= (">" | "<" | "=")"="?
;

<_comparison_values> ::= ( <_calculation_values> | <bool> | <player_location>)
;

<player_location> ::= <player> "at" <location>
| <player_identifier> "at" <location>
| <identifier> <array_access>? "at" <location>
;



<setup> ::= "SETUP" ("with" (<player> | <identifier> <array_access>?) ("," (<player> | <identifier> <array_access>?))*)? <setup_holder>
;

<setup_holder> ::= "{" <player_location>* <ball_holder> "}"
;

<ball_holder> ::= "BALL" (<player> | <identifier> <array_access>?)
;



<player> P4::= <opponent_identifier>? <name> @
;

<name> ::=  <_string_first_capitalised>+
;


<player_identifier> P6::= <opponent_identifier>? ("Point Guard" | "Shooting Guard" | "Small Forward" | "Power Forward" | "Center" | "Ball Handler" | "On Ball" | "Off Ball") 
;

<opponent_identifier> ::= "!"
;



<identifier> ::= /[a-z_][a-zA-Z0-9_]*/
;

<array_access> ::= "[" ( <num> | (("-"? <num>)? (":" ("-"? <num>)?)? ) ) "]"
;

<string> ::= /[a-zA-Z_]+/
;

<_string_first_capitalised> ::= /[A-Z_][a-zA-Z_]*/
;

<string_capitalised> ::= /[A-Z_][A-Z_]*/
;

<float> ::= <num>"."<num>
;

<bool> ::= "true" | "false"
;

<_num> R::= /[0-9]+/
;

<num> R::= /[0-9]+/
;
```