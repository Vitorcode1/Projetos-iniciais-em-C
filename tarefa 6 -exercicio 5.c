#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Elabore um programa que apresente o maior e menor de 5 números lidos.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int contador=0, n1, maior, menor;

    while (contador<5){
    printf("digite um numero:");
    scanf("%i",&n1);

    if (contador==0){
        maior=n1;
        menor=n1;
    }
    else if (n1>maior){
        maior=n1;
    }
    else if (n1<menor){
        menor=n1;
    }
    contador++;
}
    printf("maior numero:%i \n menor numero:%i", maior, menor);





}
