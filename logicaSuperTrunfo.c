#include <stdio.h>

int main (){
    
    char estado1 [50];
    char estado2 [50];
    char cidade1 [50]; 
    char cidade2 [50];                                      //Informacões
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    double pib1, pib2;
    int opcao;


                            // Leitura de dados do usuario via entrada padrão
    
    printf("Dados da carta 01\n");

    printf("Digite o estado:\n");
    scanf ("%s", estado1);

    printf("Nome da capital:\n");
    scanf ("%s", cidade1);

    printf("População atual da capital:\n");
    scanf ("%lu", &populacao1);

    printf("Quantidade de pontos turísticos na capital:\n");
    scanf ("%d", &pontos1);

    printf("Área da capital em km²:\n");
    scanf ("%f", &area1);

    printf("PIB:\n");
    scanf ("%lf", &pib1);

                // Segunda leitura de dados do usuario via entrada padrão
    
    printf("Dados da carta 02\n");

    printf("Digite o estado:\n");
    scanf("%s", estado2);

    printf("Nome da capital:\n");
    scanf ("%s", cidade2);

    printf("População atual da capital:\n");
    scanf ("%lu", &populacao2);

    printf("Quantidade de pontos turísticos na capital:\n");
    scanf ("%d", &pontos2);

    printf("Área da capital em km²:\n");
    scanf ("%f", &area2);

    printf("PIB:\n");
    scanf ("%lf", &pib2);

    float densidade1 = (populacao1 / area1);
    float densidade2 = (populacao2 / area2);
    double pibpercapita1 = (pib1 * 1e9) / (double) populacao1;
    double pibpercapita2 = (pib2 * 1e9) / (double) populacao2;
    double super1 = (pontos1 + populacao1 + area1 + pib1 + pibpercapita1 + densidade1);
    double super2 = (pontos2 + populacao2 + area2 + pib2 + pibpercapita2 + densidade2);

                            //Resultado da primeira leitura

    printf("Carta 01\n");
    printf("Código: A01\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade capital: %s\n", cidade1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("População atual da capital: %lu de habitantes\n", populacao1);
    printf("Área da capital: %.3fkm²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("PIBperCapita: %.2lf\n", pibpercapita1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("Super poder: %.2lf\n", super1);
    printf("==================================================\n");
                            //Resultado da segunda leitura 

    printf("Carta 02\n");
    printf("Código: A02\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade capital: %s\n", cidade2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("População atual da capital: %lu de habitantes\n", populacao2);
    printf("Área da capital: %.3fkm²\n", area2);
    printf("PIB:%.2lf bilhões de reais\n", pib2);
    printf("PIBperCapita: %.2lf\n", pibpercapita2);
    printf("Densidade populacional: %.2f\n", densidade2); 
    printf("Super poder: %.2lf\n", super2);

    printf("###Super Trunfo###\n");
    printf("Escolha a categoria de comparação:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB. \n");
    printf("4. PIBperCapita. \n");
    printf("5. Densidade populacional. \n");
    printf("6. Super poder. \n");
    printf("Escolha entre 1 - 6:");
    scanf("%d", &opcao);

    switch (opcao)

        {case 1: 
            printf("Comparação de população\n");
            printf("Carta 1: %s - %lu habitantes\n", cidade1, populacao1);
            printf("=======================================\n");
            printf("Carta 2: %s - %lu habitantes\n", cidade2, populacao2);
        if (populacao1 > populacao2){
                printf("Carta 1 Ganhou!\n");
        }else if (populacao1 < populacao2){
                printf("Carta 2 Ganhou!\n");
        }else {
                printf("Empate\n");
            }       
        break;
        case 2: 
                printf("Comparação de Área\n");
                printf("Carta 1: %s - %.3fkm² \n", cidade1, area1);
                printf("=======================================\n");
                printf("Carta 2: %s - %.3fkm² \n", cidade2, area2);
            if (area1 > area2){
                    printf("Carta 1 Ganhou!\n");
            }else if (area1 < area2){
                    printf("Carta 2 Ganhou!\n");
            }else {
                    printf("Empate\n");
            }  
        break;
        case 3: 
                printf("Comparação de PIB\n");
                printf("Carta 1: %s - %.2lf Bilhões de reais \n", cidade1, pib1);
                printf("=======================================\n");
                printf("Carta 2: %s - %.2lf Bilhões de reais \n", cidade2, pib2);
            if (pib1 > pib2){
                printf("Carta 1 Ganhou!\n");
            }else if (pib1 < pib2){
                printf("Carta 2 Ganhou!\n");
            }else {
                printf("Empate\n");
            }  
        break;
        case 4: 
                printf("Comparação de PIBperCapita\n");
                printf("Carta 1: %s - R$ %.2lf  \n", cidade1, pibpercapita1);
                printf("=======================================\n");
                printf("Carta 2: %s - R$ %.2lf  \n", cidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2){
                printf("Carta 1 Ganhou!\n");
            }else if (pibpercapita1 < pibpercapita2){
                printf("Carta 2 Ganhou!\n");
            }else {
                printf("Empate\n");
    }  
        break;
        case 5: 
                printf("Comparação de Densidade populacional\n");
                printf("Carta 1: %s - %.2f  \n", cidade1, densidade1);
                printf("=======================================\n");
                printf("Carta 2: %s - %.2f  \n", cidade2, densidade2);
            if (densidade1 > densidade2){
                printf("Carta 1 Ganhou!\n");
            }else if (densidade1 < densidade2){
                printf("Carta 2 Ganhou!\n");
            }else {
                printf("Empate\n");
                }
        break;
        case 6: 
                printf("Comparação de Super poder\n");
                printf("Carta 1: %s - %.2lf  \n", cidade1, super1);
                printf("=======================================\n");
                printf("Carta 2: %s - %.2lf  \n", cidade2, super2);
            if (super1 > super2){
                printf("Carta 1 Ganhou!\n");
            }else if (super1 < super2){
                printf("Carta 2 Ganhou!\n");
            }else {
                printf("Empate\n");}
         break;
        default:
                printf("Opcão invalida\n");
                printf("Escolha uma opção válida:");
        break;}


    return 0;
}