#include <stdio.h>

int main() {
   
    float numero1 = 7.3;
    float numero2;

    float *fPtr;

    fPtr = &numero1;

    
    printf("Valor apontado por fPtr %.1f\n", *fPtr);

    numero2 = *fPtr;

    
    printf("Valor de numero2: %.1f\n", numero2);

   
    printf("Endereco de numero1: %p\n", &numero1);

    
    printf(" Endereco armazenado em fPtr: %p\n", fPtr);

    return 0;
}