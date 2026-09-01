#include <stdio.h>
#include <string.h>



int cadastrarPessoa(char nomes[10][100], char RG[10][100], int contador) {
    if (contador >= 10) {
        printf("O numero maximo de pessoas cadastradas ja foi atingido.\n");
    } else {
        printf("Digite o nome da pessoa que deseja cadastrar:\n");
        fgets(nomes[contador], 100, stdin);

        printf("Digite o RG da pessoa (sem pontos, apenas numeros):\n");
        fgets(RG[contador], 100, stdin);

        printf("Cadastro realizado com sucesso!\n\n");
    }
    contador++;
    return contador;
}

void procurarPessoa(char nomes[10][100], char RG[10][100], int contador) {
    printf("Digite o RG da pessoa que voce deseja encontrar:\n");
    char procurador[100];
    fgets(procurador, 100, stdin);

    int pessoaEncontrada = 0;

    for (int i = 0; i < contador; i++) {
        if (strcmp(RG[i], procurador) == 0) {
            printf("Pessoa encontrada! Nome: %s\n\n", nomes[i]);
            pessoaEncontrada = 1;
            break;
        }
    }

    if (!pessoaEncontrada) {
        printf("Pessoa nao encontrada. Tente novamente.\n\n");
    }
}

int main() {
    int contador = 0, escolha = 0, repeticao = 1;
    
    char nomes[10][100];
    char RG[10][100];

    while (repeticao == 1) {
        printf("1) CADASTRAR PESSOAS\n");
        printf("2) PROCURAR PESSOAS\n");
        printf("3) SAIR\n");
        printf("O que voce deseja fazer? \n");
        
        scanf("%d", &escolha);

        getchar(); 

        if (escolha == 1) {
            contador = cadastrarPessoa(nomes, RG, contador);

        } else if (escolha == 2) {
            procurarPessoa(nomes, RG, contador);
        
        } else if (escolha == 3) {
            repeticao = 0;
            printf("Saindo do programa...\n");
        
        } else {
            printf("Numero invalido. Tente novamente.\n\n");
        }
    }

    return 0;
}
            