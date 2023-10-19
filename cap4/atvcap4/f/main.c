#include <stdio.h>

int main(){

    int A, B, C;

    printf("Insira aqui o valor de A: ");
    scanf("%d", &A);

    printf("Insira aqui o valor de B: ");
    scanf("%d", &B);

    printf("Insira aqui o valor de C: ");
    scanf("%d", &C);

   if (A <= B && A <= C) {
        if (B <= C) {
            printf("Valores em ordem crescente: %d, %d, %d\n", A, B, C);
        } else {
            printf("Valores em ordem crescente: %d, %d, %d\n", A, C, B);
        }
    }
    if (B <= A && B <= C) {
        if (A <= C) {
            printf("Valores em ordem crescente: %d, %d, %d\n", B, A, C);
        } else {
            printf("Valores em ordem crescente: %d, %d, %d\n", B, C, A);
        }
    } else {
        if (A <= B) {
            printf("Valores em ordem crescente: %d, %d, %d\n", C, A, B);
        } else {
            printf("Valores em ordem crescente: %d, %d, %d\n", C, B, A);
        }
    }
    

    return 0;
}