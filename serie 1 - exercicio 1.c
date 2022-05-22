#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor salário
terão um aumento proporcionalmente maior do que os funcionários com um salário maior, e
conforme o tempo de serviço na empresa, cada funcionário irá receber um bónus adicional de salário.
Faça um programa que leia:
-> o valor do salário atual do funcionário;
-> o tempo de serviço deste funcionário na empresa (quantidade de anos de trabalho na empresa).
Use a tabela para calcular o salário reajustado deste funcionário e mostre o valor do salário final
reajustado, ou uma mensagem caso o funcionário não tenho direito a aumento.
*/


void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    float salarioatual, temposervico;

    printf("Indique o seu nome:");
    gets(nome);

    printf("%s indique o valor do seu salário atual:", nome);
    scanf("%f",&salarioatual);

    printf("%s indique o seu tempo de serviço na empresa (anos):", nome);
    scanf("%f",&temposervico);

    if(salarioatual<=500 && temposervico<1){
    printf("O funcionario %s tem direito a ter um reajuste de 25%% do salario que ficara em %.2f Euros sem direito a bonus", nome, salarioatual+(salarioatual*0.25));
    }
    else if(salarioatual<=1000 &&temposervico>=1 && temposervico<=3){
        printf("O funcionario %s tem direito a ter um reajuste de 20%% do salario que ficara em %.2f Euros\n e devido ao tempo de serviço tem direito a bonus de valor de 100 Euros ficando um total de %.2f Euros", nome, salarioatual+(salarioatual*0.2), salarioatual+(salarioatual*0.2)+100);
    }
    else if (salarioatual<=1500 &&temposervico>=4 && temposervico<=6){
        printf("O funcionario %s tem direito a ter um reajuste de 15%% do salario que ficara em %.2f Euros\n e devido ao tempo de serviço tem direito a bonus de valor de 200 Euros ficando um total de %.2f Euros", nome, salarioatual+(salarioatual*0.15), salarioatual+(salarioatual*0.15)+200);
    }
    else if (salarioatual<=2000 &&temposervico>=7 && temposervico<=10){
        printf("O funcionario %s tem direito a ter um reajuste de 15%% do salario que ficara em %.2f Euros\n e devido ao tempo de serviço tem direito a bonus de valor de 200 Euros ficando um total de %.2f Euros", nome, salarioatual+(salarioatual*0.1), salarioatual+(salarioatual*0.1)+300);
    }
    else {
        printf("O funcionario %s não tem direito a ter um reajuste do salario.\n E devido ao tempo de serviço tem direito a bonus de valor de 500 Euros ficando um total de %.2f Euros", nome, salarioatual+500);
    }




/*
Salário Atual	 Reajuste		Tempo de Serviço	 Bónus
Até 500,00	    25% 		    Abaixo de 1 ano 	Sem Bónus
Até 1000,00	    20%		        De 1 a 3 anos 	    100,00
Até 1500,00 	15% 		    De 4 a 6 anos 	    200,00
Até 2000,00 	10% 		    De 7 a 10 anos 	    300,00
Acima de 2000   Sem reajuste 	Mais de 10 anos 	500,00
*/











}
