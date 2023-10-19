#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float D, CD, X;
    printf("insira o valor que possui em dolar: ");
    scanf("%f", &D);

    printf("insira o valor da cotacao do dolar: ");
    scanf("%f", &CD);

    X = D * CD;

    printf("o valor da conversao em real é: %.2f\n", X);



    return 0;
}
