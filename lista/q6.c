#include <stdio.h>


void rotacionar(int  k, int vetor[k], int quantidadeDePosicao){
    int vetorNovo[k];
    for ( int i = 0 ; i < k ; i++){
        if (i + quantidadeDePosicao >=k){
            int posicaoCorreta = (i+quantidadeDePosicao) - k;
            vetorNovo[posicaoCorreta] = vetor[i];
        } else{
            vetorNovo[i+quantidadeDePosicao] = vetor[i];
        }
    }

     for ( int i = 0 ; i < k ; i++){
        vetor[i] = vetorNovo[i];
     }
}

int main(){
    int k;
    int quantidadeDePosicao;
    
    printf("Tamanho do vetor: \n");
    scanf("%d", &k);
    
    int vetor[k];
    
    for ( int i = 0 ; i < k ; i++){
        
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vetor[i]);
        printf("\n");

    }
    
    printf("Quantas posicoes a direita: \n");
    scanf("%d", &quantidadeDePosicao);
    
    rotacionar(k, vetor, quantidadeDePosicao);

     for ( int i = 0 ; i < k ; i++){
        printf("%d ", vetor[i]);
     }
    

return 0;

}
