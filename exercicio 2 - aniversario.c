#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#import <time.h>

/*
5. Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa
 e diga a faixa etaria
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    int dia, mes, ano;
    printf("indique o seu nome:");
    gets(nome);
    printf("%s indique o dia, mes e ano de nascimento: [21 8 2021]", nome);
    scanf("%i %i %i", &dia, &mes, &ano);

    int anoatual=2022;



if (dia>=1 && dia<=31 && mes>=1 && mes<=12 && ano>=1900 && ano<=2021){
    if (ano>=1900 && ano<=1940){
        printf("%s nasceu na data %i/%i/%i e tem %i anos de idade [Dinossauro]", nome, dia, mes, ano, anoatual-ano);
    }
    else if (ano>=1941 && ano<=1980){
        printf("%s %s nasceu na data %i/%i/%i e tem %i anos de idade [Idoso] ", nome, dia, mes, ano, anoatual-ano);
    }
    else if (ano>=1981 && ano<=2012){
        printf("%s nasceu na data %i/%i/%i e tem %i anos de idade [Adulto]", nome, dia, mes, ano, anoatual-ano);
    }
    else if (ano>=2013 && ano<=2022){
        printf("%s nasceu na data %i/%i/%i e tem %i anos de idade [Criança]", nome, dia, mes, ano, anoatual-ano);
    }
}
else {
    printf("dados invalidos!");
}


}
