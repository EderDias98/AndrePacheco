#ifndef ALUNO_H
#define ALUNO_H
#include "stdio.h"
#include <stdlib.h>
#include <string.h>
typedef struct aluno tAluno;
tAluno *IniciarAluno(char *nome, int mat, float n1, float n2, float n3 );
tAluno **CriarVetorAluno(int n);
void LiberarAluno(tAluno *aluno);
void LiberarAlunos(tAluno ** alunos, int n);
void ImprimirAluno(tAluno *aluno);
void OrdernarAlunos(tAluno ** alunos, int n);
void Troca(tAluno **alunos, int i, int j);
int EhAprovado(tAluno *aluno);


#endif