# The NBA Calculator - A Domain Specific Language

## Introduction

The language in question, designed for this assignment, is the NBA Calculator, a domain specific language catering towards NBA analysts seeking to calculate the probabilistic success of a certain move or set of plays. Concerning this coursework, it is assumed that a magical back-end exists to carry out certain functionality along with carrying out calculations. In this case, the language serves to create a model with which analysts can input player's attributes, declare plays, and evaluate such plays. Furthermore, the langauge is designed with flexibility in mind, allowing calculations for actions (such as shooting, passing, and more) to be overridden, providing comprehensive evaluation functionality, whereby the analyst can provide their own formulas and success rates. By creating a new language, there was much greater flexibility on construction, however, each individual component had to be deliberated upon and designed for seamless incorporation. As such, the following document will, through closely examining an example, intertwine the explanation of the language with the motivation and implementation.

## The Language

In order to more closely examine the purpose and motivation of the language, a complete example will be provided along with an expected output. Given that the language is to be used by analysts, usability and readability were in focus when designing the language. A focus was placed on using keywords and structures that provide an illusion of plain english, such that it can be easily understood without prior training on the language. Furthermore, an interpreted-style language is a key inspiration, with the aim of allowing analysts to use building blocks which are processed from top to bottom, and are evaluated as is before moving to the next block – perfect for a jupyter notebook interface.

The building blocks in question are:

**PERSON**
: For defining a player's characteristics and attributes. Requires assignment of a player name.

**TEAM**
: For defining a team of players (and/or opposition players) for easy future reference.

**PLAY**
: For defining a set play, a chain of actions and moves within basketball.

**CALCULATION**
: For expressing a calculation of an action or play, overriding the default success probability calculation.

**EVAL**
: For evaluating a set of plays or actions, providing analysts with a statistical probability of success.

Each building block begins with a capitalised identifier, allowing it to be easily identified as one such building block along with the use of curly-brackets ({}) to denote and enclose the contents of the block. These building blocks are expected to be pieced together, building up a simulation of a basketball court and the set of actions that take place during a game. Analysts can add players as they see fit, define teams wherever necessary, define plays which are relevant, and then evaluate these plays for its success rate. The simplicity of using building blocks (especially with a purposely low number of them), allows the language to be easily managed, as it is instantly clear what each block pertains to.

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

        CHARACTERISTICS
        (
            left_handed: true
        )
}
```

As with the building blocks, this player block initially begins with the "PERSON" keyword, followed by the player name. The proceeding player information is then contained within a predefined format, whilst attributes are extendable and defined by the analyst. As the field of analytics is continously in flux, new attributes or characteristics may be added, requiring this extendability. These attributes can take the form of a float, boolean or number (Although type checking will be handled by the back-end), and is designed to be referenced in other parts of the language (via `Player Identifier.attribute`), allowing analysts to use it within calculations. This implementation follows a json-like structure due to its readability, nesting the attributes under subsections which in turn can be used as a categorisation token.

### Team Declaration

```
// Team Declaration
TEAM la_lakers (Lebron James @, Luka Doncic @, Austin Reaves @)
TEAM la_bucks_matchup (Lebron James @, ! Giannis Antetokounmpo @)
```

As it is tedious to continously rewrite the names of players over and over again, team declarations are provided, allowing you to predefine tuples containing the players – this enables it for use within other blocks such as the evaluation block. It is assumed that the magical backend will handle checking for unique identifiers, along with ensuring that players included have been defined. An exclamation mark (!) is used to denote an opposing player. This provides the analysts with the ability to include the stats and attributes of opponents into their calculations. Within the language itself, this will show up as a named node, allowing easy classification of the player as an opponent by checking for the appearance of this node.

When designing the grammar, it was noticed that allowing flexibility in identifier names, block names, and player names led to the parser incorrectly tokenising the different names even when a right or left precedence was set. As such, to more clearly denote each name type, each name type was designed to avoid conflicts:

**Blocks**
: Complete capitalisation

**Player Names**
: First letter of each word capitalised, followed by an @ at the end

**Identifiers**
: Lowercase first letter

**Player Identifier & Locations**
: Fixed set of position identifiers, (Point Guard, Shooting Guard, On Ball ...) and location identifiers (Top of Key, Elbow Left, Left Wing ...)

None of these types can have the same prefix after the first letter, allowing it to be parsed more easily whilst still allowing for flexibility in the naming conventions. Particularly in the case of the player names, it is also immediately obvious to the analysts what a name/identifier is being used for. A less flexible, team specific DSL may require hard-coding of the players names, however, as this language is made to develop extensible analysis programs, new player names may need to be added at any times, which is why flexibility is required.


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

// Play Declaration
PLAY dribble_play with On Ball, !Off Ball {
	IF [!Off Ball at Top of Key AND !Off Ball.defensive_rating >= 75] {
		On Ball dribble (hesitation) to Left Wing
	}
	OTHERWISE {
		On Ball shoot (jumper)
	}
}
```

Additionally, Basketball is a game built up of different moves and actions chained together and executed sequentially. In order to enable that, the language provides the ability to declare plays, set moves whereby 1 or more actions (passing, shooting, driving) are listed sequentially – along with their respective types, e.g chest or bounce or lobs for passing. In this case, a play takes the form of a function-like block, requiring the analyst to use identifiers for the players involved (arguments) and consequently use them within the play. Plays can either return the respective player with the ball, or not return anything at all, signifying whether a play retains the ball or not – For example, when the ball is shot, the team will no longer have possession of the ball. This also allows us to then use plays within other plays, as it can evaluate to a player who is holding the ball.

In order to more easily identify a chain of actions within the language and reduce the depth of the resultant AST, a flat structure has been created, leveraging the repeat1 function within tree-sitter to enable these actions to be laid out on a single equal level. During evaluation of the AST, it is then possible to know directly the number of and types of actions with just a shallow exploration of the AST. Additionally, actions do not require a symbol to end each line, a liberty taken in design, allowing analysts to not have to fret over trivial problems such as missing semi-colons. 

The language also provides the ability to define conditions and prerequisites to an action, requiring these conditions to be true or excluding an action / providing an alternative action. This follows an `IF {} OTHERWISE {}` structure, where the otherwise segment is optional as not all conditionals require an alternative. It is also possible to nest conditionals, building up a greater depth of conditional expressions. Conditions can also be chained, allowing for more complex boolean expressions to be formed (Expressions using AND and OR). This is important towards analysts, as certain moves may have complex prerequisites that need to be fulfilled before it can be carried out, or in some cases there may be a better alternative, e.g if a player has a low pass rating, it may be more effective for them to dribble the ball to a specific location.

```
IF NOT [[a AND b] OR NOT [c AND d] OR [c OR a]] {
    IF {
    }
}
```

In order to prevent the incorrect evaluation of conditionals, it is designed that any condition within the same set of square brackets ([]) must be either conjunctions (AND) or disjunctions (OR), not both. This allows for better enforcement of the two, making evaluation of a conditional more straightforward, preventing ambiguity via the language design and requiring analysts to explicity enforce precedence.

Conditions would not be complete if it were not encapsulative of all the different types of numerical and boolean comparisons (e.g >=, ==), and as such, each one has been included, constructing a comprehensive comparison suite. Analysts may also want to negate conditions in cases where a condition should not be true, and this is enabled through the use of the NOT keyword in front of a condition. As a bonus, both "=" and "==" are enabled and can be used interchangeably depending on analyst preference. 

### Calculation Expressions

```
// Pass Calculation
CALCULATE PASS with On Ball, Off Ball {
	on_ball = On Ball.passing * 0.87;
	receiver = Off Ball.ball_handling * (0.85 * 1.0);
	RETURN on_ball * receiver;
}

// Shot Calculation
CALCULATE SHOOT with On Ball {
    RETURN On Ball.layup;
}
```

Analysts love their numbers and calculations, exploiting them for an edge in probablistic predictions. As such, the language is designed to enable this numerical self expression, allowing analysts to define the probability of success regarding each move and play. While it is assumed that a default probability is provided, this language enables analysts to implement unique and innovative analytical solutions, giving them free reign to form their desired mathematical equations.

In this case, it is possible to form any mathematical equation using the symbols `(+ for addition, - for Subtraction, * for multiplication, / for division, % for modulus, // for floor division, ** for power)`, with a lower precedence for addition and subtraction as according to the mathematical order of operations. Furthermore, the inclusion of bracketing allows for analysts to define their own precedence of operations, ensuring that all their mathematical explorations can be expressed. Additionally, the inclusion of variables, defined by an identifier followed with some form of equals `(=, or +=, -=, /=, *=)`, allows analysts to temporarily store results and be more deliberate in forming equations – along with increasing the readability of their equations.

```
// Overriding Play Calculation
CALCULATE pass_pass {
    RETURN 1.0;
}
```

Furthermore, some plays that are practiced more or signature moves may have a higher probability of success as opposed to if it was calculated using each individual action. In this case, the probability of the play can be overriden and provided directly by the analyst (as a float value), or calculated using the same expressions allowed previously. It can also be noted that for ease of extracting the identifier of a block, the identifier token exists as the first child wherever it appears, allowing this identifier to be used before exploring the rest of the AST of that block, making it easier to access for type-checking and similar purposes.

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

Consequently, before any evaluation of a play, it is the case that the ball carrier must be identified, such that it can be used in a corresponding play correctly (checked by the magical back-end). Furthermore, as conditions may pertain to a player's position, this can also be declared at this stage. This information is then to be stored by the back-end to be used when plays are called. 

Whenever the use of TEAM identifiers is concerned, it is also possible to use array access syntax (including array slicing), in order to identify specific players within a team. This feature enables analysts to identify and use subsets of predefined teams, or specific players within a team without requiring them to rewrite the players names in full again. This streamlines the writing process for analysts, allowing them to also change the players evaluated at a team level if required (i.e swapping players out) without having to touch the evaluations / setups themselves.

This is done via:

```
identifier[:IND_END]
identifier[IND_START:]
identifier[IND_START:IND_END]
identifier[IND]
```

where IND, IND_START, IND_END are the array indexes.

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

Lastly and most importantly, analysts must be able to evaluate the plays they have setup, passing players as inputs into sequences of plays to calculate the success rate of the combination. A key feature here is the sequencing of plays, the use of players or identifiers as arguments, and the use of plays within plays. Some plays return the player with the ball, and this can then be used in the play that it is nested within, allowing analysts to more succinctly chain plays together. The evaluation block ties up the language altogether, bringing forth its purpose of success calculation and providing the functionality that it is designed for.

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