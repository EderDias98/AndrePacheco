#ifndef  _BIBLIOTECA_
#define  BIBLIOTECA_
#define TAM_MAX  1000
#include <string.h>
#include <stdio.h>

typedef struct{
    char titulo[TAM_MAX];
    char autor[TAM_MAX];
    int ano;
    int disponibilidade;
    int idx;
    int rmv; // Para remover um livro da blibioteca
}tLivro;

typedef struct{
    tLivro biblioteca[TAM_MAX];
    int idx;
}tBiblioteca;

tBiblioteca CriarBiblioteca();
tBiblioteca AdicionarLivro();
tBiblioteca RemoverLivro(tBiblioteca bib, tLivro liv);
void ImprimirBiblioteca(tBiblioteca bib);
void BuscarImprimirLivro(tBiblioteca bib, tLivro liv);
#endif


