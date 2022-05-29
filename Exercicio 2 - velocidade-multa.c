#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/* Exercício 2
Elabore um programa que leia a velocidade máxima numa localidade e a velocidade com que o
condutor conduzia e calcule o valor da multa, considerando que são pagos 5 Euros por cada km/h que
estiver acima da velocidade permitida */

void main (){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int multa;
    int velomax=180 + rand() % 300;
    int velocal=170;

    multa=((velomax-velocal)*5);


    printf("A velocidade que o condutor conduzia era de: %ikm/h\n\n", velomax);
    printf("A velocidade maxima permitida na localidade eh de: %ikm/h\n\n", velocal);
    printf("O condutor tera que pagar uma multa de %i euros\n\n\n", multa);











}
