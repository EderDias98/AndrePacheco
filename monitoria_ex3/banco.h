#ifndef BANCO_H
#define BANCO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct usuario tUsuario;
typedef struct conta tConta;

tConta *CriarELerConta();

tConta **CriarContas(tConta **contas, int n);  

void LiberarConta(tConta *conta);
void LiberarBanco(tConta **contas, int n);
void ImprimirConta(tConta *conta);
void ImprimirRelatorio(tConta **contas, int n);

void Saque(tConta *conta, double valor);

void Deposito(tConta *conta, double valor);


void Transferencia(tConta **contas, int orig, int dest , double valor);
 
#endif
