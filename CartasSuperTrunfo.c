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
    printf("Insira os dados da Carta 1!\nEstado: ");
    scanf("%s", &estado1);

    printf("Código da carta: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);

  // Área para exibição dos dados da cidade

return 0;
};
