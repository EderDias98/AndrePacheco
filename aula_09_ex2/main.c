#include "cadastro.h"

int main(){
    char input[1];
    printf("Deseja cadastrar uma pessoa (Sim (S) ou Nao (N))?\n");
    scanf("%s", input);
    tPessoa ** pessoas = (tPessoa **) malloc(sizeof(tPessoa*));
    char nome[100];
    char data[12];
    int cpf,cont=0;
    while(strcmp(input,"S")){
        printf("Digite o nome: \n");

        scanf("%s", nome);
        printf("Digite a data de nascimento: \n");
        scanf("%s", data);
        printf("Digite o cpf: \n");
        scanf("%d", &cpf);
        pessoas[cont] = IniciarPessoa(nome, data, cpf);
        cont++;
        pessoas = realloc(pessoas, cont);
    }
}