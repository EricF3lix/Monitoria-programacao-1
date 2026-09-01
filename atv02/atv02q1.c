#include <stdio.h>


void substituiMatriz(int matriz[3][3], int x, int y){
    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            if(matriz[i][j] == x){
                matriz[i][j] = y;
            }
        }
    }
}


int main(){
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x = 5;
    int y = 10;

    substituiMatriz(matriz, x, y);

    printf("Matriz atualizada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;


}