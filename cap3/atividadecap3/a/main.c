#include <stdio.h>
#include <math.h>

int main() {

    float C, F;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = (C * 9 / 5) + 32;

    printf("%.2f graus celcius equivalem a %.2f graus farenheit", C, F);


    return 0;
}
