#include <stdio.h>

void divideMatriz(int matrizPrincipal[4][4], int matriz1[2][2], int matriz2[2][2], int matriz3[2][2], int matriz4[2][2]){
    for (int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            matriz1[i][j] = matrizPrincipal[i][j];
        }
   }

   for (int i = 0 ; i < 2 ; i++){
        for (int j = 2 ; j < 4 ; j++){
            matriz2[i][j-2] = matrizPrincipal[i][j];
        }
   }

   for (int i = 2 ; i < 4 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            matriz3[i-2][j] = matrizPrincipal[i][j];
        }
   }

   for (int i = 2 ; i < 4 ; i++){
        for (int j = 2 ; j < 4 ; j++){
            matriz4[i-2][j-2] = matrizPrincipal[i][j];
        }
   }

}



int achaMaior(int maiorNumero[2][2]){
    int maior = maiorNumero[0][0];
    for (int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            if (maiorNumero[i][j] > maior){
                maior = maiorNumero[i][j];
            }
            
        }
   }
   return maior;

}

void descobreMaior(int matriz1[2][2], int matriz2[2][2], int matriz3[2][2], int matriz4[2][2], int matrizNova[2][2]){

    matrizNova[0][0] = achaMaior(matriz1);
    matrizNova[0][1] = achaMaior(matriz2);
    matrizNova[1][0] = achaMaior(matriz3);
    matrizNova[1][1] = achaMaior(matriz4);
    




}


void imprimeMatriz(int matrizImpressa[2][2]){
    for (int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            printf("%d ", matrizImpressa[i][j]);
        }
    
        printf("\n");
    }
}



int main(){
    int matriz1[2][2], matriz2[2][2], matriz3[2][2], matriz4[2][2], matrizNova[2][2];
    
    int matrizPrincipal[4][4] = {
        {3, 7, 2, 5},
        {1, 6, 9, 3},
        {4, 4, 8, 2},
        {3, 5, 6, 1}
    };

    divideMatriz(matrizPrincipal, matriz1, matriz2, matriz3, matriz4);
    descobreMaior( matriz1,  matriz2,  matriz3, matriz4, matrizNova);
    imprimeMatriz(matrizNova);

}