#include <stdio.h>

void rotacionaMatriz(int matriz[4][4]) {
    int matrizTemp[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrizTemp[j][3 - i] = matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = matrizTemp[i][j];
        }
    }
}