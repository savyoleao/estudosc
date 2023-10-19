#include <stdio.h>

int main(){

    int atual = 1, anterior = 0, proximo;

    for(int i = 1; i <= 15; i++){

        proximo = atual + anterior;

        anterior = atual;

        atual = proximo;

        printf("%d\n", atual);
    }
    printf("\n");

    return 0;
}