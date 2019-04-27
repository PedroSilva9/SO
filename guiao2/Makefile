CC=gcc
CFLAGS=-Wall -g
EX1=ex1.c
EXEC1=1.out
EX2=ex2.c
EXEC2=2.out
EX3=ex3.c
EXEC3=3.out
EX5=ex5.c
EXEC5=5.out

1: $(EX1)
	$(CC) $(CFLAGS) -o $(EXEC1) $(EX1)

2: $(EX2)
	$(CC) $(CFLAGS) -o $(EXEC2) $(EX2)

3: $(EX3)
	$(CC) $(CFLAGS) -o $(EXEC3) $(EX3)

5: $(EX5)
	$(CC) $(CFLAGS) -o $(EXEC5) $(EX5)

clean:
	rm -rf *.out
