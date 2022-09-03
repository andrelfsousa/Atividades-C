#include <stdio.h>

int main(){
    int ano;

    printf("Verificar se ano bissexto \n");
    printf("\nDigite o ano: ");
    scanf("%i",&ano);


    if (((ano%4)==0)&&((ano%100)!=0))
    {
        printf("\n Ano bissexto \n ");
    }
    else if((ano%400)==0){
        printf("\n Ano bissexto \n  ");
    }
    else{
        printf("\n Ano nao bissexto \n");
    }
system("pause");
return(0);
}
