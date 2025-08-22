#include <stdio.h>

int main() {

    // ===== DADOS DA CARTA 1 =====
    char estado1[3] = "RN";
    char codigo1[5] = "RN01";
    char cidade1[50] = "Natal";
    unsigned long int populacao1 = 896708;
    float area1 = 167.26;
    float pib1 = 24.6;
    int pontos1 = 25;

    // ===== DADOS DA CARTA 2 =====
    char estado2[3] = "PB";
    char codigo2[5] = "PB02";
    char cidade2[50] = "João Pessoa";
    unsigned long int populacao2 = 833932;
    float area2 = 211.47;
    float pib2 = 26.1;
    int pontos2 = 30;

    // ===== CALCULOS =====
    float dens1 = populacao1 / area1;
    float dens2 = populacao2 / area2;

    float pibpc1 = (pib1 * 1000000000) / populacao1;
    float pibpc2 = (pib2 * 1000000000) / populacao2;

    float super1 = populacao1 + area1 + pib1 + pontos1 + pibpc1 + (1/dens1);
    float super2 = populacao2 + area2 + pib2 + pontos2 + pibpc2 + (1/dens2);

    int escolha;

    printf("===== CARTAS =====\n\n");
    printf("1 - Carta 1: %s (%s)\n", cidade1, estado1);
    printf("2 - Carta 2: %s (%s)\n\n", cidade2, estado2);

    printf("Escolha uma carta para jogar (1 ou 2): ");
    scanf("%d", &escolha);

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite o numero do atributo: ");
    int atributo;
    scanf("%d", &atributo);

    printf("\n===== RESULTADO =====\n");

    switch(atributo) {
        case 1: // Populacao
            if (populacao1 > populacao2) printf("Populacao: Carta 1 venceu\n");
            else if (populacao1 < populacao2) printf("Populacao: Carta 2 venceu\n");
            else printf("Populacao: Empate\n");
            break;
        case 2: // Area
            if (area1 > area2) printf("Area: Carta 1 venceu\n");
            else if (area1 < area2) printf("Area: Carta 2 venceu\n");
            else printf("Area: Empate\n");
            break;
        case 3: // PIB
            if (pib1 > pib2) printf("PIB: Carta 1 venceu\n");
            else if (pib1 < pib2) printf("PIB: Carta 2 venceu\n");
            else printf("PIB: Empate\n");
            break;
        case 4: // Pontos Turisticos
            if (pontos1 > pontos2) printf("Pontos Turisticos: Carta 1 venceu\n");
            else if (pontos1 < pontos2) printf("Pontos Turisticos: Carta 2 venceu\n");
            else printf("Pontos Turisticos: Empate\n");
            break;
        case 5: // Densidade (menor vence)
            if (dens1 < dens2) printf("Densidade Populacional: Carta 1 venceu\n");
            else if (dens1 > dens2) printf("Densidade Populacional: Carta 2 venceu\n");
            else printf("Densidade Populacional: Empate\n");
            break;
        case 6: // PIB per Capita
            if (pibpc1 > pibpc2) printf("PIB per Capita: Carta 1 venceu\n");
            else if (pibpc1 < pibpc2) printf("PIB per Capita: Carta 2 venceu\n");
            else printf("PIB per Capita: Empate\n");
            break;
        case 7: // Super Poder
            if (super1 > super2) printf("Super Poder: Carta 1 venceu\n");
            else if (super1 < super2) printf("Super Poder: Carta 2 venceu\n");
            else printf("Super Poder: Empate\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}