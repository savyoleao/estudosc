#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float A, X, Y;
    printf("insira o valor da variavel A: ");
    scanf("%f", &A);

    X = A + 1;
    Y = A - 1;

    printf("o valor do sucessor de %.0f equivale a %.0f, e o seu antecessor equivale a %.0f", A,X,Y);
    
    return 0;
}
