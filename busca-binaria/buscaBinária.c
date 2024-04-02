#include <stdio.h>
#include <stdlib.h>

typedef struct SArvore{
    int info;
    struct SArvore * esq;
    struct SArvore * dir;
} TArvore;


void preOrdem(TArvore * no){
    if (no == NULL)
        return;
    printf("%d ",no->info);
    preOrdem(no->esq);
    preOrdem(no->dir);
}

void ordem(TArvore * no){
    if (no == NULL)
        return;
    ordem(no->esq);
    printf("%d ",no->info);
    ordem(no->dir);
}

void posOrdem(TArvore * no){
    if (no == NULL)
        return;
    posOrdem(no->esq);
    posOrdem(no->dir);
    printf("%d ",no->info);
}

void preencherArvore(TArvore * no){
    if (no == NULL)
        return;

    int cont = 1;
    int leitura;
    TArvore * novo;

    while (cont <= 2){
        printf("Informe o valor do filho do nó %d: ", no->info);
        scanf("%d",&leitura);
        if (leitura == 0){
            cont++;
            continue;
        }

        novo = malloc(sizeof(TArvore));
        novo->info = leitura;
        novo->esq = novo->dir = NULL;
        
        if (cont == 1)
            no->esq = novo;
        else
            no->dir = novo; 

        cont++;    
    }

    preencherArvore(no->esq);
    preencherArvore(no->dir);
}

int main(int argc, char** argv) {

    TArvore * raiz = malloc(sizeof(TArvore));
    printf("Informe o valor da raiz: ");
    scanf("%d",&raiz->info);

    preencherArvore(raiz);
    ordem(raiz);

    return (EXIT_SUCCESS);
}