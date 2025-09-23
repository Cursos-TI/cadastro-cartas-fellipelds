#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1[50], codigo1[10], cidade1[20], estado2[50], codigo2[10], cidade2[20];
    int populacao1, turistico1, populacao2, turistico2;
    float area1, pib1, area2, pib2;

  // Área para entrada de dados

    printf("Insira os dados da Carta 1!\n\nEstado: ");
    scanf("%s", &estado1);

    printf("Código da carta: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);

    printf("\nInsira os dados da Carta 2!\n\nEstado: ");
    scanf("%s", &estado2);

    printf("Código da carta: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico2);

  // Área para exibição dos dados da cidade

    printf("\nSegue abaixo, as cartas com os dados informados:\n");
    printf("\nCarta 1:\n");
    printf("\nEstado: %s ", estado1);
    printf("\nCódigo: %s ", codigo1);
    printf("\nNome da Cidade: %s ", cidade1);
    printf("\nPopulação: %d ", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de pontos turísticos: %d \n", turistico1);

    printf("\nCarta 2:\n");
    printf("\nEstado: %s ", estado2);
    printf("\nCódigo: %s ", codigo2);
    printf("\nNome da Cidade: %s ", cidade2);
    printf("\nPopulação: %d ", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de pontos turísticos: %d \n", turistico2);

return 0;

};
