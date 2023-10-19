#include <stdio.h>

int main() {
    int A, B, C;
    int soma;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    soma = A + B + C;

    if (soma >= 100) {
        printf("A soma dos valores é: %d\n", soma);
    }

    return 0;
}
