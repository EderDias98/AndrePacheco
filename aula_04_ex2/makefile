#Primeiro makefile

all: biblioteca

biblioteca: main.o biblioteca.o
	gcc -o biblioteca main.o biblioteca.o
main.o: main.c biblioteca.h
	gcc -o main.o main.c -c
biblioteca.o: biblioteca.c biblioteca.h
	gcc -o biblioteca.o biblioteca.c -c
clean: 
	rm -rf *.o *~ biblioteca

run:
	./biblioteca