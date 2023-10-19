#include <stdio.h>
#include <math.h>

int main()
{
    
    float C, L, H, V;
    printf("insira o valor do comprimento: ");
    scanf("%f", &C);

    printf("insira o valor da largura: ");
    scanf("%f", &L);

    printf("insira o valor da altura: ");
    scanf("%f", &H);

    V = C * L * H;

    printf("O valor do volume equivale a %.2f\n\n", V);


    return 0;
}
