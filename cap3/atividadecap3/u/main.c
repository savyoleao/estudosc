#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float R, V;
    printf("insira o valor do raio: ");
    scanf("%f", &R);

    V = 4 * 3.14159 * (R * R * R)/3;

    printf("o valor do volume da esfera é de %.2f", V);


    return 0;
}
