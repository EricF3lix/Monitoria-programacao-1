#include <stdio.h>

int ehIdentidade(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                if (mat[i][j] != 1) {
                    return 0; 
                }
            } 
            else {
                if (mat[i][j] != 0) {
                    return 0; 
                }
            }
        }
    }
    return 1; 
}
