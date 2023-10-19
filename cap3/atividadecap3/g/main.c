#include <stdio.h>
#include <math.h>

int main()
{
    
    float A, B, C, D;
    float S1, S2, S3, S4, S5, S6;
    float M1, M2, M3, M4, M5, M6;

    printf("insira o valor de A: ");
    scanf("%f", &A);

    printf("insira o valor de B: ");
    scanf("%f", &B);

    printf("insira o valor de C: ");
    scanf("%f", &C);

    printf("insira o valor de D: ");
    scanf("%f", &D);

    S1 = A + B;
    S2 = A + C;
    S3 = A + D;
    S4 = B + C;
    S5 = B + D;
    S6 = C + D;

    M1 = A * B;
    M2 = A * C;
    M3 = A * D;
    M4 = B * C;
    M5 = B * D;
    M6 = C * D;

    printf("\nO valor das somas equivale a: S1 = %.2f S2 = %.2f, S3 = %.2f, S4 = %.2f, S5 = %.2f, S6 = %.2f", S1, S2, S3, S4, S5, S6);

    printf("\n\nO valor das multiplicacoes equivale a: M1 = %.2f, M2 = %.2f, M3 = %.2f, M4 = %.2f, M5 = %.2f, M6 = %.2f\n\n", M1, M2, M3, M4, M5, M6);


    return 0;
}
