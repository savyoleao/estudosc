//utilizar o conceito de arvores binárias para imprimir um formula matemática usando a forma de  caminhamento "Em ordem". Você deve preencher uma árvore binária onde cada nó seja um elemento da fórmula matemática, por fim deve ser apresentado a fórmula matemática contida na árvore.

#include <stdio.h>
#include <stdlib.h>

typedef struct SArvore {
    char info;               // Armazenará um caractere (operador ou operando)
    struct SArvore *esq;
    struct SArvore *dir;
} TArvore;

// Função para criar um novo nó
TArvore* criarNo(char valor) {
    TArvore* novo = malloc(sizeof(TArvore));
    novo->info = valor;
    novo->esq = novo->dir = NULL;
    return novo;
}

// Função para percorrer a árvore em ordem (in-order) e imprimir a expressão matemática
void imprimirEmOrdem(TArvore *no) {
    if (no == NULL)
        return;
    if (no->esq != NULL) printf("(");  // Adiciona parênteses para clareza na expressão
    imprimirEmOrdem(no->esq);
    printf("%c ", no->info);
    imprimirEmOrdem(no->dir);
    if (no->dir != NULL) printf(")");
}

// Função para coletar entrada do usuário
char lerEntrada(const char *prompt) {
    char valor;
    printf("%s", prompt);
    scanf(" %c", &valor);
    return valor;
}

int main() {
    // Construindo a árvore para a expressão com entradas do usuário
    printf("Digite uma expressão matemática simples na forma (a op b) op (c op d),\n");
    printf("onde 'op' são operadores (+, -, *, /) e a, b, c, d são operandos (caracteres numéricos).\n");

    char op1 = lerEntrada("Digite o operador central da expressão (ex: +, -, *, /): ");
    TArvore *raiz = criarNo(op1);

    char op2 = lerEntrada("Digite o operador da subexpressão esquerda: ");
    raiz->esq = criarNo(op2);
    char op3 = lerEntrada("Digite o operador da subexpressão direita: ");
    raiz->dir = criarNo(op3);

    char operando1 = lerEntrada("Digite o operando esquerdo da subexpressão esquerda: ");
    raiz->esq->esq = criarNo(operando1);
    char operando2 = lerEntrada("Digite o operando direito da subexpressão esquerda: ");
    raiz->esq->dir = criarNo(operando2);

    char operando3 = lerEntrada("Digite o operando esquerdo da subexpressão direita: ");
    raiz->dir->esq = criarNo(operando3);
    char operando4 = lerEntrada("Digite o operando direito da subexpressão direita: ");
    raiz->dir->dir = criarNo(operando4);

    // Imprimindo a expressão matemática
    printf("Expressão matemática em ordem: ");
    imprimirEmOrdem(raiz);
    printf("\n");

    return 0;
}