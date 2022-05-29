#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
4. Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na linguagem C que pergunte
a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    int age;
    printf("Indique o seu nome:");
    gets(nome);
    printf("%s Indique a sua idade:", nome);
    scanf("%i",&age);

    if(age>=18 && age<=67){
        printf("%s com a sua idade de %i já é possivel doar sangue!", nome, age);
    }
    else if (age<18) {
        printf("%s devido sua idade de %i ser inferior a de 18 anos ainda nao é possivel doar sangue!", nome, age);
        }
    else {
    printf("%s devido sua idade de %i ser superior a de 67 anos nao é possivel doar sangue!", nome, age);
    }





}
