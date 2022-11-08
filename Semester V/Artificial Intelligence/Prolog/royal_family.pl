% Facts

% By Gender
female(catherine).
female(sophia).
female(elizabeth).

male(X) :- \+ female(X).


% By Hierarchy
parent(james1, charles1).
parent(james1, elizabeth).
parent(charles1, catherine).
parent(charles1, james2).
parent(charles1, charles2).
parent(elizabeth, sophia).
parent(sophia, george).


% Rules

mother(X,Y) :- parent(X, Y), female(X).
father(X, Y) :- parent(X, Y), male(X).
sibling(X, Y) :- parent(P, X), parent(P, Y).
aunt(X, Y) :- female(X), parent(P, Y), sibling(X, P).
uncle(X, Y) :- male(X), parent(P, Y), sibling(X, P).
grandparent(X, Y) :- parent(P, Y), parent(X, P).


cousin(X, Y) :- parent(P, Y), sibling(S, P), parent(S, X).
