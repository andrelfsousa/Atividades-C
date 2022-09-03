#include <stdio.h>

int main (){
    float peso, altura,calc;



printf("\n Informe a altura: ");
scanf("%f",&altura);

printf("\n Informe o peso:  ");
scanf("%f", &peso);

calc = peso/(altura * altura);

printf("\n O seu IMC e igual a %0.2f \n",calc);

system("pause");
return(0);


}
