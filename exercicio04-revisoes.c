#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie um programa para calcular a área de um triângulo retângulo. O tamanho da
base e altura do triângulo devem ser informados pelo utilizador.
A=(base*altura)/2
*/


void main (){

    setlocale(LC_ALL,"Portuguese");
    float base, altura, area;

    printf("indique a base do triângulo retângulo:");
    scanf("%f",&base);

    printf("indique a altura do triângulo retângulo:");
    scanf("%f",&altura);

    area=(base*altura)/2;

    printf("a área do triângulo retângulo e de: %.2f",area);


}
