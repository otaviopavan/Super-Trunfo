#include <stdio.h>
//primeira carta//
int main() {
int populacao, pontos_turisticos;
float area, PIB;
char estado[25], codigo_da_carta[25], cidade[25];

//segunda carta//
    int populacao1, pontos_turisticos1;
    float area1, PIB1;
    char estado1[25], codigo_da_carta1[25], cidade1[25];

// primeira carta //
printf("Digite o estado: \n ");
scanf("%s", estado);

printf("Digite o Codigo da Carta: \n ");
scanf( "%s", codigo_da_carta);

printf("Digite a cidade: \n" );
fflush(stdin);
scanf("%[^\n]", cidade);

printf("Digite a populacao: \n ");
scanf( "%i", &populacao);

printf("Digite a area: \n ");
scanf( "%f", &area);

printf("Digite o PIB: \n ");
scanf( "%f", &PIB);

printf("Digite o ponto turistico: \n ");
scanf( "%d", &pontos_turisticos);

printf( "Nome do estado: %s \n - Codigo da Carta: %s\n", estado, codigo_da_carta);

printf( "Cidade: %s \n - Populacao: %i \n - Area: %f km \n - PIB %f bilhoes de reais \n - Ponto Turiticos: %d \n", cidade, populacao, area, PIB, pontos_turisticos);

//segunda carta//

printf("Digite o estado: \n ");
scanf("%s", estado1);

printf("Digite o Codigo da Carta: \n ");
scanf( "%s", codigo_da_carta1);

printf("Digite a cidade: \n" );
fflush(stdin);
scanf("%[^\n]", cidade1);

printf("Digite a populacao: \n ");
scanf( "%i", &populacao1);

printf("Digite a area: \n ");
scanf( "%f", &area1);

printf("Digite o PIB: \n ");
scanf( "%f", &PIB1);

printf("Digite o ponto turistico: \n ");
scanf( "%d", &pontos_turisticos1);

printf( "Nome do estado: %s \n - Codigo da Carta: %s\n", estado1, codigo_da_carta1);

printf( "Cidade: %s \n - Populacao: %i habitantes \n - Area: %f km \n - PIB %f bilhoes de reais \n - Pontos Turiticos: %d \n", cidade1, populacao1, area1, PIB1, pontos_turisticos1);

return 0;

}
