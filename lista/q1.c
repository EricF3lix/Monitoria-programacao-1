#include <stdio.h>

int buscaPrimeiro(int V[],int tamanho, int valor){
    for(int i=0; i<tamanho; i++){
        if(V[i] == valor){
            return i;
        }
    }
    return -1;
}