#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float A,B,C,X;
    printf("insira o valor de A: ");
    scanf("%f", &A);

    printf("insira o valor de B: ");  
    scanf("%f", &B);

    printf("insira o valor de C: ");
    scanf("%f", &C);

    X = (A * A) + (B * B) + (C * C);

    printf("o valor de X equivale a: %.2f", X);

    return 0;
}
