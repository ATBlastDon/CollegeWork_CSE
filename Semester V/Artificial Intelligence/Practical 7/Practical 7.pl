state(ad,bd,b):-
write('Clean b'),nl,state(ad,bc,b).

state(ad,bc,b):-
write('Move to a'),nl,state(ad,bc,a).

state(ad,bc,a):-
write('Clean a'),nl,state(ac,bc,a).

state(ac,bc,a):-
write('Both are Clean').

state(ad,bd,a):-
write('Clean a'),nl,state(ac,bd,a).

state(ac,bd,a):-
write('Move to b'),nl,state(ac,bd,b).

state(ac,bd,b):-
write('Clean b'),nl,state(ac,bc,b).

state(ac,bc,b):-
write('Both are Clean').