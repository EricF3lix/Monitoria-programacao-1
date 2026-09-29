#include <stdio.h>

int somaColuna(int matriz[5][5], int X) {
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += matriz[i][X];
    }

    return soma;
}