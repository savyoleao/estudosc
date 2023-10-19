#include <stdio.h>
#include <math.h>

int main(){

    float soma = 0, graos;

    for(int i = 1; i <= 64; i++){

        graos = pow(2, i-1);
        soma += graos;
    

    }

    printf("o numero total de graos de trigo vale %.2f\n", soma);

    return 0;
}