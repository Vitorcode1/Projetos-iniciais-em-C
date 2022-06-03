#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
uma empresa de aluguer de automóveis, que imprima o
montante devido por cada cliente. O montante devido depende dos quilómetros efetuados,
do número de dias que durou o aluguer e do tipo de carro alugado. Os Volkswagen custam
30€ por dia e 1,20€ por quilómetro. Os Toyota custam 35€ por dia e 1,50€ por quilómetro.
Os Mercedes custam 60€ por dia e 2,50€ por quilómetro. Os primeiros 75 quilómetros são
gratuitos, independentemente do tipo de carro alugado
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    float dias, km, marca;

    printf("indique o seu nome:");
    gets(nome);
    printf("%s indique quantos dias alugou o carro:", nome);
    scanf("%f", &dias);
    printf("%s indique quantos km percorreu durante o aluguel:", nome);
    scanf("%f", &km);
    printf("Digite 1, 2 ou 3 para cada marca\nVolkswagen=1\nToyota=2\nMercedes=3");
    printf("%s indique a marca do carro:", nome);
    scanf("%f", &marca);


if (km>75 && marca>=1 && marca<=3){
    if (marca==1){
            printf("%s o valor do aluguel do carro sera %.2f euros", nome, (((km-75)*1.20)+dias*30));
        }
        else if(marca==2){
            printf("%s o valor do aluguel do carro sera %.2f euros", nome, (((km-75)*1.50)+dias*35));
        }
        else {
            printf("%s o valor do aluguel do carro sera %.2f euros", nome, (((km-75)*2.50)+dias*60));
        }
    }
if (km<=75 && marca>=1 && marca<=3){
    if (marca==1){
        printf("%s o valor do aluguel do carro sera %.2f euros", nome, ((km*1.20)+dias*30));
        }
        else if (marca==2){
        printf("%s o valor do aluguel do carro sera %.2f euros", nome, ((km*1.50)+dias*35));
        }
        else {
        printf("%s o valor do aluguel do carro sera %.2f euros", nome, ((km*2.50)+dias*60));
        }
    }
}




