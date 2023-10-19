#include <stdio.h>
#include <math.h>

int main()
{
    
    float V, TJ, T, P;
    printf("insira o valor inicial: ");
    scanf("%f", &V);

    printf("insira o valor da taxa de juros: ");
    scanf("%f", &TJ);

    printf("insira o valor do tempo: ");
    scanf("%f", &T);

    P = V + (V * (TJ/100) * T);

    printf("o valor da prestacao vale: %.2f", P);


    return 0;
}
