#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Faça um programa que gere e mostre números aleatórios entre 0 (zero) e 15. O
programa deve gerar números até que o número 0 (zero) seja sorteado. */


void main (){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n=0;

    do{
       n=(rand()%15);
       printf("\t\t---- O seu numero sorteado foi: %i ---- \n\n",n);
    }
	while(n!=0);
}

