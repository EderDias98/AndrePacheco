#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float nota, media=0;
    float *notas = (float *) malloc(sizeof(float));
    int cont =0;
    printf("Digite as notas dos Alunos de sua classe:\n");
    while(1){

        scanf("%f", &nota);

        if(nota<0){
            break;
        }
        cont++;
        notas= realloc(notas, cont);
        notas[cont-1] = nota;
        media += nota;
    }
    media /= cont;
    float varianca=0;
    float desvio_p=0;
    for( int i=0; i<cont;i++){
        // printf("%.2f ", notas[i]);
        varianca += pow(notas[i] - media, 2); 
    }
    varianca /= cont;
    desvio_p = sqrt(varianca);
    printf("A média das notas é: %.3f\n", media);
    printf("O desvio Padrão das Notas é : %.3f\n", desvio_p);

    free(notas);
    return 0;
}