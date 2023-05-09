#include <stdio.h>
#include <stdlib.h>

#define NUM_DISC 4
#define NUM_ALUN 3

int main() {
    int **notas = (int**)malloc(NUM_ALUN*sizeof(int*));

    for(int j=0; j<NUM_ALUN; j++) {
        notas[j] = (int*)malloc(NUM_DISC*sizeof(int));
        for(int i=0; i<NUM_DISC; i++){
            scanf("%d", &notas[j][i]);
            printf("%d ", notas[j][i]);
        }
        printf("\n");
    }
   
    for(int j=0; j<NUM_ALUN ;j++){
        free(notas[j]);
    }

    free(notas);

    return 0;
}
