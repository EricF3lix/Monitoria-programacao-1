#include <stdio.h>

void trocadevetor(int vetor1[15], int vetor2[15]){
    int numeroAtual;
    int existe;
    int pos_vetor2 = 0;

    for (int i = 0; i < 15; i++){
        existe = 0;
        numeroAtual = vetor1[i];
        for (int j = 0; j < 15; j++){
            if (numeroAtual == vetor2[j]){
                existe = 1;
                break;
            }
        }

        if (existe == 0){
            vetor2[pos_vetor2] = numeroAtual;
            pos_vetor2++;
        }
    }
}

int main(){

    int vetor1[15] = {1,1,2,3,4,5,4,8,9,4,3,7,1,10,5};
    int vetor2[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    trocadevetor(vetor1, vetor2);

    for (int i = 0; i < 15; i++){
        printf("Vetor 1[%d] = %d\n", i, vetor1[i]);
    }

    printf("\n");

    for (int i = 0; i < 15; i++){
        printf("Vetor 2[%d] = %d\n", i, vetor2[i]);
    }

    return 0;
}