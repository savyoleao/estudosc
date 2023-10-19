#include <stdio.h>


int main(){

char X[10][20];

for(int i = 0; i < 10; i++){

    printf("nome %d: ", i + 1);
    scanf("%s", &X[i]);
}

    printf("nomes digitados: \n");

for(int i = 0; i < 10; i++){

    printf("%s\n", X[i]);
}

    return 0;
}