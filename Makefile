CFLAGS=-Wall -g
EXES=ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11 ex12 ex13 ex13lower ex14

all: $(EXES)

clean:
	rm -f $(EXES)