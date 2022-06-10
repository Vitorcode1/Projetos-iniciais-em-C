#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 1
Faça um programa que mostre no ecrã os números naturais entre 0 (zero) e 100. Crie
três versões desse programa, cada uma usando uma estrutura de repetição
diferente.
*/


  main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("\t\t\t\t\t\tgerador de números naturais!\n\n");
    do{
       printf("\t\t\t|\t%i\t| \t", n);
       n++;
    }
	while(n<=100);
}
