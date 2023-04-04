#ifndef _DATAH_
#define _DATAH_
#define TAM_MAX_NOME 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char mes[TAM_MAX_NOME];
}tNome;

typedef struct{
    int dia;
    int mes;
    int ano;
    tNome nome;   
}tData;

int EhBissexto(int ano);
int VerificarDia(tData data);
int VerificarMes(tData data);
int VerificarAno(tData data);
tData LeData();
tData IniciarData(int d, int m, int a );
int CalcularDiferencaDias(tData data1, tData data2);
int CalcularDiferencaMes(tData data1, tData data2);
int CalcularDiferencaAno(tData data1, tData data2);
int EhDataIgual(tData dat1, tData data2);
tNome NomeDoMes(int mes);
int DiasDoMes(tData data);
tData IncrementarUmDiaData(tData data);






#endif