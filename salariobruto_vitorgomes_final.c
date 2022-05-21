#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa em C para calcular a contribuição para a Segurança Social, IRS e o sindicato a partir do salário bruto, que é um atributo de entrada.
• SS – 11,5%
• IRS - 25%
• Sindicato – 0,5 %
O programa deve imprimir o valor das contribuições e o valor do salário líquido.
*/

    main(){
            /* variaveis */
        float irs, ss, sc,salariob;
        char nome[30];
            printf ("\t \t \t \t---------BEM VINDO A CALCULADORA DO TRABALHADOR--------- \n \n");
            fflush (stdin);

            printf("\t \t \t \t digite o seu nome: ");
            fflush (stdin);
            gets (nome);


            printf ("\n\t Indique o seu salario bruto: \a");
            fflush (stdin);
            scanf ("%f",&salariob);
            printf ("\n");
            fflush (stdin);

                    /*
                    ------------------NOTA DE COMO FAZER O CALCULO---------------
                    formula: salario bruto*11.5%=valor seguranca social
                        formula: salario bruto*25%=valor IRS
                            formula: salario bruto*0.5%=sindicato */

            ss=(salariob*0.115);
            irs=(salariob*0.25);
            sc=(salariob*0.005);

            printf ("\t valor da seguranca social= %.2f EUROS \n \n",ss);
            printf (" \t valor do IRS= %.2f EUROS \n \n",irs);
            printf ("\t valor do sindicato= %.2f EUROS \n \n",sc);
            fflush (stdin);
            printf (" \t \t \t \t \t o salario liquido de %s sera de: %.2f EUROS \n \n",nome,(salariob-irs-ss-sc));

    /* para apresentar o salario liquido nos representamos da seguinte forma: (salario bruto - IRS - sindicato = salario liquido) */

}
