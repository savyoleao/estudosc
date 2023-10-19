#include <stdio.h>
#include <math.h>

int main()
{
    
  float R,H,V;
  printf("Digite o valor do raio: ");
  scanf("%f", &R);

  printf("Digite o valor da altura: ");
  scanf("%f", &H);

  V = 3.14159 * R * R * H;

  printf("O valor do volume equivale a: %.2f", V);

    return 0;
}
