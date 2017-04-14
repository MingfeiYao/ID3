
CC = g++
MAIN = main
UL = -c

all: 	run

run:	compile
	./main

compile: tree.o main.o
	$(CC) -o $(MAIN) tree.o main.o

tree.o: tree.cpp tree.h
	$(CC) $(UL)  tree.cpp

main.o: main.cpp main.h
	$(CC) $(UL) main.cpp

.PHONY:	clean

clean:	
	rm *.o main
