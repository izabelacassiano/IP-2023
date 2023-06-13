#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXITENS 50
#define MAXNOMEPRATO 50
#define MAXPRECO 9999.99

#define SUCESSO 0

char nomes[MAXITENS][MAXNOMEPRATO];
float precos[MAXITENS];
int numItens = 0;

void cadastrarPrato() {
    if (numItens == MAXITENS) {
        printf("\nO cardapio está lotado.");
        return;
    }

    printf("\nDigite o nome do prato: ");
    fgets(nomes[numItens], sizeof(nomes[numItens]), stdin);
    nomes[numItens][strcspn(nomes[numItens], "\n")] = '\0';

    printf("Digite o preco do prato em reais (R$00,00): ");
    scanf("%f", &precos[numItens]);
    getchar();

    numItens++;
    printf("\nSeu prato foi cadastrado com sucesso.");
}

void imprimirPrato(int indice) {
    printf("%-50s R$ %.2f\n", nomes[indice], precos[indice]);
}

void imprimirCardapio(void) {
    if (numItens == 0) {
        printf("\nO cardapio se encontra vazio.");
        return;
    }

    printf("\nCardapio:");
    printf("\n%-50s %s", "Prato", "Preco");
    printf("\n---------------------------------------------------------------------\n");

    for (int i = 0; i < numItens; i++) {
        imprimirPrato(i);
    }
}

int main(int argc, char** argv) {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("\n1 - Cadastrar prato.");
        printf("\n2 - Listar cardápio.");
        printf("\n3 - Sair.");
        printf("\nDigite sua opção desejada: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                cadastrarPrato();
                break;
            case 2:
                imprimirCardapio();
                break;
            case 3:
                printf("Saindo.\n");
                break;
            default:
                printf("\nOpção inválida.");
        }
    } while (opcao != 3);

    return SUCESSO;
}
