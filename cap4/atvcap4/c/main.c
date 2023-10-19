#include <stdio.h>

int main()
{

    float N1, N2, N3, N4, MD;

    printf("insira o valor da primeira nota: ");
    scanf("%f", &N1);

    printf("insira o valor da segunda nota: ");
    scanf("%f", &N2);

    printf("insira o valor da terceira nota: ");
    scanf("%f", &N3);

    printf("insira o valor da quarta nota: ");
    scanf("%f", &N4);

    MD = (N1 + N2 + N3 + N4) / 4;

    if (MD >= 5)
    {
        printf("\nAprovado!\n\n");
    }
    else {
        printf("Reprovado!\n\n");
    }
    
    printf("A media final foi igual a %.2f\n\n", MD);

    return 0;  
}