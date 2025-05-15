#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int navio1_linha_inicial, navio1_coluna_inicial;
    int navio2_linha_inicial, navio2_coluna_inicial;
    int tamanho_navio = 3;

    // Inicializar o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Definir coordenadas iniciais dos navios (exemplo)
    navio1_linha_inicial = 5;
    navio1_coluna_inicial = 4; // Horizontal

    navio2_linha_inicial = 7;
    navio2_coluna_inicial = 4; // Vertical

    // Validar e posicionar o navio 1 (horizontal)
    if (navio1_coluna_inicial + tamanho_navio > 10) {
        printf("Erro: Navio 1 excede o limite do tabuleiro.\n");
    } else {
        int sobreposicao = 0;
        for (int j = navio1_coluna_inicial; j < navio1_coluna_inicial + tamanho_navio; j++) {
            if (tabuleiro[navio1_linha_inicial][j] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (sobreposicao) {
            printf("Erro: Navio 1 sobrepõe outro navio.\n");
        } else {
            for (int j = navio1_coluna_inicial; j < navio1_coluna_inicial + tamanho_navio; j++) {
                tabuleiro[navio1_linha_inicial][j] = 3;
            }
        }
    }

    // Validar e posicionar o navio 2 (vertical)
    if (navio2_linha_inicial + tamanho_navio > 10) {
        printf("Erro: Navio 2 excede o limite do tabuleiro.\n");
    } else {
        int sobreposicao = 0;
        for (int i = navio2_linha_inicial; i < navio2_linha_inicial + tamanho_navio; i++) {
            if (tabuleiro[i][navio2_coluna_inicial] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (sobreposicao) {
            printf("Erro: Navio 2 sobrepõe outro navio.\n");
        } else {
            for (int i = navio2_linha_inicial; i < navio2_linha_inicial + tamanho_navio; i++) {
                tabuleiro[i][navio2_coluna_inicial] = 3;
            }
        }
    }

    // Exibir o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}