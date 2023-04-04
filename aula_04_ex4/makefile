#Primeiro makefile

all: terreno

terreno: main.o terreno.o
	gcc -o terreno main.o terreno.o -lm
main.o: main.c terreno.h
	gcc -o main.o main.c -c -lm
terreno.o: terreno.c terreno.h
	gcc -o terreno.o terreno.c -c -lm
clean: 
	rm -rf *.o *~ terreno

run:
	./terreno