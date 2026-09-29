#include <stdio.h>
#include <string.h>

int main(){
	char entrada[12];
	char numeroArquivo[12];
	int i = 0;
	
	FILE *pontArquivo = fopen("isbns_windows.txt", "r");
	
	if (pontArquivo != NULL){
		scanf("%11s", entrada);
		
		while (fgets(numeroArquivo, sizeof(numeroArquivo), pontArquivo) != NULL) {
        
	        numeroArquivo[strcspn(numeroArquivo, "\n")] = '\0';
	
	        if (strcmp(entrada, numeroArquivo) == 0) {
	            i = 1;
	            break;
	        } 
    
		}
	} else{
		printf("Erro ao abrir.");
	}
	
	if(i == 1){
		printf("Codigo ISBN encontrado!");
	} else{
		printf("Codigo ISBN não foi encontrado.");
	}
	
	fclose(pontArquivo);
	return 0;
}
