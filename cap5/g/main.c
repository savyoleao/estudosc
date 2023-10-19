#include <stdio.h>
#include <math.h>

int main(){

    int base = 3;
    int i, X;

    for(i = 0; i <= 15; i++){

        X = pow(base,i);

        printf("3 elevado a %d vale: %d\n", i, X);

    }

    return 0;
}