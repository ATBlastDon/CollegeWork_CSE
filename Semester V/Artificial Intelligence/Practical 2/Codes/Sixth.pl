% Facts
studies(amol, 135).
studies(omkar, 135).
studies(javed, 131).
studies(ashwin, 134).
teaches(karthik, 135).
teaches(chahal, 131).
teaches(jasprit, 134).
teaches(chahel, 171).
% Rules and thier meaning
professor(X,Y) :- teaches(X, S), studies(Y, S). % X teaches S and Y studies S
student(X,Y) :- professor(Y,X). % ":-" - means , "," - and