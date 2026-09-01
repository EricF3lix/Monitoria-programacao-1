#include <stdio.h>

int main(){
    long vetor[5] = {100, 200, 300, 400, 500};
    for(int i = 0; i < 5; i++){
        printf("Valor do vetor atual: %ld\n", vetor[i]);
        vetor[i] = vetor[i] + (vetor[i] *0.05);
        printf("Valor do vetor atualizado: %ld\n", vetor[i]);
    }
    return 0;
}