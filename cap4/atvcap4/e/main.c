#include <stdio.h>

int main(){

    int A, B, C, DELTA;

    printf("Insira aqui o valor de A: ");
    scanf("%d", &A);

    printf("Insira aqui o valor de B: ");
    scanf("%d", &B);

    printf("Insira aqui o valor de C: ");
    scanf("%d", &C);

    DELTA = (B*B) - 4 * A * C;

    if (DELTA < 0)
    {
        printf("\n\n Nao existe solucao real, pois delta < 0\n\n");
    } 
    else
    {
        if (DELTA > 0)
        {
            printf("\n\n existe duas solucoes reais e diferentes, e o valor de delta vale: %d\n\n", DELTA);
        }
        else {
            printf("\n\n existe apenas uma solucao real, e o valor de delta vale 0 \n\n");
        }
    }

    return 0;
}