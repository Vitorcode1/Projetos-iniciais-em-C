#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 2
Faça um programa que solicite ao utilizador um valor positivo. O programa deverá
repetir a solicitação caso o utilizador forneça um valor inválido (negativo). Quando
o utilizador fornecer um valor válido, mostre uma mensagem de texto confirmando
o valor digitado.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n=0;

    do{
       printf("Insira um valor positivo:  ");
       scanf("%i",&n);
    }
	while(n<0);
    printf("-------valor valido digitado: %i -------- \n", n);



}
