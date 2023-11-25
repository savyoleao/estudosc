#include <stdio.h>
#include <stdlib.h>

typedef struct SFila{
    int info;
    struct SFila * next;
}TFila;


//Sentinela
TFila * fila = NULL;


void enqueue(int dado){
    TFila * ultimo;
    TFila * novo = malloc(sizeof(TFila));
    novo->info = dado;
    novo->next = NULL;
    if (fila == NULL)
        fila = novo;
    else{
        ultimo = fila;
        while (ultimo->next != NULL){
            ultimo = ultimo->next;
        }
        ultimo->next = novo; 
    }
}

void listar(){
    TFila * ultimo = fila;
    printf("\n\nListando\n\n");
    while (ultimo != NULL){
        printf("%d ", ultimo->info);
        ultimo = ultimo->next;
    }
}

TFila * buscar(int key){
    TFila * ultimo = fila;
    while (ultimo != NULL){
        if (ultimo->info == key)
            return ultimo;
        ultimo = ultimo->next;
    }

    return NULL;
}

void dequeue(){
    TFila * destroyer = fila;
    fila = fila->next;
    free(destroyer);
}


int main(int argc, char** argv) {

    int leitura;
    while (1){
        printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
            break;
        enqueue(leitura);
    }

    listar();
    dequeue();
    dequeue();
    listar();

    int chave;
    printf("\n\nInforme o valor da chave: ");
    scanf("%d",&chave);
    TFila * posicao = buscar(chave);
    if (posicao != NULL)
        printf("Chave encontrada na posição %p", posicao);
    else{
        printf("Chave não encontrada na fila");
    }
  
    return (EXIT_SUCCESS);
}