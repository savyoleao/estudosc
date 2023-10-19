#include <stdio.h>

int main(){

    int quantidade = 15;
    int valores;
    float somatorio = 0;

    printf("insira os 15 valores numericos inteiros: \n");

    for(int i = 0; i < quantidade; i++){

        int fatorial = 1;

        printf("%d valor: ", i + 1);
        scanf("%d", &valores);

        for(int j = 1; j <= valores; j++){

            fatorial *= j;
        }

        somatorio += fatorial;
    }

    printf("o valor do somatorio equivale a: %.2f", somatorio);

    return 0;
}