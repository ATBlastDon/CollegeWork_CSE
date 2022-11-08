% Series and Parallel Resistance 
series(R1,R2,Re) :- Re is R1 + R2.
parallel(R1,R2,Re) :- Re is ((R1 * R2) / (R1 + R2)).


/* Queries
| ?- parallel(10,40,R3).

R3 = 8.0

yes
| ?- series(8,12,R4).

R4 = 20

yes
| ?- parallel(10,40,R3),series(R3,12,R4),parallel(R4,30,R5).

R3 = 8.0
R4 = 20.0
R5 = 12.0

yes
*/