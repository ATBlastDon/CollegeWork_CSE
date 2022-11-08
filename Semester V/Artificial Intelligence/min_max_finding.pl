% use of rules using if (:-) symbol.
% ! is a cut operator which skips other alternatives if fact in that line is true

find_max(X, Y, X) :- X >= Y, !.
find_max(X, Y, Y) :- X < Y.

find_min(X, Y, X) :- X =< Y, !.
find_min(X, Y, Y) :- X > Y.