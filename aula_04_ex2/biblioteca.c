#include "biblioteca.h"

tBiblioteca CriarBiblioteca(){
    tBiblioteca bib;
    return bib;
}

tBiblioteca AdicionarLivro(tBiblioteca bib, tLivro liv){
    liv.idx = bib.idx;
    bib.biblioteca[liv.idx] = liv;
    return bib; 
}
tBiblioteca RemoverLivro(tBiblioteca bib, tLivro liv){
    bib.biblioteca[liv.idx].rmv = 1;
    return bib;
}
void ImprimirBiblioteca(tBiblioteca bib){
    for(int i=0; i<bib.idx;i++){
        tLivro liv = bib.biblioteca[i];
        if(!liv.rmv){
            printf("titulo: %s\nAutor: %s\nAno: %d\nDisponibilidade: %d",liv.titulo, liv.autor, liv.ano, liv.disponibilidade );
        }
    }
}

void BuscarImprimirLivro(tBiblioteca bib, tLivro liv){
    for(int i=0; i<bib.idx;i++){
        tLivro liv1 = bib.biblioteca[i];
        if(!strcmp(liv.titulo,liv1.titulo)){
              printf("titulo: %s\nAutor: %s\nAno: %d\nDisponibilidade: %d",liv.titulo, liv.autor, liv.ano, liv.disponibilidade );
        }
    }
}