#include "banco.h"
#define TAM_MAX 100

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Cliente{
    char nome[TAM_MAX];
    int cpf;
    struct Data data;
    int cep;
    int celular;
    char email[TAM_MAX];
    float saldo;
    int idx;
    int cadastrado;
};


// Cadastra o cliente  na Agencia
// @*cliente a listas de clientes da Agencia
// @cliente o cliente da Agencia
// return void
void CadastrarCliente(tCliente *Cliente, tCliente cliente);
// Saca o dinheiro da conta do Cliente 
// @*cliente a listas de clientes da Agencia
// @cliente o cliente da Agencia
// return void
void Saque(tCliente *clientes, tCliente cliente);
// Deposita o dinheiro na conta do Cliente 
// @*cliente a listas de clientes da Agencia
// @cliente o cliente da Agencia
// return void
void Deposito(tCliente *clientes, tCliente cliente);
// Remove cliente da Agencia
// @*cliente a listas de clientes da Agencia
// @cliente o cliente da Agencia
// return void
void RemoverCliente(tCliente *clientes, tCliente cliente);