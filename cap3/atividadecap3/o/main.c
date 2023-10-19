#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float A, B, C, D, P, S;
    printf("insira o valor de A: ");
    scanf("%f", &A);

    printf("insira o valor de C: ");
    scanf("%f", &C);

    P = A * C;

    printf("o valor de P é: %.2f\n\n", P);

    printf("insira o valor de B: ");
    scanf("%f", &B);

    printf("insira o valor de D: ");
    scanf("%f", &D);

    S = B + D;

    printf("o valor de S é: %.2f", S);


    return 0;
}
