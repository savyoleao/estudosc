#include <stdio.h>

int main ()
{

    float N1, N2, N3, N4, N5, MD1, MD2;

    printf("insira o valor da primeira nota: ");
    scanf("%f", &N1);

    printf("insira o valor da segunda nota: ");
    scanf("%f", &N2);

    printf("insira o valor da terceira nota: ");
    scanf("%f", &N3);

    printf("insira o valor da quarta nota: ");
    scanf("%f", &N4);

    MD1 = (N1 + N2 + N3 + N4)/ 4;

    if (MD1 >= 7)
    {
        printf("\n\nAprovado!!\n\n");
        printf("A media obtida foi igual a %.2f\n\n", MD1);
    }
    else
    {
        printf("\n\nInfelizmente voce tera que fazer a prova final\n");
        printf("insira o valor da quinta nota: ");
        scanf("%f", &N5);

        MD2 = (MD1 + N5)/ 2;

        if (MD2 >= 5){
            printf("\n\nAprovado em exame\n\n");
        }
        else {
            printf("\n\nReprovado!\n\n");
        } 
        printf("A media obtida foi igual a %.2f\n\n", MD2);
    }

    return 0;
}