#include "banco.h"
#define MAX_NOME 100
struct usuario{
    char nome[MAX_NOME];
    double cpf;
};

struct conta{
    tUsuario *usuario;
    int n_conta;
    double saldo;
};

tConta *CriarELerConta(){

    tUsuario *usuario = (tUsuario *) malloc(sizeof(tUsuario));
    tConta *conta= (tConta *) malloc(sizeof (tConta));
    conta->usuario  = usuario;
    scanf("%s", conta->usuario->nome);
    scanf("%lf", &conta->usuario->cpf);
    scanf("%d", &conta->n_conta);

    conta->saldo = 0;
    
    return conta;
}

void LiberarConta(tConta *conta){
    free(conta->usuario);
    free(conta);
}

void LiberarBanco(tConta **contas, int n){
    for(int i=0; i<n; i++){
        LiberarConta(contas[i]);
    }
    free(contas);
}

void ImprimirConta(tConta *conta){
    printf("Conta: %d\n", conta->n_conta);
    printf("Saldo: %.2lf\n", conta->saldo);
    printf("Nome: %s\n", conta->usuario->nome);
    printf("CPF: %.0lf\n", conta->usuario->cpf);
}
void ImprimirRelatorio(tConta **contas, int n){
    printf("===| Imprimindo Relatorio |=== \n");
    for(int i=0; i<n;i++){
        ImprimirConta(contas[i]);
        printf("\n");
    }
}
void Saque(tConta *conta, double valor){
    if(conta->saldo < valor){
        
    }else conta->saldo -= valor;
}
void Deposito(tConta *conta, double valor){
    conta->saldo += valor; 
}

void Transferencia(tConta **contas, int orig, int dest , double valor){
    if(contas[orig -1]->saldo < valor)
        return;
    contas[orig -1]->saldo -= valor;
    contas[dest -1]->saldo += valor;
}

tConta **CriarContas(tConta **contas, int n){
    contas = realloc(contas, n*(sizeof(tConta *)));
    return contas;
}

// ===| Imprimindo Relatorio |===
// Conta: 1
// Saldo: R$ 110.00
// Nome: Arthur
// CPF: 222444444
// Conta: 2
// Saldo: R$ 120.00
// Nome: Matheus
// CPF: 444555666