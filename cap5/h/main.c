#include <stdio.h>

int main(){

    int B, E;
    char resposta;

do {

    int X = 1;

    printf("Digite a base: ");
    scanf("%d", &B);

    printf("Digite o expoente: ");
    scanf("%d", &E);

    for (int i = 0; i < E; i++)
    {
        X *= B;
    }

    printf("a resposta vale: %d\n", X);

    printf("deseja executar novamente? (s/n): ");
    scanf(" %c", &resposta);
    
} while(resposta == 's');



    return 0;
}