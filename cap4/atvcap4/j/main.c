#include <stdio.h>

int main() {
    int X;

    printf("Digite um valor inteiro: ");
    scanf("%d", &X);

    if (X % 2 == 0) {
        printf("O valor fornecido e par\n");
    } else {
        printf("O valor fornecido e impar\n");
    }

    return 0;
}
