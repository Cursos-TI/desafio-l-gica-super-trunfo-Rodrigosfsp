#include <stdio.h>

int main () {
    char estado1[50], estado2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    double pib1, pib2;
    int opcao1, opcao2;
    double valor1carta1, valor1carta2;
    double valor2carta1, valor2carta2;

    // Leitura de dados da primeira carta
    printf("Dados da carta 01\n");
    printf("Digite o estado:\n");
    scanf("%s", estado1);
    printf("Nome da capital:\n");
    scanf("%s", cidade1);
    printf("População atual da capital:\n");
    scanf("%lu", &populacao1);
    printf("Quantidade de pontos turísticos na capital:\n");
    scanf("%d", &pontos1);
    printf("Área da capital em km²:\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%lf", &pib1);

    // Leitura de dados da segunda carta
    printf("Dados da carta 02\n");
    printf("Digite o estado:\n");
    scanf("%s", estado2);
    printf("Nome da capital:\n");
    scanf("%s", cidade2);
    printf("População atual da capital:\n");
    scanf("%lu", &populacao2);
    printf("Quantidade de pontos turísticos na capital:\n");
    scanf("%d", &pontos2);
    printf("Área da capital em km²:\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%lf", &pib2);

    float densidade1 = (populacao1 / area1);
    float densidade2 = (populacao2 / area2);
    double pibpercapita1 = (pib1 * 1e9) / (double)populacao1;
    double pibpercapita2 = (pib2 * 1e9) / (double)populacao2;

    double super1 = (pontos1 + populacao1 + area1 + pib1 + pibpercapita1 + densidade1);
    double super2 = (pontos2 + populacao2 + area2 + pib2 + pibpercapita2 + densidade2);

    printf("\nCarta 01\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade capital: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões\n", pib1);
    printf("PIB per Capita: %.2lf\n", pibpercapita1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("Super Poder: %.2lf\n", super1);

    printf("\nCarta 02\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade capital: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);
    printf("PIB per Capita: %.2lf\n", pibpercapita2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("Super Poder: %.2lf\n", super2);

    // Escolha da primeira categoria
    printf("\nEscolha a primeira categoria de comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per Capita\n");
    printf("5. Densidade populacional\n");
    printf("6. Super Poder\n");
    printf("Escolha entre 1-6: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1:
            valor1carta1 = populacao1;
            valor1carta2 = populacao2;
            break;
        case 2:
            valor1carta1 = area1;
            valor1carta2 = area2;
            break;
        case 3:
            valor1carta1 = pib1;
            valor1carta2 = pib2;
            break;
        case 4:
            valor1carta1 = pibpercapita1;
            valor1carta2 = pibpercapita2;
            break;
        case 5:
            valor1carta1 = densidade1;
            valor1carta2 = densidade2;
            break;
        case 6:
            valor1carta1 = super1;
            valor1carta2 = super2;
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    // Escolha da segunda categoria
    printf("\nEscolha a segunda categoria de comparação (diferente da primeira):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per Capita\n");
    printf("5. Densidade populacional\n");
    printf("6. Super Poder\n");
    printf("Escolha entre 1-6: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nOpção inválida.\n");
        return 1;
    }

    switch (opcao2) {
        case 1:
            valor2carta1 = populacao1;
            valor2carta2 = populacao2;
            break;
        case 2:
            valor2carta1 = area1;
            valor2carta2 = area2;
            break;
        case 3:
            valor2carta1 = pib1;
            valor2carta2 = pib2;
            break;
        case 4:
            valor2carta1 = pibpercapita1;
            valor2carta2 = pibpercapita2;
            break;
        case 5:
            valor2carta1 = densidade1;
            valor2carta2 = densidade2;
            break;
        case 6:
            valor2carta1 = super1;
            valor2carta2 = super2;
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    double soma1 = valor1carta1 + valor2carta1;
    double soma2 = valor1carta2 + valor2carta2;

    // Resultado cartas
    printf("\n### Resultado da Comparação ###\n");
    printf("\nCarta 1: %s \n", cidade1);
    printf("Atributo 1: %.2lf\n", valor1carta1);
    printf("Atributo 2: %.2lf\n", valor2carta1);
    printf("Soma dos atributos: %.2lf\n", soma1);

    printf("\nCarta 2: %s \n", cidade2);
    printf("Atributo 1: %.2lf\n", valor1carta2);
    printf("Atributo 2: %.2lf\n", valor2carta2);
    printf("Soma dos atributos: %.2lf\n", soma2);

    
    if (soma1 > soma2) {
        printf("\nCarta 1 venceu!\n");
    } else if (soma1 < soma2) {
        printf("\nCarta 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
