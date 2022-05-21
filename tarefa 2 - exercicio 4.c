#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 4
Elaborar um programa que recebe 3 valores inteiros. Mostra o maior, o menor e a média.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;
    float media;

    printf("Indique o valor do primeiro numero:");
    scanf("%i",&n1);

    printf("Indique o valor do segundo numero:");
    scanf("%i",&n2);

    printf("Indique o valor do segundo numero:");
    scanf("%i",&n3);

    media=((n1+n2+n3)/3);

    if(n1>n2 && n1>n3){
        printf("O maior numero é %i que foi o primeiro valor que você digitou\n", n1);
        printf("a media dos valores é de: %.1f",media);
    }
    else if(n2>n1 && n2>n3){
        printf("O maior numero é %i que foi o segundo valor que você digitou \n", n2);
        printf("a media dos valores é de: %.1f \n",media);
    }
    else {
        printf("O maior numero é %i que foi o terceiro valor que você digitou \n", n3);
        printf("a media dos valores é de: %.1f \n",media);
    }

    if (n1<n2 && n1<n3){
        printf("O menor numero é %i que foi o primeiro digito que você digitou \n",n1);
    }
    else if (n2<n1 && n2<n3){
        printf("O menor numero é %i que foi o segundo digito que você digitou",n2);
    }
    else {
        printf("O menor numero é %i que foi o terceiro digito que você digitou",n3);
    }





}
