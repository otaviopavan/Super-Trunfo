#include <stdio.h>

#define TAM 10           // Tamanho do tabuleiro (10x10)
#define NAVIO 3          // Valor que representa navio no tabuleiro
#define AGUA 0           // Valor que representa água
#define TAM_NAVIO 3      // Tamanho fixo dos navios

// Função para verificar se há sobreposição nas posições desejadas
int semSobreposicao(int tabuleiro[TAM][TAM], int linha[], int coluna[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (tabuleiro[linha[i]][coluna[i]] != AGUA) {
            return 0; // Há sobreposição
        }
    }
    return 1;
}

// Função para posicionar um navio
void posicionarNavio(int tabuleiro[TAM][TAM], int linha[], int coluna[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha[i]][coluna[i]] = NAVIO;
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // === NAVIO 1: HORIZONTAL ===
    int linha1[]  = {1, 1, 1};    // linha constante
    int coluna1[] = {2, 3, 4};    // colunas consecutivas
    if (semSobreposicao(tabuleiro, linha1, coluna1, TAM_NAVIO)) {
        posicionarNavio(tabuleiro, linha1, coluna1, TAM_NAVIO);
    }

    // === NAVIO 2: VERTICAL ===
    int linha2[]  = {4, 5, 6};    // linhas consecutivas
    int coluna2[] = {7, 7, 7};    // coluna constante
    if (semSobreposicao(tabuleiro, linha2, coluna2, TAM_NAVIO)) {
        posicionarNavio(tabuleiro, linha2, coluna2, TAM_NAVIO);
    }

    // === NAVIO 3: DIAGONAL ↘ ===
    int linha3[]  = {0, 1, 2};    // linha e coluna crescem juntas
    int coluna3[] = {0, 1, 2};
    if (semSobreposicao(tabuleiro, linha3, coluna3, TAM_NAVIO)) {
        posicionarNavio(tabuleiro, linha3, coluna3, TAM_NAVIO);
    }

    // === NAVIO 4: DIAGONAL ↙ ===
    int linha4[]  = {0, 1, 2};        // linha cresce
    int coluna4[] = {9, 8, 7};        // coluna decresce
    if (semSobreposicao(tabuleiro, linha4, coluna4, TAM_NAVIO)) {
        posicionarNavio(tabuleiro, linha4, coluna4, TAM_NAVIO);
    }

    // === EXIBE O TABULEIRO ===
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}