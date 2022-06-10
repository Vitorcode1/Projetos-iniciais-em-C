#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
Faça um programa que permita ao utilizador fornecer diversos valores positivos. O
programa deverá parar de solicitar valores quando o utilizador fornecer um valor
negativo.
No final, o programa deverá informar a soma dos valores lidos.
Obs.: o valor negativo
(último valor entrado) não deve entrar na conta da soma
*/


  main(){
    setlocale(LC_ALL,"Portuguese");
    int n=0;
    int plus=0;

    do{
       printf("Digite um número positivo\t");
       scanf("%i",&n);
       if(n>0)
       {
           plus+= +n;
       }
    }
	while(n>0);

    printf("\t\t\tTotal da soma dos valores positivos inseridos foi:  %i\n\n\n", plus);
}

