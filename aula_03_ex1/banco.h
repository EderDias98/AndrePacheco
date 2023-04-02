#ifndef _BANCO_H
#define _BANCO_H

typedef struct Cliente tCliente;


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

#endif