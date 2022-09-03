#include <stdio.h>

int main(){
    float gasolina,alcool,val;

printf("\n Digite o valor da gasolina: ");
scanf("%f",&gasolina);
printf("\n Digite o valor do alcool: ");
scanf("%f",&alcool);

val = gasolina / alcool;

if (val < 0.7){
    printf("\n Melhor utilizar alcool\n");
}else {
    printf("\n Melhor utilizar gasolina\n");
}

system("pause");
return(0);
}
