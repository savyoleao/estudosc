#include <stdio.h>
#include <stdlib.h>


#define TAM 5


int fila[TAM];


void enqueue(int f[], int dado, int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        if (f[i] == 0){
            f[i] = dado;
            return;
        }
    }  


    printf("\nValor não inserido, a fila está cheia\n");
}


void listar(int f[], int tamanho){
    int i;
    printf("\n\nListando a fila\n\n");
    for (i = 0; i < tamanho;i++){
        printf("%d ",f[i]);
    }
}


 int buscar( int f[], int tamanho, int chave){
    int i;
    for (i = 0; i < tamanho; i++){
        if (f[i] == chave){
            printf("\nValor encontrado no índice %d\n", i);
            return i;
        }
    }
    printf("\nValor não encontrado\n");
    return -1;  
 }

int dequeue(int f[], int tamanho ){
    printf("\n\nremovendo um elemento...\n\n");
    for(int i = 0; i < tamanho - 1; i++){
        f[i] = f[i + 1];
    }
    f[tamanho - 1] = 0;
}

int main(int argc, char** argv) {
    int leitura;
    int key;


    while (1){
        printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
            break;
        enqueue(fila,leitura,TAM);
    }

    listar(fila,TAM);
    dequeue(fila, TAM);
    listar(fila,TAM);
    dequeue(fila, TAM);
    listar(fila,TAM);


    printf("\n\nQual número deseja buscar?");
    scanf("%d",&key);


    buscar(fila,TAM,key);
    return (EXIT_SUCCESS);
}