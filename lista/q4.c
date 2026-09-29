#include <stdio.h>


int acharIndice(char caracteres[15]){
    for(int i = 0 ; i < 14 ; i++){
        if(caracteres[i]==caracteres[i+1]){
            return i;
        }
    }
    
    return -1;

}






int main(){
    char caracteres[15] = { 'a', 'f', 'd', 'a', 'o', '2','k', 'h', 'd', 'd', 'a', 'z', 'o', 'l', 'k'};
    printf("resultado: %d", acharIndice(caracteres));
}