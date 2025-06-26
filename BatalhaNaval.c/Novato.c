#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

int main() {
    // Declaração do tabuleiro e inicialização com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = VALOR_AGUA;
        }
    }

    // Coordenadas iniciais do navio horizontal
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    // Verifica se o navio horizontal cabe no tabuleiro
    if (coluna_horizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        // Verifica se já existe navio na posição desejada
        int sobreposicao = 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_horizontal][coluna_horizontal + i] == VALOR_NAVIO) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_horizontal][coluna_horizontal + i] = VALOR_NAVIO;
            }
        } else {
            printf("Erro: Sobreposição detectada no navio horizontal.\n");
            return 1;
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Coordenadas iniciais do navio vertical
    int linha_vertical = 5;
    int coluna_vertical = 7;

    // Verifica se o navio vertical cabe no tabuleiro
    if (linha_vertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        // Verifica se já existe navio na posição desejada
        int sobreposicao = 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_vertical + i][coluna_vertical] == VALOR_NAVIO) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_vertical + i][coluna_vertical] = VALOR_NAVIO;
            }
        } else {
            printf("Erro: Sobreposição detectada no navio vertical.\n");
            return 1;
        }
    } else {
        printf("Erro: Navio vertical fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Impressão do tabuleiro
    printf("\nTabuleiro Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}