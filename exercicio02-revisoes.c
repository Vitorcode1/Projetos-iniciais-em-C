#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
A importância de 10.000 € será dividida entre três vencedores de um concurso.
Sendo que da quantia total:
- O primeiro vencedor receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante.
Calcule e imprima a quantia ganha por cada um dos vencedores.
*/

void main () {
    setlocale(LC_ALL,"Portuguese");
    float venc1, venc2, venc3;

    printf("Premio de 10000 euros - Concurso\n");

    venc1=10000*0.46;
    venc2=10000*0.32;
    venc3=10000*0.22;

    printf("O primeiro vencedor receberá o prémio de: %.2f euros\n", venc1);
    printf("O segundo vencedor receberá o prémio de: %.2f euros\n", venc2);
    printf("O terceiro vencedor receberá o prémio de: %.2f euros\n", venc3);



}
