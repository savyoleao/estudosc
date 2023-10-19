#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float R, A;

    printf("insira o valor do raio: ");
    scanf("%f", &R);

    A = 3.14159265 * (R * R);
    printf("o valor da área equivale a: %.2f", A);


    return 0;
}
