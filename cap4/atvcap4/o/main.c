#include <stdio.h>

int main() {
    int numero;
    int resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resultado = numero * 2;

    if (resultado > 30) {
        printf("O resultado da multiplicação é: %d\n", resultado);
    }

    return 0;
}
