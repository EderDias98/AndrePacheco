#ifndef _MATRIZ_
#define _MATRIZ_
#define TAM_MAX 100
#include <stdio.h>

typedef struct{
    int mat[TAM_MAX][TAM_MAX];
    int l;
    int c;
}tMatriz;

tMatriz IniciarMatriz(int l, int c);

void ImprimirMatriz(tMatriz mat);
  

// // Crie um programa em C para manipulação de matrizes M x N. Tanto o tamanho e a quantidade de matrizes devem ser definidas pelo usuário.
//  Crie um TAD que contenha as seguintes funcionalidades:
// // Inicializar uma matriz
// // Imprimir uma matriz
// // Somar duas matrizes
// // Subtrair duas matrizes
// // Multiplicar duas matrizes
// // Multiplicação de uma matriz por um número escalar
// // Transposta de uma matriz


#endif