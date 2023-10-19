#include <stdio.h>

int main(){

    int quantidade = 10;
    float numero;
    float somatorio = 0, media;

    for(int i = 0; i < quantidade; i++){

        printf("insira o %dº valor: ", i + 1);
        scanf("%f", &numero);

        somatorio += numero;
    }

    media = somatorio / quantidade;

    printf("\nO valor do somatorio dos numeros vale: %.0f\n", somatorio);
    printf("O valor da media dos numeros vale: %.0f\n", media);

    return 0;
}