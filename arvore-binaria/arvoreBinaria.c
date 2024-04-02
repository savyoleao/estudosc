#include <stdio.h>
#include <stdlib.h>


typedef struct SArvore{
    int info;
    struct SArvore * esq;
    struct SArvore * dir;
} TArvore;


TArvore * minValueNode(TArvore* node) {
    TArvore* current = node;
    while (current && current->esq != NULL)
        current = current->esq;
    return current;
}


TArvore* deletarNo(TArvore* root, int valor) {
    if (root == NULL) return root;
    if (valor < root->info)
        root->esq = deletarNo(root->esq, valor);
    else if (valor > root->info)
        root->dir = deletarNo(root->dir, valor);
    else {
        if (root->esq == NULL) {
            TArvore *temp = root->dir;
            free(root);
            return temp;
        }
        else if (root->dir == NULL) {
            TArvore *temp = root->esq;
            free(root);
            return temp;
        }
        TArvore* temp = minValueNode(root->dir);
        root->info = temp->info;
        root->dir = deletarNo(root->dir, temp->info);
    }
    return root;
}


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


    int valor;
    printf("Informe o valor do nó a ser deletado: ");
    scanf("%d", &valor);
    raiz = deletarNo(raiz, valor);
    printf("Árvore após deletar o nó:\n");
    ordem(raiz);


    return (EXIT_SUCCESS);
}
