#include <stdio.h>

int main() {
    char nome[50];
    char sexo;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (M para masculino ou F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M') {
        printf("Ilmo. Sr. %s\n", nome);
    } else {
        if (sexo == 'F') {
        printf("Ilma. Sra. %s\n", nome);
    } else {
        printf("Sexo informado inválido\n");
    }
    }
    return 0;
}
