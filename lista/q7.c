#include <stdio.h>



void somaVetor(int A[], int B[], int C[]) {
    for ( int i = 0 ; i < 3 ; i++){
        C[i] = A[i] + B[i];

    }



}

int main(){
    int A[3] = {1, 2, 3};
    int B[3] = {4, 5, 6};
    int C[3];
    
    somaVetor(A, B, C);

    return 0;
}
