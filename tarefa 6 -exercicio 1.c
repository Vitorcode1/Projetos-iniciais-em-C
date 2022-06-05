#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 1
Crie um programa que vá solicitando ao utilizador números inteiros. O programa termina quando o
número inserido for o número “zero”. Como saída deve apresentar a soma dos números inseridos e
quantos números foram inseridos.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int numero=9999, contador=0, soma=0;
    while (numero!=0){
        printf("digite um numero\t");
        scanf("%i",&numero);
        soma+=numero;
        contador++;

    }
    printf("a quantidade de numeros inseridos foi: %i\n soma dos numeros inseridos foram %i", contador-1, soma);

}
