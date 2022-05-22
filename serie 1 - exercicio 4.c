#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 Faça um programa que leia duas datas, ambas no formato dd/mm/aaaa, e verifique e mostre qual
das datas é a mais recente.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    int d1, d2, m1, m2, ano1, ano2;
    printf("indique o seu nome:");
    gets(nome);
    printf("----------PRIMEIRA DATA------------\n");
    fflush(stdin);
    printf("%s indique o ano da sua primeira data:", nome);
    scanf("%i",&ano1);
    printf("%s indique o mês da sua primeira data:", nome);
    scanf("%i",&m1);
    printf("%s indique o dia da sua primeira data:", nome);
    scanf("%i",&d1);
    printf("----------SEGUNDA DATA------------\n");
    printf("%s indique o ano da sua segunda data:", nome);
    scanf("%i",&ano2);
    printf("%s indique o mês da sua segunda data:", nome);
    scanf("%i",&m2);
    printf("%s indique o dia da sua segunda data:\n \n", nome);
    scanf("%i",&d2);

    printf("\t \tPrimeira data inserida foi %i/%i/%i\n", d1, m1, ano1);
    printf("\t \tSegunda data inserida foi %i/%i/%i\n\n", d2, m2, ano2);

    if(d1>d2 && m1>m2 && ano1>ano2){
        printf("A sua primeira data %i/%i/%i é a mais recente", d1, m1, ano1);
    }
    else if (m1>m2 && ano1>ano2){
        printf("A sua primeira data %i/%i/%i é a mais recente", d1, m1, ano1);
    }
    else if (ano1>ano2){
        printf("A sua primeira data %i/%i/%i é a mais recente", d1, m1, ano1);
    }
    else if (d2>d1 && m2>m1 && ano2>ano1){
        printf("A sua segunda data %i/%i/%i é a mais recente", d2, m2, ano2);
    }
    else if (m2>m1 && ano2>ano1){
        printf("A sua segunda data %i/%i/%i é a mais recente", d2, m2, ano2);
    }
    else {
        printf("A sua segunda data %i/%i/%i é a mais recente", d2, m2, ano2);
    }




}
