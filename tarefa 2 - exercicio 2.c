#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 2
Pretende-se calcular a idade em anos em função do dia, mês e ano de nascimento e dia, mês e ano
atual.
Considere o seguinte:
- Em condições normais a idade é a diferença entre o ano atual e ano de nascimento. No entanto se o
mês atual for inferior ao mês de nascimento ou o mês atual igual ao mês de nascimento e o dia atual
inferior ao dia de nascimento a idade é o ano atual menos o ano de nascimento menos um.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int anoatual, anonasc, mesatual, diatual, mesnasc, dianasc;
    printf("indique o dia atual:");
    scanf("%i",&diatual);

    printf("indique o mês atual:");
    scanf("%i",&mesatual);

    printf("indique o ano atual:");
    scanf("%i",&anoatual);

    printf("indique o ano do seu nascimento:");
    scanf("%i",&anonasc);

    printf("indique o mês do seu nascimento:");
    scanf("%i",&mesnasc);

    printf("indique o dia do seu nascimento:");
    scanf("%i",&dianasc);


    if (mesatual<mesnasc || mesatual==anonasc && diatual<dianasc){
        printf("Sua idade atual é %i", (anoatual-anonasc-1));
    }
    else{
        printf("sua idade atual é %i",(anoatual-anonasc));

    }

    /*
    ano atual - nascimento
    mes atual<mes nascimento || mes atual==nascimento && dia atual<dia nascimento
    idade = ano atual-ano nascimento -1 */






}
