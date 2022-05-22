#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
3. Faça um programa que leia um caracter e informe se o mesmo corresponde a um dígito de 0 a 9
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n1;
    char nome[50];
    printf("indique o seu nome:");
    gets(nome);
    printf("digite o seu melhor numero:");
    scanf("%i",&n1);

    if (n1>=0 && n1<=9){
        printf("%s o seu numero %i corresponde a um digito entre 0 a 9! Parabens", nome, n1);
    }
    else {
        printf("que pena o seu numero %i não corresponde a um digito entre 0 a 9 %s! tente outra vez", n1, nome);
    }







}
