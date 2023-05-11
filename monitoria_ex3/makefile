all: banco

banco: main.o banco.o
	gcc -o banco main.o banco.o -lm
main.o: main.c banco.h
	gcc -o main.o main.c -c -lm
banco.o: banco.c banco.h
	gcc -o banco.o banco.c -c -lm
clean: 
	rm -rf *.o *~ banco

run:
	./banco