#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
2. Leia um inteiro entre 0 e 50 e verifique em que dezena esse número pertence.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n1;
    char nome[50];
    printf("indique o seu nome:");
    gets(nome);
    printf("Digite um numero entre 0 e 50: \t");
    scanf("%i", &n1);

    if (n1>=0 && n1<=10){
        printf("%s o numero %i que digitou pertence a primeira dezena entre os valores 0 e 10",nome, n1);
    }
    else if (n1>=11 && n1<=20){
        printf("%s o numero %i que digitou pertence a segunda dezena entre os valores 10 e 20",nome, n1);
    }
    else if (n1>=21 && n1<=30){
        printf("%s o numero %i que digitou pertence a terceira dezena entre os valores 20 e 30",nome, n1);
    }
    else if (n1>=31 && n1<=40){
        printf("%s o numero %i que digitou pertence a quarta dezena entre os valores 30 e 40", nome, n1);
    }
    else {
        printf("%s o numero %i que digitou pertence a quinta dezena entre os valores 40 e 50", nome, n1);
    }



}
