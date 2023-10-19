#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float SM,PR,NS;
    printf("insira o valor salario mensal: ");
    scanf("%f", &SM);

    printf("insira o valor do percentual de reajuste: ");
    scanf("%f", &PR);

    NS = SM * (PR / 100) + SM;
    printf("o valor do novo salario é: %.2f\n", NS);


    return 0;
}
