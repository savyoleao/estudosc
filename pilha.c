#include <stdio.h>
#include <stdlib.h>

#define TAM 5

//SINTAXE DO TYPEDEF
//typedef int numero;

typedef struct SPilha{
    int topo;
    int dados[TAM];
} TPilha;



void push(TPilha * pilha,int dado, int tamanho){
    if (pilha -> topo == tamanho - 1){
        printf("\n\nA pilha está cheia\n\n");
        return;
    }

    pilha -> dados[++pilha -> topo] = dado;
}

void listar(TPilha * pilha){
    int i;
    printf("\n\nListando a pilha \n\n");
    for (i = pilha -> topo; i >= 0;i--){
            printf("%d\n",pilha -> dados[i]);
    }
}

int buscar(TPilha * pilha,int chave){
    int i;
    for (i = pilha -> topo; i >= 0; i--){
        if (pilha -> dados[i] == chave){
            return i;
        }
    }

    return -1;
}

void pop(TPilha*pilha){
    if (pilha -> topo == -1){
        printf("\n\nA pilha está vazia\n\n");
        return;
    }
    pilha -> topo--;
}


int main(int argc, char** argv) {
    TPilha pilha;
    pilha.topo = -1;
    int leitura, key;

    while (1){
        printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
            break;
        push(&pilha,leitura,TAM);
    }

    listar(&pilha);
    pop(&pilha);
    pop(&pilha);
    listar(&pilha);

    printf("Informe a chave da busca: ");
    scanf("%d",&key);
    int posicao = buscar(&pilha,key);

    if (posicao == -1){
        printf("\nChave não encontrada!");
    }else{
        printf("\n Chave encontrada na posição %d", posicao);
    }
    return (EXIT_SUCCESS);
}