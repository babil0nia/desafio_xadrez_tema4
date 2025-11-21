#include <stdio.h>

void mover_torre_recursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Direita\n");
    mover_torre_recursivo(casas_restantes - 1);
}

void mover_rainha_recursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha_recursivo(casas_restantes - 1);
}

void mover_bispo_recursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Cima Direita\n");
    mover_bispo_recursivo(casas_restantes - 1);
}

int main() {
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    const int CAVALO_VERTICAL = 2;
    const int CAVALO_HORIZONTAL = 1;
    
    printf("========================================\n");
    printf("   SIMULADOR DE MOVIMENTOS - XADREZ\n");
    printf("        NÍVEL MESTRE\n");
    printf("========================================\n\n");
    
    printf("=== Movimento da Torre ===\n");
    mover_torre_recursivo(CASAS_TORRE);
    printf("\n");
    
    printf("=== Movimento do Bispo ===\n");
    mover_bispo_recursivo(CASAS_BISPO);
    printf("\n");
    
    printf("=== Movimento da Rainha ===\n");
    mover_rainha_recursivo(CASAS_RAINHA);
    printf("\n");
    
    printf("=== Movimento do Cavalo ===\n");
    int movimentos_realizados = 0;
    int fase_movimento = 0;
    
    for (fase_movimento = 0; fase_movimento < 2; fase_movimento++) {
        int casas_fase = (fase_movimento == 0) ? CAVALO_VERTICAL : CAVALO_HORIZONTAL;
        
        for (int casa = 0; casa < casas_fase; casa++) {
            if (fase_movimento == 0) {
                printf("Cima\n");
                movimentos_realizados++;
                
                if (casa < CAVALO_VERTICAL - 1) {
                    continue;
                }
            } else {
                printf("Direita\n");
                movimentos_realizados++;
                
                if (movimentos_realizados >= (CAVALO_VERTICAL + CAVALO_HORIZONTAL)) {
                    break;
                }
            }
        }
        
        if (movimentos_realizados >= (CAVALO_VERTICAL + CAVALO_HORIZONTAL)) {
            break;
        }
    }
    
    printf("\n");
    printf("========================================\n");
    printf("   SIMULAÇÃO CONCLUÍDA COM SUCESSO!\n");
    printf("========================================\n");
    
    return 0;
}