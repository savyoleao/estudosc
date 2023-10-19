#include <stdio.h>
#include <math.h>

int main()
{
    
    float A, B, C;
    printf("insira o valor de A: ");
    scanf("%f", &A);

    printf("insira o valor de B: ");
    scanf("%f", &B);

    C = A;
    A = B;
    B = C;

    printf("o valor de A vale %.2f e o valor de B vale %.2f", A, B);


    return 0;
}
