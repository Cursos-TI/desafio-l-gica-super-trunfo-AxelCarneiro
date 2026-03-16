#include <stdio.h>

int main() {

    // ======================================
    // DECLARAÇÃO DOS DADOS DAS CARTAS
    // (Cartas já cadastradas no código)
    // ======================================

    // Carta 1
    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767;
    float pib1 = 1868000;
    int pontosTuristicos1 = 30;

    // Carta 2
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400;
    float pib2 = 632000;
    int pontosTuristicos2 = 25;

    // Variáveis para densidade demográfica
    float densidade1;
    float densidade2;

    // Variável que guardará a escolha do usuário
    int opcao;

    // ======================================
    // CÁLCULO DA DENSIDADE DEMOGRÁFICA
    // densidade = população / área
    // ======================================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // ======================================
    // MENU INTERATIVO
    // ======================================

    printf("===== SUPER TRUNFO - COMPARACAO =====\n\n");

    printf("Cartas disponiveis:\n");
    printf("1 - %s\n", pais1);
    printf("2 - %s\n\n", pais2);

    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n");

    // ======================================
    // SWITCH PARA ESCOLHA DO ATRIBUTO
    // ======================================

    switch(opcao) {

        // ---------------------------
        // COMPARAÇÃO POR POPULAÇÃO
        // ---------------------------
        case 1:

            printf("Comparacao por Populacao\n\n");

            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n\n", pais2, populacao2);

            // Estrutura de decisão para determinar o vencedor
            if(populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else if(populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

        break;


        // ---------------------------
        // COMPARAÇÃO POR ÁREA
        // ---------------------------
        case 2:

            printf("Comparacao por Area\n\n");

            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n\n", pais2, area2);

            if(area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else if(area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

        break;


        // ---------------------------
        // COMPARAÇÃO POR PIB
        // ---------------------------
        case 3:

            printf("Comparacao por PIB\n\n");

            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n\n", pais2, pib2);

            if(pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else if(pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

        break;


        // ---------------------------
        // COMPARAÇÃO POR PONTOS TURÍSTICOS
        // ---------------------------
        case 4:

            printf("Comparacao por Pontos Turisticos\n\n");

            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n\n", pais2, pontosTuristicos2);

            if(pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else if(pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

        break;


        // ---------------------------
        // COMPARAÇÃO POR DENSIDADE
        // REGRA INVERTIDA
        // ---------------------------
        case 5:

            printf("Comparacao por Densidade Demografica\n\n");

            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n\n", pais2, densidade2);

            // Aqui a regra é invertida (menor vence)
            if(densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            }
            else if(densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            }
            else {
                printf("Empate!\n");
            }

        break;


        // ---------------------------------
        // TRATAMENTO DE OPÇÃO INVÁLIDA
        // ---------------------------------
        default:
            printf("Opcao invalida! Tente novamente.\n");

    }

    return 0;
}