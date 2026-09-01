#include <stdio.h>


int movimentacao(int *linha, int *coluna, char movimento) {
    if (movimento == 'n') {
            if (*linha > 0) {
                *linha = *linha - 1;
            } else {
                printf(">> Voce esta na borda norte, nao pode avancar!\n");
            }
            return 1;
        } else if (movimento == 's') {
            if (*linha < 9) {
                *linha = *linha + 1;
            } else {
                printf(">> Voce esta na borda sul, nao pode avancar!\n");
            }
            return 1;
        } else if (movimento == 'l') {
            if (*coluna < 9) {
                *coluna = *coluna + 1;
            } else {
                printf(">> Voce esta na borda leste, nao pode avancar!\n");
            }
            return 1;
        }else if(movimento == 'o'){
            if(*coluna > 0){
                *coluna = *coluna - 1;
            } else {
                printf(">> Voce esta na borda oeste, nao ultrapasse!\n");
            }
            return 1;
        }else if(movimento == 'x'){
            printf("Encerrando o simulador...\n"); 
            return 0;
        }else {
            printf(">> Comando invalido! Use n, s, l, o ou x.\n");
            return 1;
        }

}

void imprimirMapa(int mapa[10][10]) {
    printf("\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (mapa[i][j] == 1) {
                printf(" # ");
            } else {
                printf(" . ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int mapa[10][10];
    int linha, coluna;
    char movimento;
    int i, j;
    int repeticao = 1;

    linha = 5;
    coluna = 5;

    printf("Comandos: n (norte), s (sul), l (leste), o (oeste)\n");
    printf("Digite X para encerrar.\n");

    while (repeticao == 1) {

        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                mapa[i][j] = 0;
            }
        }

        mapa[linha][coluna] = 1;

        imprimirMapa(mapa);
            
        printf("\nPosicao atual: (%d, %d)\n", linha, coluna);
        printf("Digite o movimento: ");
        scanf(" %c", &movimento);

        repeticao = movimentacao(&linha, &coluna, movimento);
    }
    return 0;
}
        