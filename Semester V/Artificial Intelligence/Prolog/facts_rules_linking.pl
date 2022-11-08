%Example 1 : Below food table shows the facts, rules, goals and their english meanings.

%Facts and their English meanings                         
food(burger).	%burger is a food
food(sandwich).	% sandwich is a food
food(pizza).	% pizza is a food
lunch(sandwich).	% sandwich is a lunch
food(sandwich).	% sandwich is a food
dinner(pizza).	% pizza is a dinner


%Rule and meaning	
meal(X) :- food(X). % Every food is a meal OR Anything is a meal if it is a food


/* Queries / Goals	
?- food(pizza).
// Is pizza a food?
?- meal(X), lunch(X).
// Which food is meal and lunch? 
?- dinner(sandwich).
// Is sandwich a dinner? */
