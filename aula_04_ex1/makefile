#Primeiro makefile

all: data

data: main.o data.o
	gcc -o data main.o data.o
main.o: main.c data.h
	gcc -o main.o main.c -c
data.o: data.c data.h
	gcc -o data.o data.c -c
clean: 
	rm -rf *.o *~ data

run:
	./data