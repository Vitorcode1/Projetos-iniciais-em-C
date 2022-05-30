#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Desafio 3. Crie um programa em C que recebe uma nota (entre 0.0 e 10.0) e checa se você passou direto, ficou de recuperação ou foi reprovado na matéria.
A regra é a seguinte:
Nota 7 ou mais: passou direto
Entre 4 e 7: tem direito de fazer uma prova de recuperação
Abaixo de 4: reprovado direto
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    float n1, n2, n3, n4, media;
    printf("---------BEM VINDO A CALCULADORA DE NOTAS---------\n\n");
    printf("\t\t\tIndique o seu nome:\t");
    gets(nome);
    printf("%s Indique o valor da primeira nota do teste:", nome);
    scanf("%f",&n1);
    printf("%s Indique o valor da segunda nota do teste:", nome);
    scanf("%f",&n2);
    printf("Indique o valor da terceira nota do teste:", nome);
    scanf("%f",&n3);
    printf("Indique o valor da quarta nota do teste:", nome);
    scanf("%f",&n4);

    media=((n1+n2+n3+n4)/4);

if (media>=0 && media<=10){
     if (media>=7){
        printf("\n \n%s passou direto parabéns! com uma média de notas de %.1f pontos\n", nome, media);
     }
     else if(media>=4 && media<=7){
        printf("\n \n%s tem direito a fazer uma prova de recuperação! teve uma média de notas de %.1f pontos\n", nome, media);
     }
     else if (media<=4){
        printf("\n \n%s foi reprovado! teve uma média de notas de %.1f pontos\n", nome, media);
     }
    }
else {
    printf("%s inseriu dados invalidos!\n", nome);
}




}
