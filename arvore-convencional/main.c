#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct SArvore{
    int info;
    struct SArvore * filho;
    struct SArvore * irmao;
} TArvore;

void preencherArvoreConvencional(TArvore * no){
    if (no == NULL)
        return;

    TArvore * novo;
    TArvore * brother;
    int leitura;

    while (TRUE) {
        printf("Informe o valor do filho de %d: ",no->info);
        scanf("%d",&leitura);
        if (leitura  == 0)
            break;

        novo = malloc(sizeof(TArvore));
        novo->info = leitura;
        novo->filho = novo->irmao = NULL;

        if (no->filho == NULL){
            no->filho = novo;
        }else{
            brother->irmao = novo;
        }

        brother = novo;
    }

    preencherArvoreConvencional(no->filho);
    preencherArvoreConvencional(no->irmao);
}

void profundidade(TArvore * no){
    if (no == NULL)
        return;
    
    printf("%d ",no->info);
    profundidade(no->filho);
    profundidade(no->irmao);
}

void largura(TArvore * no){
    if (no == NULL)
        return;
    
    printf("%d ",no->info);
    largura(no->irmao);
    largura(no->filho);
}


int remover(TArvore **no, int valor) {
    if (*no == NULL) {
        return FALSE;
    }

    if ((*no)->info == valor) {
        TArvore *temp = *no;
        if ((*no)->filho != NULL) {
            remover(&((*no)->filho), (*no)->filho->info);
        }
        *no = (*no)->irmao;
        free(temp);
        return TRUE;
    } else {
        return remover(&((*no)->irmao), valor) || remover(&((*no)->filho), valor);
    }
}

void liberarArvore(TArvore *no) {
    if (no == NULL) return;
    liberarArvore(no->filho);
    liberarArvore(no->irmao);
    free(no);
}

int main() {
    TArvore *raiz = malloc(sizeof(TArvore));
    raiz->filho = raiz->irmao = NULL;
    
    printf("Informe o valor da raiz: ");
    scanf("%d", &raiz->info);

    preencherArvoreConvencional(raiz);

    printf("\nÁrvore em profundidade antes da remoção:\n");
    profundidade(raiz);
    printf("\n");

    int valorParaRemover;
    printf("Informe o valor do nó a ser removido: ");
    scanf("%d", &valorParaRemover);

    if (remover(&raiz, valorParaRemover)) {
        printf("\nNó %d removido com sucesso.\n", valorParaRemover);
    } else {
        printf("\nNó %d não encontrado.\n", valorParaRemover);
    }

    printf("Árvore em profundidade após a remoção:\n");
    profundidade(raiz);
    printf("\n");

    liberarArvore(raiz);

    return EXIT_SUCCESS;
}
