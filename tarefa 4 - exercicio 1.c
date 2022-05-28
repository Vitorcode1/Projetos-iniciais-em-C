#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
1. Pretende-se desenvolver, em C, um programa que calcule a hora e o minuto de
chegada de um determinado voo. É solicitado ao utilizador a hora de partida, minuto de
partida, hora da duração, minuto da duração e apresente a hora e minuto de chegada.
As horas de partida e duração devem ser validadas e os valores situam-se entre 0 e 23,
enquanto que os minutos de partida e duração estão compreendidos entre 0 e 59. O
programa deve ainda informar se o voo chega no próprio dia ou no dia seguinte.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    //hora de partida, minuto de partida, hora da duração, minuto da duração e apresente a hora e minuto de chegada.
    int hpartida, mpartida, hduracao, mduracao, hchegada, mchegada;
    printf(" 00   000   000   00   000   00   000  00000    00   \n");
    printf("0  0  0     0  0 0  0  0  0 0  0  0  0   0     0  0\n");
    printf("0000  000   000  0  0  000  0  0  000    0     0  0\n");
    printf("0  0  0     0 0  0  0  0    0  0  0 0    0     0  0\n");
    printf("0  0  000   0  0  00   0     00   0  0   0      00\n");
    printf("Indique o seu nome:");
    gets(nome);
    printf("%s Indique a sua hora de partida entre (0 e 23):", nome);
    scanf("%i", &hpartida);
    printf("%s indique o seu minuto de partida entre (0 e 59):", nome);
    scanf("%i",&mpartida);
    printf("%s Indique as horas de duração de voo entre (0 e 23):", nome);
    scanf("%i", &hduracao);
    printf("%s indique os minutos de duração de voo entre (0 e 59):",nome);
    scanf("%i",&mduracao);

    hchegada=hduracao+hpartida;
    mchegada=mduracao+mpartida;


if (hpartida<=23 && hduracao<=23 && mpartida<=59 && mduracao<=59){
    if (hchegada<=23 && mchegada<=59){
        printf("O horario da sua chegada foi %i horas e %i minutos e chegou no mesmo dia!", hchegada, mchegada);
    }

    else if(hchegada>23 && mchegada>59){
        printf("O horario de chegada %i horas e %i minutos e chegou no dia seguinte", hchegada-23, mchegada-60);
        }
    else if (hchegada>23 && mchegada<=59){
        printf("o seu horario de chegada foi %i horas e %i minutos, e seu voo chegou no mesmo dia seguinte", hchegada-24, mchegada);
        }
    else if (hchegada<=23 && mchegada>59){
        printf("o seu horario de chegada foi %i horas e %i minutos, e seu voo chegou no dia seguinte", hchegada+1, mchegada-60);
        }
}
else {
        printf("valores invalidos! repita o programa...");
        }

}

