#include <stdio.h>
int main(){
    float salario, comissao, salariobr;
    int vendas;
    char nome [30];

printf("\n Informe o seu nome: ");
scanf("%s",&nome);
printf("\n Informe o salario: ");
scanf("%f",&salario);
printf("\n Informe a quantidade de vendas: ");
scanf("%i",&vendas);


comissao = 0.15 * vendas;
salariobr = comissao + salario;

printf("======================================");
printf("\n nome: %s",nome);
printf("\n salario: R$%0.2f",salario);
printf("\n comissao: R$%0.2f",comissao);
printf("\n salario bruto: R$%0.2f", salariobr);
printf("\n__________________________________");




return main();
}
