#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Fernando

int main() {
    // Carta 1
    char estado1;
    char codigocarta1[4]; // 3 + \0
    char cidade1[50];
    float area1;
    float pib1;

    // Carta 2
    char estado2;
    char codigocarta2[4];
    char cidade2[50];
    float area2;
    float pib2;

    // --- Carta 1 ---
    printf("=== Cadastro Carta 1 ===\n");
    printf("Insira o estado da carta: ");
    scanf(" %c", &estado1);

    printf("Insira o código da carta: ");
    scanf("%s", codigocarta1);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Insira a área da cidade: ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib1);

    // --- Carta 2 ---
    printf("\n=== Cadastro Carta 2 ===\n");
    printf("Insira o estado da carta: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: ");
    scanf("%3s", codigocarta2);

    printf("Insira o nome da cidade: ");
    scanf("%49s", cidade2);

    printf("Insira a área da cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    // --- Exibição ---
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);

    return 0;
}
