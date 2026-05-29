#include <stdio.h>

int main() {

    //declaração de variaveis//

    //Matriz 10x10 representando o tabuleiro//
    int tabuleiro[10][10];

    // Vetores representando os navios//
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    //Coordenadas iniciais dos navios//
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    int linhaVertical = 5;
    int colunaVertical = 1;

    //Variáveis de control//
    int i, j;

    // Preenche todas as posições com 0
    for(i = 0; i < 10; i++) {

        for(j = 0; j < 10; j++) {

            tabuleiro[i][j] = 0;
        }
    }

    //navil na orizontal//

    //Verifica se o navio cabe no tabuleiro//
    if(colunaHorizontal + 3 <= 10) {

        for(i = 0; i < 3; i++) {

            // Verifica se a posição está livre//
            if(tabuleiro[linhaHorizontal][colunaHorizontal + i] == 0) {

                tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
            }
        }
    }

    //navil na vertical//

    // Verifica se o navio cabe no tabuleiro//
    if(linhaVertical + 3 <= 10) {

        for(i = 0; i < 3; i++) {

            // Verifica se a posição está livre//
            if(tabuleiro[linhaVertical + i][colunaVertical] == 0) {

                tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
            }
        }
    }


    printf("TABULEIRO BATALHA NAVAL\n\n");

    //Exibe os números das colunas//
    printf("   ");

    for(j = 0; j < 10; j++) {

        printf("%2d ", j + 1);
    }

    printf("\n");

    //Exibe as linhas com letras//
    for(i = 0; i < 10; i++) {

        //Letras das linhas//
        printf("%c  ", 'A' + i);

        //Valores do tabuleiro//
        for(j = 0; j < 10; j++) {

            printf("%2d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}