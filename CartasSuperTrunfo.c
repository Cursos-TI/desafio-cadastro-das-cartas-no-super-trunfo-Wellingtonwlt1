#include <stdio.h>

int main() {
    // Variáveis para os dados da carta 1
    char estado1, codigo1[5], cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;

    // Variáveis para os dados da carta 2
    char estado2, codigo2[5], cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;

    // Entrada de dados para a primeira carta
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Permite ler uma linha com espaços
    printf("População: ");
    scanf("%lu", &populacao1); // População agora é unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("Densidade populacional (em hab/Km²): ");
    scanf("%f", &densidade_populacional1);
    printf("PIB per capita (Reais): ");
    scanf("%f", &pib_per_capita1);

    // Cálculos para a primeira carta
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Entrada de dados para a segunda carta
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // Permite ler uma linha com espaços
    printf("População: ");
    scanf("%lu", &populacao2); // População agora é unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Densidade populacional (em hab/Km²): ");
    scanf("%f", &densidade_populacional2);
    printf("PIB per capita (Reais): ");
    scanf("%f", &pib_per_capita2);

    // Cálculos para a segunda carta
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Comparação dos atributos e exibição dos resultados
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: ");
    printf("%s\n", (populacao1 > populacao2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Comparando Área
    printf("Área: ");
    printf("%s\n", (area1 > area2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Comparando PIB
    printf("PIB: ");
    printf("%s\n", (pib1 > pib2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: ");
    printf("%s\n", (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Comparando Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    printf("%s\n", (densidade_populacional1 < densidade_populacional2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Comparando PIB per Capita
    printf("PIB per Capita: ");
    printf("%s\n", (pib_per_capita1 > pib_per_capita2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Comparando Super Poder
    printf("Super Poder: ");
    printf("%s\n", (super_poder1 > super_poder2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    return 0;
}