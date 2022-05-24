#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Uma empresa contrata um colaborador a 100 € por dia. Crie um programa que
solicite o número de dias trabalhados e imprima a quantia líquida que deverá ser
paga, sabendo-se que são descontados 8% para pagamento de impostos e taxas
devidas.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    float dias, liq;
    printf("indique os dias trabalhados:");
    scanf("%f",&dias);

   liq=(100*dias);

   printf("o salário líquido %.2f",(liq-(liq*0.08)));




}
