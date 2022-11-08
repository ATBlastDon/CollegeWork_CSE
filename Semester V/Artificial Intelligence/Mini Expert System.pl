state(ac,bd,a):-
write('move to b'),nl, state(ac,bd,b).

state(ac,bd,b):-
write('clean b'),nl, state(ac,bc,b).

state(ac,bc,b):-
write('both a & b are clean').

state(ad,bc,a):-
write('clean a'),nl,state(ac,bc,a).

state(ac,bc,a):-
write('both a & b are clean').

state(ad,bc,b):-
write('move to a'),nl, state(ad,bc,a).

state(ad,bd,a):-
write('clean a'),nl,state(ac,bd,a).

state(ad,bd,b):-
write('clean b'),nl,state(ad,bc,b).