#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float MP, M;
    printf("insira o valor da medida em pes: ");
    scanf("%f", &MP);

    M = MP * 0,3048;

    printf("o valor da medida em metros é %.2f\n", M);


    return 0;
}
