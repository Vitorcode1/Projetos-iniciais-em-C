#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 5
Escreva um programa para determinar o tipo de bilhete que cada visitante de um parque de diversões deve
comprar. O tipo de bilhete é determinado em função da idade, de acordo com a seguinte tabela:
Idade Bilhete
<6 Isento de Pagamento
Entre 6 e 12 Bilhete de Criança
Entre 13 e 65 Bilhete Normal
>65 Bilhete de 3ª Idade
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;

    printf("indique a sua idade:");
    scanf("%i",&idade);

    if (idade<6){
        printf("o visitante com a idade %i é isento de pagamento",idade);
    }
    else if (idade>=6 && idade<=12){
        printf("o visitante com idade %i se enquadra como bilhete de criança", idade);
    }
    else if (idade>=13 && idade<=65){
        printf("o visitante com idade %i se enquadra como bilhete normal", idade);
    }
    else {
        printf("o visitante com idade %i se enquadra como bilhete 3º idade", idade);
    }




}


