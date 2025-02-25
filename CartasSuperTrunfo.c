#include <stdio.h>

int main() {
    // Variáveis para os dados da carta 1
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib__per_capita1;

    // Variáveis para os dados da carta 2
    char estado2, codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib__per_capita2;

    // Entrada de dados para a primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Permite ler uma linha com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("Densidade populacional: (hab/Km²): ");
    scanf("%f", &densidade_populacional1);
    printf("PIB per capita (Reais): ");
    scanf("%f", &pib__per_capita1);

    densidade_populacional1 = (float)(populacao1 / area1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);


    pib__per_capita1 = (float)(pib1 / populacao1);
    printf("PIB per capita: %.2f\n", pib__per_capita1);


    // Entrada de dados para a segunda carta
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // Permite ler uma linha com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Densidade populacional: (em hab/Km²): ");
    scanf("%f", &densidade_populacional2);
    printf("PIB per capita ( em Reais): ");
    scanf("%f", &pib__per_capita2);

    
    densidade_populacional1 = (float)(populacao1 / area1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);

    
    pib__per_capita1 = (float)(pib1 / populacao1);
    printf("PIB per capita: %.2f\n", pib__per_capita1);


    // Exibindo os dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f Hab/Km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib__per_capita1);

    // Exibindo os dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f Hab/Km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib__per_capita2);


    return 0;
}
