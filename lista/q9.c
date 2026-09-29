#include <stdio.h>
#include <stdlib.h>

char* criarVetorChar(int tam, char letra) {
    
    char *vetor = (char*) malloc(tam * sizeof(char));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return NULL;
    }

    for (int i = 0; i < tam; i++) {
        vetor[i] = letra;
    }

    return vetor;
}