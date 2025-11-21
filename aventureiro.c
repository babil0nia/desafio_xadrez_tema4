
#include <stdio.h>

int main() {

    int casas_torre = 5;    
    int casas_bispo = 5;    
    int casas_rainha = 8;   

    int casas_vertical = 2;    
    int casas_horizontal = 1;  
    
   
    int contador_bispo = 0;
    int contador_rainha = 0;
    int contador_horizontal = 0;
    
    printf("========================================\n");
    printf("   SIMULADOR DE MOVIMENTOS - XADREZ\n");
    printf("========================================\n\n");
    
    // ========================================
    // MOVIMENTO DA TORRE
    // Estrutura de repetição: FOR
    // Movimento: 5 casas para a DIREITA
    // ========================================
    printf("=== Movimento da Torre ===\n");
    printf("A Torre move-se 5 casas para a direita:\n\n");
    
   
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    // ========================================
    // MOVIMENTO DO BISPO
    // Estrutura de repetição: WHILE
    // Movimento: 5 casas na DIAGONAL (cima-direita)
    // ========================================
    printf("=== Movimento do Bispo ===\n");
    printf("O Bispo move-se 5 casas na diagonal superior direita:\n\n");
    
    
    while (contador_bispo < casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;  
    }
    
    printf("\n");
    
    // ========================================
    // MOVIMENTO DA RAINHA
    // Estrutura de repetição: DO-WHILE
    // Movimento: 8 casas para a ESQUERDA
    // ========================================
    printf("=== Movimento da Rainha ===\n");
    printf("A Rainha move-se 8 casas para a esquerda:\n\n");
    
    
    do {
        printf("Esquerda\n");
        contador_rainha++; 
    } while (contador_rainha < casas_rainha);
    
    printf("\n");
    printf("========================================\n");
    printf("   SIMULAÇÃO CONCLUÍDA COM SUCESSO!\n");
    printf("========================================\n");
    
    return 0;
}