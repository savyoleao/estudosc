#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float R, CD, X;
    printf("insira o valor em real: ");
    scanf("%f", &R);

    printf("insira o valor da cotacao do dolar: ");
    scanf("%f", &CD);

    X = R / CD;

    printf("o valor em dolar é: %.2f\n", X);
    


    return 0;
}
