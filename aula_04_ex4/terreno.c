#include "terreno.h"
#define PI 3.1415
#define HEC 10000
// lembrar que o preço é por hectare =10000

float AreaC(tCirculo cir){
    float area;
    area = pow(cir.rai, 2)*PI;
    return area;
}
float AreaR(tRetangulo ret){
    float area;
    area = ret.comp*ret.lar;
    return area;
}
float AreaT(tTriangulo tri){
    float area;
    area = tri.larg*(tri.comp)/2.0;
    return area;
}

float PrecoC(tCirculo cir){
    return 6000*AreaC(cir)/HEC;
}
float PrecoR(tRetangulo ret){
    return 8000*AreaR(ret)/HEC;
}
float PrecoT(tTriangulo tri){
    return 7000*AreaT(tri)/HEC;
}
void LeEPrintValor(){
    float n,multa;
    int cont=0;
    scanf("%f\n", &n);
    char terr;
    tCirculo cir;
    tRetangulo ret;
    tTriangulo tri;
    while(scanf("%c", &terr)){
        multa =0;
        if(terr=='C'){
            scanf(" %d\n", &cir.rai);
            multa = PrecoC(cir);
        }else if(terr=='R'){
            scanf(" %d %d\n", &ret.comp, &ret.lar);
            multa = PrecoR(ret);
        }else if(terr == 'T') {
            scanf(" %d %d\n", &tri.comp, &tri.larg);
            multa = PrecoT(tri);
        }
        printf("Preço: %.2f\n", multa);
        cont++;
        if(cont==n)
            break;
    }
}
