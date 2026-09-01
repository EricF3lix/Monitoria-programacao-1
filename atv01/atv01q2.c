#include <stdio.h>
#include <string.h>

int main() {
    int contador = 0, escolha = 0, repeticao = 1, pessoaEncontrada = 0;
    char nomes[10][100], RG[100][100], *p;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 100; j++) {
            nomes[i][j] = ' ';
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            RG[i][j] = ' ';
        }
    }

    while (repeticao == 1) {
        printf("1) CADASTRAR PESSOAS\n");
        printf("2) PROCURAR PESSOAS\n");
        printf("O que voce deseja fazer? \n");
        scanf("%d", &escolha);
        getchar();

        if (escolha == 1) {
            if (contador >= 10)
                printf("O número máximo de pessoas cadastradas já foi atingido\n");
            else {

                printf("Digite o nome da pessoa que deseja cadastrar:\n");
                fgets(nomes[contador], 100, stdin);

                if ((p = strchr(nomes[contador], '\n')) != NULL) *p = '\0';

                printf("Digite o RG da pessoa (sem pontos, apenas números):\n");
                fgets(RG[contador], 100, stdin);

                if ((p = strchr(RG[contador], '\n')) != NULL) *p = '\0';
                contador++;
            }

        } else if (escolha == 2) {
            printf("Digite o RG da pessoa que você deseja encontrar:\n");
            char procurador[100];
            fgets(procurador, 100, stdin);

            if ((p = strchr(procurador, '\n')) != NULL) *p = '\0';

            for (int i = 0; i < contador; i++) {
                if (strcmp(RG[i], procurador) == 0) {
                    printf("Pessoa encontrada! Nome: %s\n", nomes[i]);
                    pessoaEncontrada = 1;
                    break;
                } else {
                pessoaEncontrada = 0;
                }
            }

            if (pessoaEncontrada == 0) {
                printf("Pessoa não encontrada. Tente novamente.\n");
            }

        } else {
            printf("Número inválido. Tente novamente.\n");
        }
    }

    return 0;
}