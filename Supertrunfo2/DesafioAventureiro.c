#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade; // calculada antes
} Carta;

int main() {
    // Cartas de exemplo
    Carta carta1 = {"Brasil", 211000000, 8515767.0, 2200000.0, 100, 25.0};
    Carta carta2 = {"Alemanha", 83000000, 357386.0, 3840000.0, 150, 232.0};

    int opcao;

    // Menu interativo
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- Comparação ---\n");
    printf("País 1: %s\n", carta1.nome);
    printf("País 2: %s\n", carta2.nome);

    switch(opcao) {
        case 1: // População
            printf("População: %d vs %d\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f vs %.2f\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.area > carta1.area)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f vs %.2f\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.pib > carta1.pib)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turísticos: %d vs %d\n", carta1.pontosTuristicos, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Densidade Demográfica: %.2f vs %.2f\n", carta1.densidade, carta2.densidade);
            if (carta1.densidade < carta2.densidade)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.densidade < carta1.densidade)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
            break;
    }

    return 0;
}
