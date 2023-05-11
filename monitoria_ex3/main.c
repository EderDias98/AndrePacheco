#include "banco.h"

int main(){

    int opcao;
    scanf("%d", &opcao);
    tConta **contas=(tConta **) malloc(sizeof (tConta *));
    int cont =0,i1,i2;
    double valor;
    while(opcao){
        
        switch (opcao)
        {
        case 1:
            scanf("%d %lf", &i1, &valor);
            Saque(contas[i1-1], valor);
            break;
        case 2:
            scanf("%d %lf", &i1, &valor);
            Deposito(contas[i1-1], valor);
            break;
        case 3:
            scanf("%d %d %lf", &i1, &i2, &valor);
            Transferencia(contas, i1,i2,valor);
            break;
        case 4:
            cont++;
            contas = CriarContas(contas, cont);
            contas[cont-1] = CriarELerConta();
            break;
        case 5:
            ImprimirRelatorio(contas, cont);
            break;
        default:
            break;
        }
        
        
    
        scanf("%d", &opcao);
    }
    

    return 0;
    
}
// 0 - sair; 1 - saque; 2 - depósito; 3 - transferência; 4 - cadastro
// de usuário e conta; 5 - relatório).
// Cada uma das operações funcionará da seguinte forma:
// ● sair: o programa é finalizado;
// ● saque: é exibido na tela uma lista de todas as contas cadastradas juntamente
// com o nome do usuário. Deve-se escolher o número da conta que será feito o
// saque e o valor do saque (caso a conta não possua aquele valor, imprimir
// “Saldo Insuficiente!'), e voltar para a parte de escolher as operações;
// ● depósito: é exibido na tela uma lista de todas as contas cadastradas
// juntamente com o nome do usuário. Deve-se escolher o número da conta que
// será feito o depósito e o valor do depósito, após isso o programa deve
// retornar para a parte de escolher as operações; transferência: é exibido na
// tela uma lista de todas as contas cadastradas juntamente com o nome do
// usuário. Deve-se escolher o número da conta de origem que sairá o dinheiro,
// o número da conta de destino, e o valor da transferência (não permitir saques
// maiores que o saldo), e voltar para a parte de escolher as operações (o valor
// da transferência deve ser maior que zero);
// ● cadastro de usuário e conta: Deve-se ser digitado as informações do
// usuário e depois da conta, nome, CPF e número da conta (único), e voltar
// para a parte de escolher as operações;
// ● relatório: é exibido na tela uma lista de todas as contas cadastradas
// juntamente com o nome do usuário. Caso o seja digitado 0 (zero) o programa
// deve voltar para a parte de escolher as operações.