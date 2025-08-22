#include <stdio.h>

int main() {

    // ===== DADOS DA CARTA 1 =====
    char estado1[3] = "RN"; // Estado da cidade
    char codigo1[5] = "RN01"; // Código da carta
    char cidade1[50] = "Natal"; // Nome da cidade
    unsigned long int populacao1 = 896708; // População
    float area1 = 167.26; // Área em km²
    float pib1 = 24.6; // PIB em bilhões
    int pontos1 = 25; // Número de pontos turísticos

    // ===== DADOS DA CARTA 2 =====
    char estado2[3] = "PB";
    char codigo2[5] = "PB02";
    char cidade2[50] = "João Pessoa";
    unsigned long int populacao2 = 833932;
    float area2 = 211.47;
    float pib2 = 26.1;
    int pontos2 = 30;

    // ===== CALCULOS =====
    float dens1 = populacao1 / area1; // densidade populacional da carta 1
    float dens2 = populacao2 / area2; // densidade populacional da carta 2

    float pibpc1 = (pib1 * 1000000000) / populacao1; // PIB per capita carta 1
    float pibpc2 = (pib2 * 1000000000) / populacao2; // PIB per capita carta 2

    float super1 = populacao1 + area1 + pib1 + pontos1 + pibpc1 + (1/dens1); // super poder carta 1
    float super2 = populacao2 + area2 + pib2 + pontos2 + pibpc2 + (1/dens2); // super poder carta 2

    // ===== MOSTRAR CARTAS =====
    printf("===== CARTAS =====\n\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", dens1);
    printf("PIB per Capita: %.2f\n", pibpc1);
    printf("Super Poder: %.2f\n\n", super1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", dens2);
    printf("PIB per Capita: %.2f\n", pibpc2);
    printf("Super Poder: %.2f\n\n", super2);

    // ===== COMPARACOES =====
    printf("===== COMPARACOES =====\n\n");

    // População
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu\n");
    } else {
        printf("Populacao: Carta 2 venceu\n");
    }

    // Área
    if (area1 > area2) {
        printf("Area: Carta 1 venceu\n");
    } else {
        printf("Area: Carta 2 venceu\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }

    // Pontos Turísticos
    if (pontos1 > pontos2) {
        printf("Pontos Turisticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu\n");
    }

    // Densidade (menor vence)
    if (dens1 < dens2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }

    // PIB per capita
    if (pibpc1 > pibpc2) {
        printf("PIB per Capita: Carta 1 venceu\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }

    // Super Poder
    if (super1 > super2) {
        printf("Super Poder: Carta 1 venceu\n");
    } else {
        printf("Super Poder: Carta 2 venceu\n");
    }

    return 0;