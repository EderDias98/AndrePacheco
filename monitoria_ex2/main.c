#include "aluno.h"

int main(){
    int n;
    scanf("%d", &n);
    char nome[1000];
    int mat;
    float n1,n2,n3;
    tAluno **alunos = CriarVetorAluno(n);
    int i;
    for(i=0; i<n;i++){
        scanf("%s\n", nome);
        scanf("%d", &mat);
        scanf("%f %f %f",&n1,&n2,&n3);
        alunos[i] = IniciarAluno(nome,mat,n1,n2,n3);
    }

    OrdernarAlunos(alunos,n);
    printf("Alunos Aprovados:\n");
    for(i=0; i<n;i++){
        if(EhAprovado(alunos[i])){
            ImprimirAluno(alunos[i]);
        }
    }
    LiberarAlunos(alunos,n);
}