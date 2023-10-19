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

    X = (A - B) * (A - B);

    printf("o valor de X é: %.2f\n\n", X);


    return 0;
}
