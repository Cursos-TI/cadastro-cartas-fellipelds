#include <stdio.h>

int main() {
    
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1[50], codigo1[10], cidade1[20], estado2[50], codigo2[10], cidade2[20];
    int populacao1, turistico1, populacao2, turistico2;
    float area1, pib1, area2, pib2, densidadepop1, pibper1, densidadepop2, pibper2, supp1 = 0, supp2 = 0;

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
    
    densidadepop1 = (float) populacao1 / area1;
    pibper1 = pib1 / (float) populacao1;

    densidadepop2 = (float) populacao2 / area2;
    pibper2 = pib2 / (float) populacao2;

    supp1+=populacao1;
    supp1+=area1;
    supp1+=pib1;
    supp1+=turistico1;
    supp1+=densidadepop1;
    supp1+=pibper1;

    supp2+=populacao2;
    supp2+=area2;
    supp2+=pib2;
    supp2+=turistico2;
    supp2+=densidadepop2;
    supp2+=pibper2;

  // Área para exibição dos dados da cidade

    printf("\nSegue abaixo, as cartas com os dados informados:\n");
    printf("\nCarta 1:\n");
    printf("\nEstado: %s ", estado1);
    printf("\nCódigo: %s ", codigo1);
    printf("\nNome da Cidade: %s ", cidade1);
    printf("\nPopulação: %d ", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f reais", pib1);
    printf("\nNúmero de pontos turísticos: %d", turistico1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadepop1);
    printf("\nPIB per Capita: %.2f", pibper1);
    printf("\nSuper Poder: %.2f \n", supp1);

    printf("\nCarta 2:\n");
    printf("\nEstado: %s ", estado2);
    printf("\nCódigo: %s ", codigo2);
    printf("\nNome da Cidade: %s ", cidade2);
    printf("\nPopulação: %d ", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f reais", pib2);
    printf("\nNúmero de pontos turísticos: %d", turistico2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadepop2);
    printf("\nPIB per Capita: %.2f reais", pibper2);
    printf("\nSuper Poder: %.2f \n", supp2);

    printf("\nCOMPARAÇÃO DE CARTAS!\n");
    printf("\nPopulação: Carta 1 venceu: %d \n", populacao1 > populacao2);
    printf("Área: Carta 2 venceu: %d \n", area2 > area1);
    printf("PIB: Carta 1 venceu: %d \n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 2 venceu: %d \n", turistico2 > turistico1);
    printf("Densidade Populacional: Carta 1 venceu: %d \n", densidadepop1 < densidadepop2);
    printf("PIB per Capita: Carta 2 venceu: %d \n", pibper2 > pibper1);
    printf("Super Poder: Carta 2 venceu: %d \n", supp2 > supp1);

return 0;

};
