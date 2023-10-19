#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float D, T, V;
    printf("insira o valor da distancia: ");
    scanf("%f", &D);

    printf("insira o valor do tempo: ");
    scanf("%f", &T);

    V = (D * 1000) / (T * 60);

    printf("o valor da velocidade é de %.2f\n", V);


    return 0;
}
