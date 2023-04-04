
#include "data.h"




tData LeData(){
    int d,m,a;
    scanf("%d/%d/%d", &d, &m, &a);
    tData data;
    data = IniciarData(d,m,a);
    return data;
}
tData IniciarData(int d, int m, int a ){
    tData data;
    data.ano = a;
    data.mes = m;
    data.dia = d;
    data.dia = VerificarDia(data);
    data.mes = VerificarMes(data);
    data.ano = VerificarAno(data);
    return data;
}
int EhBissexto(int ano){
    return !(ano%4) && (ano%100) ? 1 : !(ano%400) ? 1 : 0;
}
int VerificarDia(tData data){
    int mes = data.mes;
    if(data.dia<1)
            data.dia = 1;
    if(mes == 2){
        if(EhBissexto(data.ano)){
            if (data.dia >29)
                data.dia = 29;
        }else {
            if (data.dia >28)
                data.dia = 28;
        }
    }else if( mes == 11 || mes == 9 || mes == 6 || mes ==4 ){
        if(data.dia>30)
            data.dia = 30;
    }else {
        if(data.dia>31)
            data.dia = 31;
    }
    return data.dia;
}

int VerificarMes(tData data){
    if(data.mes>12)
        data.mes = 12;
    else if(data.mes<1)
        data.mes = 1;
    return data.mes;
}

int VerificarAno(tData data){
    if(data.ano<0)
        return 1;
}

int CalcularDiferencaDias(tData data1, tData data2){
    return abs(data2.dia - data1.dia);
}
int CalcularDiferencaMes(tData data1, tData data2){
    return abs(data2.mes - data1.mes);
}
int CalcularDiferencaAno(tData data1, tData data2){
    return abs(data2.ano - data1.ano);
}
tNome NomeDoMes(int mes){
    tNome nome;
    switch (mes)
    {
    case 1:
        strcpy(nome.mes, "Janeiro");
        break;
    case 2:
        strcpy(nome.mes, "Fevereiro");
        break;
    case 3:
        strcpy(nome.mes, "Março");
        break;
    case 4:
        strcpy(nome.mes, "Abril");
        break;
    case 5:
        strcpy(nome.mes, "Maio");
        break;
    case 6:
        strcpy(nome.mes, "Junho");
        break;
    case 7:
        strcpy(nome.mes, "Julho");
        break;
    case 8:
        strcpy(nome.mes, "Agosto");
        break;
    case 9:
        strcpy(nome.mes, "Setembro");
        break;
    case 10:
        strcpy(nome.mes, "Outubro");
        break;
    case 11:
        strcpy(nome.mes, "Novembro");
        break;
    case 12:
        strcpy(nome.mes, "Dezembro");
        break;
    default:
        break;
    }
}
int EhDataIgual(tData data1, tData data2){
    if(data1.dia == data2.dia && data1.mes==data2.mes && data1.ano == data2.ano)
        return 1;
    else return 0;
}
int DiasDoMes(tData data){
    int dias;
    int mes = data.mes;
    if(mes == 2){
        if(EhBissexto(data.ano)){
            dias =29;
        }else {
            dias =28;
        }
    }else if( mes == 11 || mes == 9 || mes == 6 || mes ==4 ){
        dias =30;
    }else {
        dias =31;
    }
    return dias;
}
tData IncrementarUmDiaData(tData data){
    if(data.dia==DiasDoMes(data)){
        if(data.mes ==12){
            data.dia =1;
            data.mes = 1;
            data.ano++;
        }else{
            data.dia =1;
            data.mes++;
        }
    }else data.dia++;
}       