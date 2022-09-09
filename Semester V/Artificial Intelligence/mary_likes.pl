% Facts and thier meaning

likes(mary, food).
likes(mary, wine).
likes(mary, john).
likes(john, food).
likes(john, wine).
likes(christine, christine).

% Rules and thier meaning
likes(john, X) :- likes(mary, X).
likes(john, X) :- likes(X, wine).
likes(john, X) :- likes(X, X).