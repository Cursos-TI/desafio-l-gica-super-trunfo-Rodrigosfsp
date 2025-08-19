#include <stdio.h>
#include <string.h>             // Bibliotecas

typedef struct {
    char nome [30];          // Criação de struct para armazenar dados
    char cor [15];
    int tropas;

}Territorio;

#define MAX_TERRITORIOS 5  // Definição de numero maximo de cadastro de territorios

int main (){                // Funçãao principal

Territorio territorios[MAX_TERRITORIOS]; // Vetor de structs que guardará os 5 cadastros

for (int i = 0; i < MAX_TERRITORIOS; i++) // Loop de entrada de dados
{
    printf("\n=== Cadastro do território %d/%d ===\n", i+1, MAX_TERRITORIOS); // Titulo da entrada de dados
    
    printf("Nome do território: ");
    scanf("%s", territorios[i].nome);
    printf("Cor do exercito: ");                      // Entrada de dados
    scanf("%s", territorios[i].cor);                
    printf("Quantidade de tropas: ");
    scanf("%d", &territorios[i].tropas);

}
    printf("\n===== Territórios cadastrados =====\n");  // Titulo da saida de dados no terminal
        for (int i = 0; i < MAX_TERRITORIOS; i++) {     // Loop para saida de todas as entradas de dados
            printf("\nTerritório %d:\n", i+1);
            printf("  Nome : %s\n", territorios[i].nome);
            printf("  Cor  : %s\n", territorios[i].cor);
            printf("  Tropas: %d\n", territorios[i].tropas);
}

    return 0;
}