#include <stdio.h>

int main() {
 
    const int movimentosBaixo = 2;
    const int movimentosEsquerda = 1;

    printf("\n");

    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
