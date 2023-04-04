#include "matriz.h"

tMatriz IniciarMatriz(int l, int c){
    tMatriz mat;
    mat.l = l;
    mat.c = c;
    return mat;
}
void ImprimirMatriz(tMatriz mat){
    for(int i=0; i<mat.l; i++){
        for(int j=0; j<mat.c;j++){
            printf("%d ", mat.mat[i][j]);
        }
        printf("\n");
    }
}

tMatriz Somar(tMatriz mat1, tMatriz mat2){
    if(mat1.l== mat2.l && mat1.c== mat2.c){
        tMatriz mat;
        mat.l = mat1.l;
        mat.c = mat1.c;
        for(int i=0; i<mat.l; i++){
            for(int j=0; j<mat.c;j++){
             mat.mat[i][j] = mat1.mat[i][j]+ mat2.mat[i][j];
            }
        }
    return mat;
    }else{
        printf("Tentou Somar matrizes inssomáveis");
        exit(-1);
    }
}

tMatriz Subtrai(tMatriz mat1, tMatriz mat2){
    if(mat1.l== mat2.l && mat1.c== mat2.c){
        tMatriz mat;
        mat.l = mat1.l;
        mat.c = mat1.c;
        for(int i=0; i<mat.l; i++){
            for(int j=0; j<mat.c;j++){
             mat.mat[i][j] = mat1.mat[i][j] - mat2.mat[i][j];
            }
        }
        return mat;

    }else{
        printf("Tentou Somar matrizes erradas");
        exit(-1);
    }
}

tMatriz Multiplicar(tMatriz mat1, tMatriz mat2){
        if(mat1.c== mat2.l){
            tMatriz mat;
            mat.l = mat1.l;
            mat.c = mat2.c;
            int r = mat1.c;
            for(int i=0; i<mat.l; i++){
                for(int j=0; j<mat.c;j++){

                int valor=0;
                for(int k =0; k<r ; k++){
                    valor += mat1.mat[i][k]*mat2.mat[k][j];
                }
                mat.mat[i][j] = valor;
                }
            }
            return mat;
        }else {
            printf("Tentou Multipicar matrizes erradas");
            exit(-1);
        }
}

tMatriz MultiplicarEscalar(tMatriz mat, int c){
    tMatriz mat1;
    for(int i=0; i<mat.l; i++){
        for(int j=0; j<mat.c;j++){
             mat1.mat[i][j] = c*mat.mat[i][j];
        }
    } 
    return mat1;  
}

tMatriz Transposta(tMatriz mat){
    tMatriz mat1;
    for(int i=0; i<mat.l; i++){
        for(int j=0; j<mat.c;j++){
             mat1.mat[i][j] = mat.mat[j][i];
        }
    } 
    return mat1;  
}