#ifndef _TERRENO_
#define _TERRENO_
#include <stdio.h>
#include <math.h>

typedef struct{
    int rai;
}tCirculo;

typedef struct{
    int comp;
    int lar;
}tRetangulo;


typedef struct{
    int comp;
    int larg;
}tTriangulo;

float AreaC(tCirculo cir);
float AreaR(tRetangulo ret);
float AreaT(tTriangulo tri);
float PrecoC(tCirculo cir);
float PrecoR(tRetangulo ret);
float PrecoT(tTriangulo tri);
void LeEPrintValor();

#endif