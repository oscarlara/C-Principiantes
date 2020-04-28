
#include <stdio.h>
#include <math.h>

int main ()
{
  int i;
  double raiz, acumulado;
  acumulado = 0;
  printf("\nNumero Raiz Acumulado \n\n");
  for (i=1; i<=10; i++) {
    raiz = sqrt(i);
    acumulado+= raiz;
    printf("%2d %7.3f %7.3f\n", i, raiz, acumulado);
  }
  return 0;
} 
