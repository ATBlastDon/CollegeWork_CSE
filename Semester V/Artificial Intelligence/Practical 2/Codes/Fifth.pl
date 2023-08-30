likes(mary,food).
likes(mary,wine).
likes(mary,john).
likes(joseph,joseph).
likes(John, X) :- likes(mary, X).
likes(john, Someone) :- likes(Someone, wine).
likes(john, Someone) :- likes(Someone, Someone).