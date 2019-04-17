CFLAGS=-Wall -g
EX1=ex1.c
EXEC1=1.out
EX2=ex2.c
EXEC2=2.out
EX3=ex3.c
EXEC3=3.out
EX5=ex5.c readline.c
EXEC5=5.out
EX6=ex6.c readline.c
EXEC6=6.out

1: $(EX1)
	gcc $(CFLAGS) -o $(EXEC1) $(EX1)

2: $(EX2)
	gcc $(CFLAGS) -o $(EXEC2) $(EX2)

3: $(EX3)
	gcc $(CFLAGS) -o $(EXEC3) $(EX3)

5: $(EX5)
	gcc $(CFLAGS) -o $(EXEC5) $(EX5)

6: $(EX6)
	gcc $(CFLAGS) -o $(EXEC6) $(EX6)

clean:
	rm -rf *.out
