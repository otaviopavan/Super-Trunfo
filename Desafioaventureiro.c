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



    //Variaveis para o calculo//

//densidade populacional (Carta 1//
float area2 = 1521.11;
float populacao2 = 12325000;
float quociente = populacao2 / area2;

// PIB per Capita (Carta 1) //
float PIB2 =  699.28;
float populacao3 = 12325000;
float quociente2 =  (PIB2 * 1000000) / populacao3;

//densidade populacional (Carta 2)//
float area3 = 1200.25;
float populacao4 =  6748000;
double quociente4 = populacao4 / area3 ;

// PIB per Capita (Carta 2) //
float PIB3 =  300.50;
float populacao5 = 6748000;
double quociente5 = (PIB3 * 1000000000) / populacao5;



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


//densidade populacional//
printf("densidade populacional: %f \n", quociente);
// PIB per Capita //
printf("PIB per capita: %f \n", quociente2);



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

//densidade populacional//
printf("densidade populacional: %f \n", quociente4);

// PIB per Capita //
printf("PIB per capita: %f \n", quociente5);

return 0;

}
