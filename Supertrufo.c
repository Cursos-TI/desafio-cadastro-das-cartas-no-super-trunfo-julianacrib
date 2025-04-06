#include <stdio.h>

int main() {
    // Definição das variáveis para as duas cidades
    char estado1[3], estado2[3];
    int codigo1, codigo2;
    char nome_cidade1[50], nome_cidade2[50];  
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Entrada de dados para a primeira cidade
    printf("\nDigite o nome do Estado (sigla de 2 letras): ");
    scanf("%2s", estado1);  
    getchar(); 

    printf("Digite o código da cidade (01 ou 02): ");
    scanf("%d", &codigo1);
    getchar(); 

    printf("\nDigite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("\nDigite a população: ");
    scanf("%d", &populacao1);

    printf("\nDigite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1); 

    printf("\nDigite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1); 

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib1);  

    // Exibição dos dados preenchidos
    printf("\n--------------------------------------------------------- INFORMAÇÕES DA CIDADE 1 ------------------------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Código da cidade: %d\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f km²\n", area1);  
    printf("PIB: R$ %.2f bilhões\n", pib1);

    // Entrada de dados para a segunda cidade
    printf("\nDigite o nome do Estado (sigla de 2 letras): ");
    scanf("%2s", estado2);  
    getchar(); 

    printf("Digite o código da cidade (01 ou 02): ");
    scanf("%d", &codigo2);
    getchar();  

    printf("\nDigite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2); 

    printf("\nDigite a população: ");
    scanf("%d", &populacao2);

    printf("\nDigite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2); 

    printf("\nDigite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2); 

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib2);  

    // Exibição dos dados preenchidos
    printf("\n--------------------------------------------------------- INFORMAÇÕES DA CIDADE 2 ------------------------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %d\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f km²\n", area2);  
    printf("PIB: R$ %.2f bilhões\n", pib2);

    return 0;
}

    