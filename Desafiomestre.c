#include <stdio.h>
#include <string.h>
#include <locale.h>
#define NUM_ATRIBUTOS 4

// Estrutura para a carta
typedef struct {
    char nome[30];
    int populacao;        // em milhões
    int area;             // em mil km²
    int pib;              // em bilhões USD
    int densidade;        // hab/km²
} Carta;

// Função para exibir os atributos dispon�veis
void exibirMenu(int ignorar) {
    printf("Escolha um atributo:\n");
    if (ignorar != 1) printf("1. População\n");
    if (ignorar != 2) printf("2. área\n");
    if (ignorar != 3) printf("3. PIB\n");
    if (ignorar != 4) printf("4. Densidade Demográfica\n");
    printf("Opção: ");
}

// Função para retornar o valor do atributo selecionado
int obterValorAtributo(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.densidade;
        default: return -1;
    }
}

// Função para obter o nome do atributo
const char* nomeAtributo(int op) {
    switch (op) {
        case 1: return "População";
        case 2: return "área";
        case 3: return "PIB";
        case 4: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Cartas cadastradas
    Carta carta1 = {"Brasil", 213, 8516, 1800, 25};
    Carta carta2 = {"Alemanha", 83, 357, 4200, 233};

    int atributo1 = 0, atributo2 = 0;

    // Escolha do primeiro atributo
    do {
        exibirMenu(0);
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > NUM_ATRIBUTOS)
            printf("Atributo inválido. Tente novamente.\n");
    } while (atributo1 < 1 || atributo1 > NUM_ATRIBUTOS);

    // Escolha do segundo atributo
    do {
        exibirMenu(atributo1);
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > NUM_ATRIBUTOS || atributo2 == atributo1)
            printf("Atributo inválido ou repetido. Tente novamente.\n");
    } while (atributo2 < 1 || atributo2 > NUM_ATRIBUTOS || atributo2 == atributo1);

    // Obter os valores dos atributos
    int valor1_c1 = obterValorAtributo(carta1, atributo1);
    int valor2_c1 = obterValorAtributo(carta1, atributo2);
    int valor1_c2 = obterValorAtributo(carta2, atributo1);
    int valor2_c2 = obterValorAtributo(carta2, atributo2);

    // Comparação individual
    int pontos_c1 = 0, pontos_c2 = 0;

    // Atributo 1
    if (atributo1 == 4) {
        (valor1_c1 < valor1_c2) ? pontos_c1++ : (valor1_c1 > valor1_c2) ? pontos_c2++ : 0;
    } else {
        (valor1_c1 > valor1_c2) ? pontos_c1++ : (valor1_c1 < valor1_c2) ? pontos_c2++ : 0;
    }

    // Atributo 2
    if (atributo2 == 4) {
        (valor2_c1 < valor2_c2) ? pontos_c1++ : (valor2_c1 > valor2_c2) ? pontos_c2++ : 0;
    } else {
        (valor2_c1 > valor2_c2) ? pontos_c1++ : (valor2_c1 < valor2_c2) ? pontos_c2++ : 0;
    }

    // Soma dos valores
    int soma_c1 = (atributo1 == 4 ? -valor1_c1 : valor1_c1) + (atributo2 == 4 ? -valor2_c1 : valor2_c1);
    int soma_c2 = (atributo1 == 4 ? -valor1_c2 : valor1_c2) + (atributo2 == 4 ? -valor2_c2 : valor2_c2);

    // Exibição do resultado
    printf("\n===== Resultado da Rodada =====\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("%s: %d\n", nomeAtributo(atributo1), valor1_c1);
    printf("%s: %d\n", nomeAtributo(atributo2), valor2_c1);
    printf("Soma: %d\n\n", soma_c1);

    printf("Carta 2: %s\n", carta2.nome);
    printf("%s: %d\n", nomeAtributo(atributo1), valor1_c2);
    printf("%s: %d\n", nomeAtributo(atributo2), valor2_c2);
    printf("Soma: %d\n\n", soma_c2);

    if (soma_c1 > soma_c2)
        printf(">>> Vencedor: %s\n", carta1.nome);
    else if (soma_c1 < soma_c2)
        printf(">>> Vencedor: %s\n", carta2.nome);
    else
        printf(">>> Empate!\n");

    return 0;
}
