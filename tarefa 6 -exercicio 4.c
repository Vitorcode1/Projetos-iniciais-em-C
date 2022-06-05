#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Elabore um programa que permite efetuar operações de crédito ou débito numa conta bancária. O
programa deverá perguntar qual o saldo inicial da conta e qual a operação que o utilizador pretende
efetuar (débito ou crédito), assim como o montante a debitar, atualizando o saldo da conta sempre
que se efetue uma operação. No final deverá devolver o saldo da conta.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    float saldo, debito, credito;
    char option;
    printf("Indique o saldo inicial da conta bancaria:");
    scanf("%f",&saldo);
    fflush(stdin);

    printf("\n\t\t\tOpção:\t|\tMenu:\t\n");
    printf("\t\t\tD\t|\tDebito\n\t\t\tC\t|\tCredito\n\t\t\tS\t|\tSair\n\n");
    scanf("%c",&option);

    while (option=='D' || option=='d' || option=='C' || option=='c'){
        switch(option){
            case 'D':
            case 'd':
                printf("\tDigite o montante a debitar a conta:");
                scanf("%f", &debito);
                saldo-=debito;
                printf("O seu saldo atual é %.2f euros:\n", saldo);
                break;
            case 'C':
            case 'c':
            printf("\tDigite o montante a creditar a conta:");
                scanf("%f", &credito);
                saldo+=credito;
                printf("O seu saldo atual é %.2f euros:\n", saldo);
                break;
        }
    fflush(stdin);
    printf("\t\t\tD\t|\tDebito\n\t\t\tC\t|\tCredito\n\t\t\tS\t|\tSair\n\n");
    scanf("%c",&option);



    }
    if (option=='s' || option=='S'){
        printf("O saldo da sua conta é %2.f euros", saldo);
    }











}
