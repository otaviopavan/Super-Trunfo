#include <stdio.h>

int main() {

    printf("Movimento da Torre:\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}





