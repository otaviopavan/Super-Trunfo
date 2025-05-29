#include <stdio.h>
#include <string.h>

#define TOTAL_ATRIBUTOS 4

typedef struct {
    char nome[30];
    int populacao;
    int area;
    int pib;
    int densidade;
} Carta;

void exibirMenuAtributos(int excluir) {
    printf("Escolha um atributo:\n");
    if (excluir != 1) printf("1. População\n");
    if (excluir != 2) printf("2. Área\n");
    if (excluir != 3) printf("3. PIB\n");
    if (excluir != 4) printf("4. Densidade Demográfica\n");
    printf("Opção: ");
}

int obterValorAtributo(Carta carta, int atributo) {
    switch (atributo) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return carta.densidade;
        default: return -1;
    }
}

char* nomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int compararAtributo(int valor1, int valor2, int atributo) {
    if (atributo == 4) // Densidade: menor vence
        return (valor1 < valor2) ? 1 : (valor2 < valor1 ? 2 : 0);
    else                // Demais: maior vence
        return (valor1 > valor2) ? 1 : (valor2 > valor1 ? 2 : 0);
}

int main() {
    Carta carta1 = {"São Paulo", 211000000, 8515767, 2200000, 25};
    Carta carta2 = {"RJ", 83000000, 357386, 3840000, 232};

    int escolha1, escolha2;

    // Escolha do primeiro atributo
    do {
        exibirMenuAtributos(0);
        scanf("%d", &escolha1);
        if (escolha1 < 1 || escolha1 > 4) printf("Opção inválida. Tente novamente.\n");
    } while (escolha1 < 1 || escolha1 > 4);

    // Escolha do segundo atributo, excluindo o primeiro
    do {
        exibirMenuAtributos(escolha1);
        scanf("%d", &escolha2);
        if (escolha2 < 1 || escolha2 > 4 || escolha2 == escolha1)
            printf("Opção inválida. Tente novamente.\n");
    } while (escolha2 < 1 || escolha2 > 4 || escolha2 == escolha1);

    int valor1_attr1 = obterValorAtributo(carta1, escolha1);
    int valor2_attr1 = obterValorAtributo(carta2, escolha1);
    int valor1_attr2 = obterValorAtributo(carta1, escolha2);
    int valor2_attr2 = obterValorAtributo(carta2, escolha2);

    int soma1 = valor1_attr1 + valor1_attr2;
    int soma2 = valor2_attr1 + valor2_attr2;

    printf("\n--- Comparação ---\n");
    printf("%s vs %s\n", carta1.nome, carta2.nome);
    printf("%s: %d vs %d\n", nomeAtributo(escolha1), valor1_attr1, valor2_attr1);
    printf("%s: %d vs %d\n", nomeAtributo(escolha2), valor1_attr2, valor2_attr2);
    printf("Soma total: %d vs %d\n", soma1, soma2);

    if (soma1 > soma2)
        printf("Resultado: %s venceu!\n", carta1.nome);
    else if (soma2 > soma1)
        printf("Resultado: %s venceu!\n", carta2.nome);
    else
        printf("Resultado: Empate!\n");

    return 0;
}
