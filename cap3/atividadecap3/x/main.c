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

    X = pow(A,1/B);

    printf("o valor de X equivale a %.2f\n", X);
    
    return 0;
}
