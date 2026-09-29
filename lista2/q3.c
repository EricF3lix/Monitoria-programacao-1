#include <stdio.h>

int maiorSequencia(char vetor[], int n) {
    int max = 1;
    int sequenciaAtual = 1;

    for (int i = 1; i < n; i++) {
        if (vetor[i] == vetor[i - 1]) {
            sequenciaAtual++;
            if (sequenciaAtual > max) {
                max = sequenciaAtual;
            }
        } else {
            sequenciaAtual = 1;
        }
    }

    return max;
}