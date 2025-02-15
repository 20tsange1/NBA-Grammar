# NBA Playbook DSL

## Coding Principles

### Variables

### Data Types
int, float, string, boolean, array, object

### Operators
Arithmetic: +, -, *, /, %
Comparison Operators: ==, !=, <, >, <=, >=
Logical Operators: AND, OR, NOT

### Control Flow
Conditions: if, else if, else
Loops: for, while

### Functions
Polymorphism
Returns

pick_and_roll()

iso()

give_and_go(passer, cutter):
    pass passer to cutter
    move cutter to basket
    pass cutter to passer
    shoot passer (layup)


Actions:
Offensive
- Shoot, Pass, Screen, Dribble, Cut, Post Up

Defensive
- Block, Steal, Contest, Switch, Double Team


Returns are just the BALL handler IF they still have a ball.

Opponent added in as optional but shows up as non-terminal child, such that it can be derived directly from the AST. Additionally, allows you to flag between own players and opponent players, needed for defensive moves. Put as exclamation mark, as it doesn't clash with names and is a flag.

Furthermore, as player names may not end, require it to be indicated using @. This is because it is undefined. I don't necessarily want to use ; to end a action as that is a lot more work. and I don't want to consider whitespaces. In the case you use player identifiers, life is significantly easier. A DSL for a specific team may want to incorporate player names directly into grammar, however, in the case of opponent players, this still needs to remain flexible. 

Locations stay constant, abstracted but shows up as location.


### Data Structures
Arrays
Dictionaries

### Object Oriented
Classes & objects
Methods & properties

### Event & State Management
Events, Triggers, Handles

### Concurrency & Parallelism
Threads, async/await, parallel execution


### Probablistic Calculations

Using the actions, player statistics and player information, evaluating the likelihood of a successful play.

Idea would be having a function, and then calculating at each move the player stats and likelihood of success based on some metrics




What we currently have is the ability to express all moves along with the ability to create plays (functions) which execute different moves successively. Flat structure

Player structure, store player attributes, statistics, percentages.

And then you can define the formulas for calculating the likelihoods. For simplicity, attributes are given as a general %, whereas a more defined grammar will enforce a > number of stats. 

Backend would be responsible for actually checking if the stat is applicable / valid / usable. What if new stats are created? 
Easier to run validity checks when categorised.
Also, capitalised category name so it doesn't clash with identifier.
Attribute accessible through .attribute_name

If you shoot the ball, you no longer have the ball. So don't return. Else return whoever has the ball.

Calculations, calculate the probablility of both plays and actions
Remember to add alias to the types
(<shoot_type> | <pass_type> | <dribble_move> | <cut_type>)?

Then next stay is fixed player tuples, size declared




## What it would look like

PERSON Lebron James @ {

INFORMATION
	Height: 2.06m
	Weight: 113.0kg
	Wingspan: 2.14m
	Age: 40years

ATTRIBUTES
	HANDLING
	(
		Ball_Handling: 0.95%
		Passing: 0.78%
	)

	SHOOTING
	(
		Layup: 0.672%
		Three_Point_Shot: 0.350%
	)
}

PLAY pass_shoot with On Ball, Off Ball {
	On Ball pass (chest) to Off Ball
	Off Ball shoot (layup)
}

PLAY pass_pass with Point Guard, Small Forward, Center {
	Point Guard pass (chest) to Small Forward
	Small Forward pass (bounce) to Center
	BALL Center
}

CALCULATE PASS with On Ball, Off Ball {
	on_ball = On Ball.passing * 0.37;
	receiver = Off Ball.ball_handling * 0.85;
	RETURN on_ball * receiver;
}

CALCULATE SHOOT with On Ball {
    return On Ball.layup;
}

EVAL with Lebron James @, Luca Doncic @, Austin Reaves @ {
    pass_shoot(
        pass_pass(
            Lebron James @, 
            Luca Doncic @, 
            Austin Reaves @
            ), 
        Lebron James @
        )
}

(For some reason, names aren't matching correctly, so temporary solution is to explicitly signify a function)

Which becomes (via event chaining)

Lebron James @ pass (chest) to Luca Doncic @
Luca Doncic @ pass (bounce) to Austin Reaves @
Austin Reaves @ pass (chest) to Lebron James @
Lebron James @ shoot (layup)

With the calculation 

(Lebron James.passing * 0.37) * (Luca Doncic.ball_handling * 0.85) 
* (Luca Doncic.passing * 0.37) * (Austin Reaves.ball_handling * 0.85)
* (Austin Reaves.passing * 0.37) * (Lebron James.ball_handling * 0.85)
* (Lebron James.layup)

=

(0.78 * 0.37) * (Luca Doncic.ball_handling * 0.85) 
* (Luca Doncic.passing * 0.37) * (Austin Reaves.ball_handling * 0.85)
* (Austin Reaves.passing * 0.37) * (0.95 * 0.85)
* (0.627)

= Success probability of chained events.




Add in ++, += ??

TEAM () make tuples

Also lets you then create matchups, teams and so on.

Change how what strings are permitted in each section, makes it distinct. i.e capital first letter for names, capital for sections, lowercase for identifier.

How about if else 

You can enforce action type either at the parser level or the back-end

By having the following = as optional, we also allow a standalone = to be the comparator.

Feature I like is also the chaining of comparators, helps you do between ranges.

Print statement?

I like the flexibility of python, I don't like the use of whitespaces for formatting.