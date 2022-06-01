#include <stdio.h>
#include <locale.h>



/*Crie um progama que organize os dados
em uma tabela conforme o exemplo a seguir.
Os dados das células em amarelo deve ser
informados através de atribuições dentro do programa.
*/



void main(){
setlocale(LC_ALL, "Portuguese");




float p1, p2, p3, q1, q2, q3, pt1, pt2, pt3;



printf("Digite o preço da BANANA: ");
scanf("%f", &p1);
printf("Digite o preço da UVA: ");
scanf("%f", &p2);
printf("Digite o preço da PESSEGO: ");
scanf("%f", &p3);
printf("Digite a quantidade de BANANA: ");
scanf("%f", &q1);
printf("Digite a quantidade de UVA: ");
scanf("%f", &q2);
printf("Digite a quantidade de PESSEGO: ");
scanf("%f", &q3);



pt1 = p1 * q1;
pt2 = p2 * q2;
pt3 = p3 * q3;




printf("\n-----------------------------------------------\n");
printf("Produto\tPreço Unitário\tQuantidade\tPreço Total\n");
printf("Banana\tR$%-10.2f\t%10.2f\tR$%-10.2f", p1, q1, pt1);
printf("\nUva\tR$%-10.2f\t%10.2f\tR$%-10.2f", p2, q2, pt2);
printf("\nPessego\tR$%-10.2f\t%10.2f\tR$%-10.2f", p3, q3, pt3);
printf("\n-----------------------------------------------\n\n");



}
