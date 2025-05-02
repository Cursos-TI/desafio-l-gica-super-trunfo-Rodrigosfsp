#include <stdio.h>

int main (){
    
    char estado1 [50];
    char estado2 [50];
    char cidade1 [50]; 
    char cidade2 [50];                                      //Informacões
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;

                            // Leitura de dados do usuario via entrada padrão
    
    printf("Dados da carta 01\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado1);

    printf("Nome da capital:\n");
    scanf ("%s", &cidade1);

    printf("População atual da capital:\n");
    scanf ("%u", &populacao1);

    printf("Quantidade de pontos turísticos na capital:\n");
    scanf ("%d", &pontos1);

    printf("Área da capital em km²:\n");
    scanf ("%f", &area1);

    printf("PIB:\n");
    scanf ("%f", &pib1);

                             // Segunda leitura de dados do usuario via entrada padrão
    
    printf("Dados da carta 02\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado2);

    printf("Nome da capital:\n");
    scanf ("%s", &cidade2);

    printf("População atual da capital:\n");
    scanf ("%u", &populacao2);

    printf("Quantidade de pontos turísticos na capital:\n");
    scanf ("%d", &pontos2);

    printf("Área da capital em km²:\n");
    scanf ("%f", &area2);

    printf("PIB:\n");
    scanf ("%f", &pib2);

    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita1 = (float) (pib1 * 1000000000 / populacao1);
    float pibpercapita2 = (float) (pib2 * 1000000000 / populacao2);
    unsigned long int super1 = (float) pontos1 + populacao1 + area1 + pib1 + pibpercapita1 + 1 / densidade1 ;
    unsigned long int super2 = (float) pontos2 + populacao2 + area2 + pib2 + pibpercapita2 + 1 / densidade2 ;

                            //Resultado antigo
    /*unsigned long int resultadopontos = pontos1 > pontos2;
    unsigned long int resultadopopulacao = populacao1 > populacao2;
    unsigned long int resultadoarea = area1 > area2;
    unsigned long int resultadopib = pib1 > pib2;
    unsigned long int resultadopibpercapita = pibpercapita1 > pibpercapita2;
    unsigned long int resultadodensidade = 1 / densidade1 > 1 / densidade2;
    unsigned long int resultadosuper = super1 > super2;*/

                            //Resultado da primeira leitura
    printf("Carta 01\n");
    printf("Código: A01\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade capital: %s\n", cidade1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Populacão atual da capital: %u de habitantes\n ", populacao1);
    printf("Área da capital: %.3fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("PIBperCapita: %.2f\n", pibpercapita1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("Super poder: %.2u\n ", super1);

                            //Resultado da segunda leitura 

    printf("Carta 02\n");
    printf("Código: A02\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade capital: %s\n", cidade2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Populacão atual da capital: %u de habitantes\n ", populacao2);
    printf("Área da capital: %.3fkm²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("PIBperCapita: %.2f\n", pibpercapita2);
    printf("Densidade populacional: %.2f\n", densidade2); 
    printf("Super poder: %.2u\n ", super2);

                            //Resultado da comparação
                            //Resultado antigo
    /*printf("***Resultado***\n");
    printf("Carta1 = 1, Carta2 = 0\n");
    printf("Comparação de cartas:\n");
    printf("Pontos turisticos: %u\n", resultadopontos);
    printf("População: %u\n", resultadopopulacao);
    printf("Area da capital: %u\n", resultadoarea);
    printf("PIB: %u\n", resultadopib);
    printf("PIBperCapita: %u\n", resultadopibpercapita);
    printf("Densidade populacional: %u\n", resultadodensidade);
    printf("Super poder: %u\n", resultadosuper);*/

                //Resultado novo

        printf("***Comparação populacional***\n");
    printf("Carta 1 - %s:%u\n", cidade1, populacao1);
    printf("Carta 2 - %s:%u\n", cidade2, populacao2);
    if (populacao1 > populacao2)
         {printf("Carta 1 Venceu!");
            }else {
                printf("Carta 2 Venceu!");
            }
    


    return 0;
}