#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float A, B, X;
    printf("insira o valor de A: ");
    scanf("%f", &A);

    printf("insira o valor de B: ");
    scanf("%f", &B);

    X = pow(A,B);

    printf("o valor de X é igual a %.2f", X);

    return 0;
}
