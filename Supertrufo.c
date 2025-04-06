
#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[3], nome_cidade1[50];
    int codigo1, populacao1, pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1, super_poder1;

    // Variáveis da Carta 2
    char estado2[3], nome_cidade2[50];
    int codigo2, populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada - Carta 1
    printf("Digite o nome do Estado (sigla de 2 letras): ");
    scanf("%2s", estado1); getchar();
    printf("Digite o código da cidade (01 ou 02): ");
    scanf("%d", &codigo1); getchar();
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    // Cálculos - Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);

    // Entrada - Carta 2
    printf("\nDigite o nome do Estado (sigla de 2 letras): ");
    scanf("%2s", estado2); getchar();
    printf("Digite o código da cidade (01 ou 02): ");
    scanf("%d", &codigo2); getchar();
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    // Cálculos - Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Exibição - Carta 1
    printf("\n------------------------------ INFORMAÇÕES DA CIDADE 1 ------------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição - Carta 2
    printf("\n------------------------------ INFORMAÇÕES DA CIDADE 2 ------------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n------------------------------ COMPARAÇÃO DE CARTAS ------------------------------\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // Menor vence!
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}

