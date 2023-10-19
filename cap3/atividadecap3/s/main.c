#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float A, B, S, SU, M, D;
    printf("insira o valor de A: ");
    scanf("%f", &A);

    printf("insira o valor de B: ");
    scanf("%f", &B);

    S = A + B;
    SU = A - B;
    M = A * B;
    D = A / D;

    printf("o valor da soma é de %.0f, da subtracao é de %.0f, da multiplicacao é de %.0f, e da divisao é de %.0f", S, SU, M, D);


    return 0;
}
