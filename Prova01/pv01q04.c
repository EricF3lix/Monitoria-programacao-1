#include <stdio.h>



int func(char V[], int n){
    int contador = 0;
    for(int i = 0; i < n; i++){
        if(V[i] == 'a' || V[i] == 'e' || V[i] == 'i' || V[i] == 'o' || V[i] == 'u' || V[i] == 'A' || V[i] == 'E' || V[i] == 'I' || V[i] == 'O' || V[i] == 'U'){
            contador++;
        }
    }
    return contador;
}

int main(){
    char V[] = "Hello, World!";
    int n = 13;
    printf("Numero de vogais: %d\n", func(V, n));
    return 0;
}


/*  include <stdio.h>
#include <ctype.h> 

int func(char V[], int n) {
    int contador = 0;
    
    for (int i = 0; i < n; i++) {
        char c = tolower(V[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    
    return contador;
}*/