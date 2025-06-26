#include <stdio.h>

#define CASAS_TORRE 4
#define CASAS_BISPO 3
#define CASAS_RAINHA 2

// -----------------------------
// Função recursiva para a Torre
// -----------------------------
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// -----------------------------
// Função recursiva para o Bispo
// -----------------------------
void moverBispoDiagonalDireitaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoDiagonalDireitaCima(casas - 1);
}

// -----------------------------
// Função recursiva para a Rainha
// -----------------------------
void moverRainhaDiagonalEsquerdaBaixo(int casas) {
    if (casas == 0) return;
    printf("Baixo\n");
    printf("Esquerda\n");
    moverRainhaDiagonalEsquerdaBaixo(casas - 1);
}

void moverRainhaDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverRainhaDireita(casas - 1);
}

// -----------------------------
// Função para movimentação do Cavalo
// -----------------------------
void moverCavaloL() {
    printf("\nMovimento do Cavalo (duas casas para cima, uma para direita):\n");

    for (int i = 0; i < 3; i++) {         // loop vertical (simulando 3 tentativas)
        for (int j = 0; j < 3; j++) {     // loop horizontal
            if (i == 2 && j == 1) {       // posição específica do movimento em L
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            } else {
                continue; // ignora outras combinações
            }
        }
    }
}

// -----------------------------
// Bispo com loops aninhados
// -----------------------------
void bispoComLoopsAninhados(int casas) {
    printf("\nMovimento do Bispo com loops aninhados:\n");

    for (int i = 0; i < casas; i++) {         // loop vertical (Cima)
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {         // loop horizontal (Direita)
            printf("Direita\n");
        }
    }
}

// -----------------------------
// Função principal
// -----------------------------
int main() {
    printf("Movimento da Torre:\n");
    moverTorreCima(CASAS_TORRE);
    moverTorreDireita(CASAS_TORRE);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoDiagonalDireitaCima(CASAS_BISPO);

    bispoComLoopsAninhados(CASAS_BISPO);

    printf("\nMovimento da Rainha:\n");
    moverRainhaDiagonalEsquerdaBaixo(CASAS_RAINHA);
    moverRainhaDireita(CASAS_RAINHA);

    moverCavaloL();

    return 0;
}
