#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct infoVoo{
	int timestamp;
	char evento;
	int aeroporto;
	int numero;
} Voo;

int quantLinhas(){
	int quant = 0;
	char linha[100];

	FILE *arquivo = fopen("P1_dados-voos-win.csv", "r");
	if(arquivo == NULL){
		return -1;
	}

	fscanf(arquivo, "%*[^\n]%*c"); //ignora o cabecalho

	while(fgets(linha, sizeof(linha), arquivo) != NULL){
		quant++;
	}

	fclose(arquivo);
	return quant;
}

void carregaVoo(int quant, Voo v[]){
	int i;

	FILE *arquivo = fopen("P1_dados-voos-win.csv", "r");

	fscanf(arquivo, "%*[^\n]"); //ignora o cabecalho

	for(i = 0; i < quant; i++){
		fscanf(arquivo, " %d,%c,%d,%d",
			   &v[i].timestamp,
			   &v[i].evento,
			   &v[i].aeroporto,
			   &v[i].numero);
	}

	fclose(arquivo);
}

int menu(int op){
	printf("\n=============================================\n");
	printf("1 - Exibir voos que decolaram\n"
		   "2 - Exibir voos que pousaram\n"
		   "3 - Gerar arquivo\n"
		   "0 - Sair\n"
		   "Digite uma opcao: ");
	scanf("%d", &op);
	printf("=============================================\n");
	
	return op;
}

void imprimeVoo(Voo v){
	printf("%d %d\n", v.timestamp, v.numero);
}

void verificaVoo(int op, int nAeroporto, Voo v[], int quant){
	int i, j = 0;
	
	for(i = 0; i < quant; i++){
    	if(op == 1 && v[i].evento == 'D'){
    		if(nAeroporto == v[i].aeroporto){
	    		imprimeVoo(v[i]);
	    		j++;
			}
		} else if(op == 2 && v[i].evento == 'P'){
			if(nAeroporto == v[i].aeroporto){
	    		imprimeVoo(v[i]);
	    		j++;
			}
		}
	}
	
	if(j == 0){
		printf("Nenhum voo encotrado.\n");
	} else{
		printf("%d voos encontrados no aeroporto %d\n", j, nAeroporto);
	}
}

void geraNovoArquivo(int nAeroporto, Voo v[], int quant){
	int i, j = 0;
	char nomeNovoArquivo[8];
	sprintf(nomeNovoArquivo, "%d.csv", nAeroporto);
	
	FILE *novoArquivo = fopen(nomeNovoArquivo, "a");
	
	fprintf(novoArquivo, "timestamp,evento,aeroporto,voo\n");
	
	for(i = 0; i < quant; i++){
		if(nAeroporto == v[i].aeroporto){
			fprintf(novoArquivo, "%d,%c,%d,%d\n",
								 v[i].timestamp, v[i].evento, v[i].aeroporto, v[i].numero);
			j++;
		}
	}

	fclose(novoArquivo);
	
	if(j == 0){
		printf("Nenhum voo encontrado para o aeroporto dito.\n");
		remove(nomeNovoArquivo);
	} else{
		printf("Arquivo gerado com sucesso!\n");
		printf("%d voos cadastrados!\n", j);
	}
}

int main(){
	int i;
	int op = -1;
	int nAeroporto;
	
	int quant = quantLinhas();
	
	if(quant < 0){
		printf("\nErro ao abrir o arquivo...\n");
		return 1;
	}
	
	Voo v[quant];
	carregaVoo(quant, v);
	
	printf("======BEM-VINDO(A) AO CONTROLE DE VOOS=======");
	
	while(op != 0){
		op = menu(op);
		
		if(op == 1 || op == 2){
			printf("\nDigite o aeroporto que deseja verificar: ");
			scanf(" %d", &nAeroporto);
			verificaVoo(op, nAeroporto, v, quant);
		} else if(op == 3){
			printf("\nDigite o aeroporto que deseja armazenar os voos: ");
			scanf(" %d", &nAeroporto);
			geraNovoArquivo(nAeroporto, v, quant);
		} else if(op == 0){
			printf("\nSaindo do programa...");
		} else{
			printf("\nOpcao invalida. Digite uma opcao valida...\n");
		}
	}
	
	return 0;
}
