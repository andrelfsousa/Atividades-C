#include <stdio.h>

int main()
{
    float nota1,nota2,media;

    printf("\n____Calculadora media____\n");
    printf("\n Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("\n Digite a segunda nota: ");
    scanf("%f",&nota2);


    media = 0.60 * nota1 + 0.40 * nota2/1;
    printf("\n--------------------");
    printf("\nMedia= %0.2f",media);
    printf("\n--------------------");

    if(media <5)
        {
        printf("\n Reprovado!!!\n");

        }
    else{
        printf("\n Aprovado!!!\n");

        }

    return main();
}








