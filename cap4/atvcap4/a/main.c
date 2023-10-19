#include <stdio.h>

int main()
{
    int A, B, X;

    printf("insira o valor de A: ");
    scanf("%d", &A);

    printf("insira o valor de B: ");
    scanf("%d", &B);

    if (A > B)
    {
        X = A - B;
    } else {
        X = B - A;
    }

    printf("o valor da diferenca do numero maior pelo numero menor equivale a: %d\n\n", X);
    
    return 0;
}
