#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Exercício 4
Faça um programa que gere e exiba, por extenso, números aleatórios entre 0 (zero)
e 15. O programa deve gerar os números até que o número 15 seja sorteado. O
programa deve mostrar também, no final, a quantidade de números gerados.
*/


  main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n=0;
    int count=0;

    do{
       count++;
       n=(rand()%15+1);
       switch(n)
        {
            case 1:
                    printf("\t\t\tUM\n");
                    break;
            case 2:
                    printf("\t\t\tDOIS\n");
                    break;
            case 3:
                    printf("\t\t\tTRÊS\n");
                    break;
            case 4:
                    printf("\t\t\tQUATRO\n");
                    break;
            case 5:
                    printf("\t\t\tCINCO\n");
                    break;
            case 6:
                    printf("\t\t\tSEIS\n");
                    break;
            case 7:
                    printf("\t\t\tSETE\n");
                    break;
            case 8:
                    printf("\t\t\tOITO\n");
                    break;
            case 9:
                    printf("\t\t\tNOVE\n");
                    break;
            case 10:
                    printf("\t\t\tDEZ\n");
                    break;
            case 11:
                    printf("\t\t\tONZE\n");
                    break;
            case 12:
                    printf("\t\t\tDOZE\n");
                    break;
            case 13:
                    printf("\t\t\tTREZE\n");
                    break;
            case 14:
                    printf("\t\t\tQUATORZE\n");
                    break;
            case 15:
                    printf("\t\t\tQUINZE\n");
                    break;
        }
    }
	while(n!=15);

	printf("\n quantidade de numeros gerados foi: %i \n", count);
}
