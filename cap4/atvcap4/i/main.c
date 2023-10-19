#include <stdio.h>

int main(){

    int A, B, C, D, E;
    int maior, menor;

    printf("Insira aqui o valor de A: ");
    scanf("%d", &A);

    printf("Insira aqui o valor de B: ");
    scanf("%d", &B);

    printf("Insira aqui o valor de C: ");
    scanf("%d", &C);

    printf("Insira aqui o valor de D: ");
    scanf("%d", &D);

    printf("Insira aqui o valor de E: ");
    scanf("%d", &E);

    maior = A;
    menor = A;

    if (B > maior) {
        maior = B;
    }
    if (C > maior) {
        maior = C;
    }
    if (D > maior) {
        maior = D;
    }
    if (E > maior) {
        maior = E;
    }

    if (B < menor) {
        menor = B;
    }
    if (C < menor) {
        menor = C;
    }
    if (D < menor) {
        menor = D;
    }
    if (E < menor) {
        menor = E;
    }

    printf("\n\nO maior valor informado e: %d\n\n", maior);
    printf("O menor valor informado e: %d\n\n", menor);


    return 0;
}