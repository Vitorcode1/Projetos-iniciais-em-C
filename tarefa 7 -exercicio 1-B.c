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

    printf("\t\t\t\t\t\tgerador de números naturais!\n\n");
	for(int n=0; n<=100;n++)
        {
       printf("\t\t\t|\t%i\t| \t", n);
    }
}
