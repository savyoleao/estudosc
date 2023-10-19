#include <stdio.h>
#include <locale.h>

int main () {
    
    int V, C, L, A;

    printf("insira o valor do comprimento: ");
    scanf("%d", &C);

    printf("insira o valor da largura: ");
    scanf("%d", &L);

    printf("insira o valor da altura: ");
    scanf("%d", &A);

    V = C * L * A;

    printf("O valor do volume é igual a: %d", V);


}