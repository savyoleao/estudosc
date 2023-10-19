#include <stdio.h>
#include <math.h>

int main()
{
    
   float T,V,D,litros;
   printf("insira o valor do tempo gasto: ");
   scanf("%f", &T);

   printf("insira o valor da velocidade media: ");
   scanf("%f", &V);

   D = T * V;

   litros = D / 12;

   printf("o valor dos litros usados e de %.2f", litros);


    return 0;
}
