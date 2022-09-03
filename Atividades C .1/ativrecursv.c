#include <stdio.h>
#include <conio.h>
double fatorial(int n);
int main(void)
{
  int numero;
  double fator;

  printf("Digite o numero: ");
  scanf("%d",&numero);


  fator = fatorial(numero);

  printf("Fatorial de %d = %.0lf",numero,fator);

  getch();
  return 0;
}

double fatorial(int n)
{
  double vfat;

  if ( n <= 1 )

    return (1);
  else
  {

    vfat = n * fatorial(n - 1);
    return (vfat);
  }
}
