#include "aluno.h"

struct aluno{
    char *nome;
    int mat;
    float n1,n2,n3;
};

tAluno *IniciarAluno(char *nome, int mat, float n1, float n2, float n3 ){
    tAluno *aluno = malloc(sizeof(tAluno));
     aluno->nome = malloc(sizeof(char)*strlen(nome)+ 1);
     strcpy(aluno->nome, nome);
     aluno->mat =mat;
     aluno->n1 =n1;
     aluno->n2 =n2;
     aluno->n3 =n3;
     return aluno;
     // lembrar dois free , primeiro free nome
}
tAluno **CriarVetorAluno(int n){
    tAluno ** alunos = malloc(sizeof(tAluno *)*n);
    return alunos;
}
void LiberarAluno(tAluno *aluno){
    free(aluno->nome);
    free(aluno);
}
void LiberarAlunos(tAluno ** alunos, int n){
    for(int i=0; i<n;i++){
        LiberarAluno(alunos[i]);
    }
    free(alunos);
}
void ImprimirAluno(tAluno *aluno){
    printf("%s\n", aluno->nome);
}

int EhAprovado(tAluno *aluno){
    float media;
    media = (aluno->n1 + aluno->n2 + aluno->n3)/3.0;
    return ( media >=7 ? 1 : 0);
}
void Troca(tAluno **alunos, int i, int j){
    tAluno * temp = alunos[i];
    alunos[i] = alunos[j];
    alunos[j] = temp;
}
void OrdernarAlunos(tAluno ** alunos, int n){

    for(int i =0; i<n;i++){
        for(int j=0;j<n-1;j++){
            if(alunos[j]->mat > alunos[j+1]->mat){
                Troca(alunos, i, j);
            }
        }
    }
}