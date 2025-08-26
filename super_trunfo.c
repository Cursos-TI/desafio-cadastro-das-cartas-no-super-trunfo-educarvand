#include <stdio.h>

int main(){

// Declarando as variaveis carta 1
char estado[500];
char lcarta;
char nomecidade[500];
int populacao, pturisticos, ncarta;
float area, pib;

// Declarando as variaveis carta 2
char estado2[500];
char lcarta2;
char nomecidade2[500];
int populacao2, pturisticos2, ncarta2;
float area2, pib2;

// Banner
printf("=================================================\n");
printf("Super Trufo\n");
printf("=================================================\n");

printf("=================================================\n");
printf("Escreva as informações da Primeira carta\n");
printf("=================================================\n");

// User escolhe letra do Estado
printf("Digite a Letra do Estado: ");
scanf(" %c", &lcarta);

// User escolhe numero da carta
printf("Digite o Numero da carta (01, 02, 03 ou 04): ");
scanf("%d", &ncarta);

// Solicita ao User o nome da cidade
printf("Digite o nome da Cidade: ");
scanf(" %499[^\n]", &nomecidade); // " %499[^\n]" para ler além do espaço 

// Solicita ao User o numero de habitantes
printf("Digite o Numero de Habitantes: ");
scanf("%i", &populacao);

// Solicita ao User a area em km²
printf("Digite a Area em km quadrados (km²): ");
scanf("%f", &area);

// Solicita ao User o pib em milhoes 
printf("Digite o PIB da cidade (Em milhoes): ");
scanf("%f", &pib);

// Solicita ao User o numero de pontos turisticos
printf("Digite o Numero de pontos turisticos: ");
scanf("%d", &pturisticos);

printf("\n=================================================\n");
printf("Escreva as informações da Segunda carta\n");
printf("=================================================\n");

// User escolhe letra do Estado da carta 2
printf("Digite a Letra do Segundo Estado: ");
scanf(" %c", &lcarta2);

// User escolhe numero da carta2
printf("Digite o Numero da carta2 (01, 02, 03 ou 04): ");
scanf("%d", &ncarta2);

// Solicita ao User o nome da cidade da carta 2
printf("Digite o nome da Segunda Cidade: ");
scanf(" %499[^\n]", &nomecidade2);

// Solicita ao User o numero de habitantes da carta 2
printf("Digite o Numero de Habitantes da Carta2: ");
scanf("%i", &populacao2);

// Solicita ao User a area em km² carta 2
printf("Digite a Area em km quadrados (km²): ");
scanf("%f", &area2);

// Solicita ao User o pib em milhoes carta 2
printf("Digite o PIB da cidade (Em milhoes): ");
scanf("%f", &pib2);

// Solicita ao User o numero de pontos turisticos carta 2
printf("Digite o Numero de pontos turisticos da Segunda Cidade: ");
scanf("%d", &pturisticos2);

// Print Carta 1
printf("\n=================================================\n");
printf("Carta 1\n");
printf("Estado: %c\n", lcarta);
printf("Codigo: %c%i\n", lcarta, ncarta);
printf("Nome da Cidade: %s\n", nomecidade);
printf("Populacao: %d Habitantes\n", populacao);
printf("Area: %.2f\n", area);
printf("PIB: %.2f Milhoes de Reais\n", pib);
printf("Numero de pontos turisticos: %d\n", pturisticos);
printf("=================================================\n");

// Print Carta 2
printf("\n=================================================\n");
printf("Carta 2\n");
printf("Estado: %c\n", lcarta2);
printf("Codigo: %c%i\n", lcarta2, ncarta2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("Populacao: %d Habitantes\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f Milhoes de Reais\n", pib2);
printf("Numero de pontos turisticos: %d\n", pturisticos2);
printf("=================================================\n");

return 0;
}
