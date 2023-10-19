#include <stdio.h>

int main(){

    int i;

    for( i = 1; i < 200; i++){

        if(i % 4 == 0){

            printf("%d e divisivel por 4\n", i);

        }

    }

    return 0;
}