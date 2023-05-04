#include "cadastro.h"

struct pessoa{
    char *nome;
    char *data;
    int cpf;
};

tPessoa *IniciarPessoa(char *nome, char *data, int cpf){
    tPessoa *pessoa = (tPessoa *) malloc(sizeof(tPessoa));
    pessoa->nome = (char *) malloc(sizeof (strlen(nome)+1));
    strcpy(pessoa->nome, nome);
    pessoa->data = (char *) malloc(sizeof (strlen(data)+1));
    strcpy(pessoa->data, data);
    pessoa->cpf = cpf;

    return pessoa;
}

int EhPonteiroNull(void *ponteiro){
    if(ponteiro == NULL){
        printf("Nao tem como liberar ponteiro apontando para NULL");
        exit(-1);
    }
    return 0;
}

void LiberarPessoa(tPessoa *pessoa){
    
    if(!EhPonteiroNull(pessoa->nome))
        free(pessoa->nome);

    if(!EhPonteiroNull(pessoa->data))
        free(pessoa->data);

    if (!EhPonteiroNull(pessoa))
        free(pessoa);
}

void LiberarPessoas(tPessoa **pessoas, int n){
    for(int i=0; i<n ; i++){
        LiberarPessoa(pessoas[i]);
    }
    if(!EhPonteiroNull(pessoas))
        free(pessoas);

}