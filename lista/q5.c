#include <stdio.h>

int func(int matriz[4][4], int alvo){
    int contadora = 0;
    for (int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            if(matriz[i][j] == alvo && matriz[i][j]==matriz[i][j+1]){
                contadora++;
            }

        }         
    }
    return contadora;
}

int main(){



    int matriz[4][4] = {{1,6,6,6},{2,3,6,6},{6,6,8,6},{6,4,6,8}};
    
    
    printf("%d", func(matriz, 6));
    return 0;
}