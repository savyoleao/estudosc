#include <stdio.h>

int main() {

    int i;
    int soma = 0;

    for(i = 2; i <= 500; i += 2){

        soma += i;
    }

    printf("o resultado da soma dos numeros pares entre 1 e 500 vale: %d\n\n", soma);


    return 0;
}