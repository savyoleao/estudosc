#include <stdio.h>

int main() {
    int X;

    printf("Digite um valor inteiro na faixa de 1 até 9: ");
    scanf("%d", &X);

    if (X >= 1 && X <= 9) {
        printf("O valor está na faixa permitida.\n");
    } else {
        printf("O valor está fora da faixa permitida.\n");
    }

    return 0;
}
