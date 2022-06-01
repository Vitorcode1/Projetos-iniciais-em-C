#import <stdio.h>
#import <stdlib.h>
#import <time.h>

void main (){
    srand(time(NULL));
    printf("BEM VINDO AO GERADOR DE NUMEROS PARA O EUROMILHOES!\n \n \n");
    int nu1 = rand() % 50 + 1;
    int nu2 = rand() % 50 + 1;
    int nu3 = rand() % 50 + 1;
    int nu4 = rand() % 50 + 1;
    int nu5 = rand() % 50 + 1;
    int est1=rand() % 12+1;
    int est2=rand() % 12+1;

    printf("NUMEROS GERADOS:\n %i %i %i %i %i \n \nESTRELAS:\n %i %i\n \n \n \n", nu1, nu2, nu3, nu4, nu5);

}
