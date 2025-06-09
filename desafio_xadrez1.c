#include <stdio.h>

int main() {
    // Movimentação da Torre usando FOR
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação do Bispo usando WHILE
    printf("Movimentação do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimentação da Rainha usando DO-WHILE
    printf("Movimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}