#include <stdio.h>

int main (){

    int i, X, Z;

    printf("insira o valor para mostrar a sua tabuada: ");
    scanf("%d", &X);

    for(i=1; i<=10; i++){

        Z = X * i;
        printf("O valor de %d*%d vale: %d\n", X, i, Z);
    }
    

    return 0;
}