#include <stdio.h>

int main(){

    int A, B, C, D;

    printf("Insira aqui o valor de A: ");
    scanf("%d", &A);

    printf("Insira aqui o valor de B: ");
    scanf("%d", &B);

    printf("Insira aqui o valor de C: ");
    scanf("%d", &C);

    printf("Insira aqui o valor de D: ");
    scanf("%d", &D);

     printf("Valores divisíveis por 2 e 3: ");

    if (A % 2 == 0 && A % 3 == 0) {
        printf("%d ", A);
    }
    if (B % 2 == 0 && B % 3 == 0) {
        printf("%d ", B);
    }
    if (C % 2 == 0 && C % 3 == 0) {
        printf("%d ", C);
    }
    if (D % 2 == 0 && D % 3 == 0) {
        printf("%d ", D);
    }
    

    return 0;
}