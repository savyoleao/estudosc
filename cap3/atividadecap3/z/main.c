#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float A,B,X;
    printf("insira o valor da variavel A: ");
    scanf("%f", &A);

    printf("insira o valor da variavel B: ");
    scanf("%f", &B);

    X = pow(A/B,2);

    printf("o valor do quadrado da divisao de A por B equivale a %.2f\n", X);
    
    return 0;
}
