#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie um programa que escreva no ecrã os números de 1 a 100 e os respetivos quadrados. O resultado
do programa deve ser:
Saída:
1 1
2 4
3 9
4 16
5 …
...
100 10000
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int contador=1;
        while (contador<=100){
        printf("%i\t",contador);
        printf("%i\n",contador*contador);
        contador++;
        }

}
