#include <stdio.h>

int main() 
{

    int N, X;

    printf("insira o valor de N, podendo ser positivo ou negativo: ");
    scanf("%d", &N);

    if (N < 0)
    {
       X = N * (-1);
    } 
    else{
        X = N;
    }
    
    printf("o valor de N equivale a: %d\n\n", X);

    return 0;
}