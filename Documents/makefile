all: aluno

aluno: main.o aluno.o
	gcc -o aluno main.o aluno.o -lm
main.o: main.c aluno.h
	gcc -o main.o main.c -c -lm
aluno.o: aluno.c aluno.h
	gcc -o aluno.o aluno.c -c -lm
clean: 
	rm -rf *.o *~ aluno

run:
	./aluno