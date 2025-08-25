#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // preencher tabuleiro com 0 (água)
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            tabuleiro[i][j] = 0;
        }
    }

    // colocar 4 navios de tamanho 3
    // dois normais
    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;

    tabuleiro[2][5] = 3;
    tabuleiro[3][5] = 3;
    tabuleiro[4][5] = 3;

    // dois em diagonal
    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;

    tabuleiro[4][9] = 3;
    tabuleiro[5][8] = 3;
    tabuleiro[6][7] = 3;

    // agora criar as habilidades (matriz 5x5 cada)
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // cone
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j >= 2 - i && j <= 2 + i){
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    // cruz
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==2 || j==2){
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }

    // octaedro
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(abs(i-2) + abs(j-2) <= 2){
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    // aplicar habilidades no tabuleiro
    // cone no ponto (2,2)
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            int linha = 2 - 2 + i;
            int coluna = 2 - 2 + j;
            if(linha>=0 && linha<TAM && coluna>=0 && coluna<TAM){
                if(cone[i][j]==1 && tabuleiro[linha][coluna]==0){
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // cruz no ponto (5,5)
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            int linha = 5 - 2 + i;
            int coluna = 5 - 2 + j;
            if(linha>=0 && linha<TAM && coluna>=0 && coluna<TAM){
                if(cruz[i][j]==1 && tabuleiro[linha][coluna]==0){
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // octaedro no ponto (7,7)
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            int linha = 7 - 2 + i;
            int coluna = 7 - 2 + j;
            if(linha>=0 && linha<TAM && coluna>=0 && coluna<TAM){
                if(octaedro[i][j]==1 && tabuleiro[linha][coluna]==0){
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // mostrar tabuleiro final
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}