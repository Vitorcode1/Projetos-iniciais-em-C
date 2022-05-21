#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Sabendo que o IMC (Índice de massa corporal) é obtido em função da altura e do peso
(imc=peso/(altura*altura)). Crie um algoritmo que leia os valores do peso e da altura, apresente o
valor do imc e a respetiva situação sabendo que:
IMC Situação
Abaixo de 19.99 Abaixo do peso
Entre 20 e 24.99 Peso Normal
Entre 25 e 29.99 Acima do Peso
Entre 30 e 35 Obesidade
Acima de 35 Grande Obesidade
*/


void main ()
{
    setlocale(LC_ALL,"Portuguese");
    float altura, peso, imc;

    printf("Indique o seu peso em KG:");
    scanf("%f",&peso);
    printf("indique a sua altura em Metros:");
    scanf("%f",&altura);

    imc=(peso/(altura*altura));

    if (imc<19.99){
        printf("o seu IMC é de %.2f e sr/sra se encontra abaixo do peso", imc);
    }
    else if (imc>=20 && imc<24.99){
        printf("o seu IMC é de %.2f e sr/sra se encontra no peso normal", imc);
    }
    else if (imc>=25 && imc<29.99){
        printf("o seu IMC é de %.2f e sr/sra se encontra acima do peso", imc);
    }
    else if (imc>=30 && imc<35){
        printf("o seu IMC é de %.2f e sr/sra se encontra na obesidade", imc);
    }
    else if (imc>=35){
        printf("o seu IMC é de %.2f e sr/sra se encontra no estado de grande obesidade", imc);
    }


}
