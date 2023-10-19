#include <stdio.h>
#include <math.h>

int main()
{
    
    float C, F;

    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &F);

    C = ((F - 32) * 5) / 9;

    printf("O valor em Celsius vale: %.2f ", C);

    return 0;
}
