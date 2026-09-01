#include <stdio.h>



int func(int matriz[4][4], int alvo){
    int contador = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] == alvo && matriz[i][j+1] == alvo && j < 3){
                contador++;
            }
        }
    }
    return contador;
}

int main(){
    int matriz[4][4] = {{1,6,6,6},{2,3,6,6},{6,6,8,6},{6,4,6,8}};
    int alvo = 6;
    printf("Numero de ocorrencias: %d\n", func(matriz, alvo));
    return 0;
}