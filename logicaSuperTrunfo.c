#include <stdio.h>

// Função principal do programa
int main() {

    // ===============================
    // DECLARAÇÃO DAS VARIÁVEIS CARTA 1
    // ===============================

    // Strings para armazenar estado, código e nome da cidade
    char estado1[3];
    char codigo1[10];
    char cidade1[50];

    // Variáveis numéricas da carta 1
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis calculadas da carta 1
    float densidade1;
    float pibPerCapita1;


    // ===============================
    // DECLARAÇÃO DAS VARIÁVEIS CARTA 2
    // ===============================

    char estado2[3];
    char codigo2[10];
    char cidade2[50];

    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;


    // ===============================
    // CADASTRO DA CARTA 1
    // ===============================

    printf("Cadastro da Carta 1\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ===============================
    // CADASTRO DA CARTA 2
    // ===============================

    printf("\nCadastro da Carta 2\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ===============================
    // CÁLCULO DOS ATRIBUTOS
    // ===============================

    // Densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita = PIB / população
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;


    // ===============================
    // EXIBIÇÃO DAS CARTAS
    // ===============================

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);


    // ===============================
    // COMPARAÇÃO DAS CARTAS
    // ATRIBUTO ESCOLHIDO: POPULAÇÃO
    // ===============================

    printf("\nComparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);


    // Estrutura de decisão para determinar a carta vencedora
    if (populacao1 > populacao2) {

        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);

    } else if (populacao2 > populacao1) {

        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);

    } else {

        // Caso as duas cartas tenham o mesmo valor
        printf("\nResultado: Empate!\n");

    }

    // Finalização do programa
    return 0;
}