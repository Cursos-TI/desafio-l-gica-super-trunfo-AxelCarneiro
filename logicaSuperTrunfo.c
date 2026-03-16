#include <stdio.h>

int main() {

    // ===============================
    // DADOS DAS CARTAS (PRÉ-CADASTRADAS)
    // ===============================

    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767;
    float pib1 = 1868000;
    int pontos1 = 30;

    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400;
    float pib2 = 632000;
    int pontos2 = 25;

    // ===============================
    // CÁLCULO DA DENSIDADE DEMOGRÁFICA
    // ===============================

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // ===============================
    // VARIÁVEIS DE CONTROLE
    // ===============================

    int atributo1, atributo2;

    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    float soma1, soma2;

    // ===============================
    // MENU DO PRIMEIRO ATRIBUTO
    // ===============================

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo1);

    // ===============================
    // MENU DO SEGUNDO ATRIBUTO
    // (IMPEDINDO REPETIÇÃO)
    // ===============================

    printf("\nEscolha o SEGUNDO atributo:\n");

    for(int i = 1; i <= 5; i++) {
        if(i != atributo1) {
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }

    printf("Opcao: ");
    scanf("%d", &atributo2);

    // Verifica se o usuário escolheu o mesmo atributo
    if(atributo1 == atributo2) {
        printf("Erro: nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // ===============================
    // IDENTIFICANDO VALORES DO ATRIBUTO 1
    // ===============================

    switch(atributo1) {

        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
        break;

        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
        break;

        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
        break;

        case 4:
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
        break;

        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
        break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===============================
    // IDENTIFICANDO VALORES DO ATRIBUTO 2
    // ===============================

    switch(atributo2) {

        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
        break;

        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
        break;

        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
        break;

        case 4:
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
        break;

        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
        break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===============================
    // REGRA ESPECIAL PARA DENSIDADE
    // (MENOR VENCE)
    // ===============================

    if(atributo1 == 5) {
        valor1_carta1 = 1 / valor1_carta1;
        valor1_carta2 = 1 / valor1_carta2;
    }

    if(atributo2 == 5) {
        valor2_carta1 = 1 / valor2_carta1;
        valor2_carta2 = 1 / valor2_carta2;
    }

    // ===============================
    // SOMA DOS ATRIBUTOS
    // ===============================

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // ===============================
    // EXIBIÇÃO DOS RESULTADOS
    // ===============================

    printf("\n===== RESULTADO =====\n");

    printf("%s -> %.2f + %.2f = %.2f\n",
           pais1, valor1_carta1, valor2_carta1, soma1);

    printf("%s -> %.2f + %.2f = %.2f\n",
           pais2, valor1_carta2, valor2_carta2, soma2);

    // ===============================
    // OPERADOR TERNÁRIO PARA RESULTADO
    // ===============================

    printf("\nResultado: %s\n",
           soma1 > soma2 ? pais1 :
           soma2 > soma1 ? pais2 :
           "Empate!");

    return 0;
}