#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 1
Crie um algoritmo que mostre se um dado ano é bissexto ou comum.
Nota:
Um ano é bissexto quando é divisível por 4 e por 100 ou divisível por 400.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int bi;
    printf("indique o ano:");
    scanf("%i", &bi);

    if(bi%4==0 && bi%100==0 || bi%400==0){
        printf("O ano %i é bissexto", bi);
    }
    else {
        printf("o ano %i nao é um ano bissexto", bi);
    }




}
