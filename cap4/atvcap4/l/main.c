#include <stdio.h>

int main() {
    int X;

    printf("Digite um valor inteiro: ");
    scanf("%d", &X);

    if (!(X > 3)) {
        printf("O valor digitado é: %d\n", X);
    } else {
        printf("error!");
    }

    return 0;
}
