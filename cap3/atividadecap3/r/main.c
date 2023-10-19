#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float A,B,C,VN,VB;
    float T,PVV,PA,PB,PC,PVN,PVB;

    printf("insira o valor de votos do candidato A: ");
    scanf("%f", &A);

    printf("insira o valor de votos do candidato B: ");
    scanf("%f", &B);

    printf("insira o valor de votos do candidato C: ");
    scanf("%f", &C);

    printf("insira o valor de votos nulos: ");
    scanf("%f", &VN);

    printf("insira o valor de votos em branco: ");
    scanf("%f", &VB);

    T = A + B + C + VN + VB;

    PVV = (A + B + C) * 100/T;
    PA = A * 100/T;
    PB = B * 100/T;
    PC = C * 100/T;
    PVN = VN * 100/T;
    PVB = VB * 100/T;

    printf("o valor de votos total é de %.2f\n", T);
    printf("o valor do percentual correspondente de votos válidos é de %.2f\n", PVV);
    printf("o valor percentual correspondente de votos de A é de %.2f\n", PA);
    printf("o valor percentual correspondente de votos de B é de %.2f\n", PB);
    printf("o valor percentual correspondente de votos de C é de %.2f\n", PC);
    printf("o valor percentual correspondente de votos nulos é de %.2f\n", PVN);
    printf("o valor percentual correspondente de votos em branco é de %.2f\n", PVB);


    return 0;
}
