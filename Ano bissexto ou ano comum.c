#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Um algoritmo que mostre se um dado ano é bissexto ou comum.
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
