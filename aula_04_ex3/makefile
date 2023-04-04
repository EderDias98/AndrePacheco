#Primeiro makefile

all: matriz

matriz: main.o matriz.o
	gcc -o matriz main.o matriz.o
main.o: main.c matriz.h
	gcc -o main.o main.c -c
matriz.o: matriz.c matriz.h
	gcc -o matriz.o matriz.c -c
clean: 
	rm -rf *.o *~ matriz

run:
	./matriz