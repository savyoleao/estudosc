#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    for(celsius = 10; celsius <=100; celsius += 10){
    
        fahrenheit = (celsius * 18 / 10) + 32;

        printf("T em celsius: %.2f, enquanto em fahrenheit: %.2f\n", celsius, fahrenheit);
    }
    return 0;
}