#Primeiro makefile

all: banco

banco: main.o banco.o
	gcc -o banco main.o banco.o
main.o: main.c banco.h
	gcc -o main.o main.c -c
banco.o: banco.c banco.h
	gcc -o banco.o banco.c -c
clean: 
	rm -rf *.o *~ banco

run:
	./banco