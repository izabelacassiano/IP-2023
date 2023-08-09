#include <stdio.h>
#include <stdlib.h>

#define MAX_LOJAS 10
#define MAX_PRODUTOS 10
#define SUCESSO 0

int* alocarVetor(int tamanho) {
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    return vetor;
}

float** alocarMatriz(int linhas, int colunas) {
    float** matriz = (float**)malloc(linhas * sizeof(float*));

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (float*)malloc(colunas * sizeof(float));
    }

    return matriz;
}

void lerVetor(int* vetor, int tamanho) {
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

float calcularMedia(int* vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}

int encontrarMaiorElemento(float vetor[], int tamanho, float *maiorValor) {
    int indiceMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > vetor[indiceMaior]) {
            indiceMaior = i;
        }
    }

    *maiorValor = vetor[indiceMaior];
    return indiceMaior;
}

int somaElementosMatriz(int **matriz, int linhas, int colunas) {
    int soma = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

void lerQuantidadeProdutos(int matriz[][MAX_PRODUTOS], int lojas, int produtos) {
    for (int i = 0; i < lojas; i++) {
        printf("Loja %d:\n", i + 1);
        for (int j = 0; j < produtos; j++) {
            printf("Digite a quantidade de produtos %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirTabelaProdutos(int matriz[][MAX_PRODUTOS], int lojas, int produtos) {
    printf("Tabela de Produtos:\n");

    printf("%-10s", "Loja");
    for (int i = 0; i < produtos; i++) {
        printf("%-10s", "Produto");
    }
    printf("\n");
    for (int i = 0; i < lojas; i++) {
        printf("%-10d", i + 1);
        for (int j = 0; j < produtos; j++) {
            printf("%-10d", matriz[i][j]);
        }
        printf("\n");
    }
}

int encontrarLojaMenosProdutos(int matriz[][MAX_PRODUTOS], int lojas, int produtos) {
    int lojaMenosProdutos = 0;
    int menorQuantidade = 0;

    for (int i = 0; i < lojas; i++) {
        int somaProdutos = 0;
        for (int j = 0; j < produtos; j++) {
            somaProdutos += matriz[i][j];
        }
        if (i == 0 || somaProdutos < menorQuantidade) {
            menorQuantidade = somaProdutos;
            lojaMenosProdutos = i;
        }
    }

    return lojaMenosProdutos + 1;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor = alocarVetor(tamanho);

    if (vetor == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Vetor alocado: ");
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i + 1;
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    int linhas, colunas;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    float** matriz = alocarMatriz(linhas, colunas);

    if (matriz == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Matriz alocada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);


void lerQuantidadeProdutos(int matriz[][MAX_PRODUTOS], int lojas, int produtos) {
    for (int i = 0; i < lojas; i++) {
        printf("Loja %d:\n", i + 1);
        for (int j = 0; j < produtos; j++) {
            printf("Digite a quantidade de produtos %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirTabelaProdutos(int matriz[][MAX_PRODUTOS], int lojas, int produtos) {
    printf("Tabela de Produtos:\n");

    printf("%-10s", "Loja");
    for (int i = 0; i < produtos; i++) {
        printf("%-10s", "Produto");
    }
    printf("\n");
    for (int i = 0; i < lojas; i++) {
        printf("%-10d", i + 1);
        for (int j = 0; j < produtos; j++) {
            printf("%-10d", matriz[i][j]);
        }
        printf("\n");
    }
}

int encontrarLojaMenosProdutos(int matriz[][MAX_PRODUTOS], int lojas, int produtos) {
    int lojaMenosProdutos = 0;
    int menorQuantidade = 0;

    for (int i = 0; i < lojas; i++) {
        int somaProdutos = 0;
        for (int j = 0; j < produtos; j++) {
            somaProdutos += matriz[i][j];
        }
        if (i == 0 || somaProdutos < menorQuantidade) {
            menorQuantidade = somaProdutos;
            lojaMenosProdutos = i;
        }
    }

    return lojaMenosProdutos + 1;
}

int main() {
    int lojas, produtos;
    printf("Digite o número de lojas: ");
    scanf("%d", &lojas);
    printf("Digite o número de produtos: ");
    scanf("%d", &produtos);

    int matriz[MAX_LOJAS][MAX_PRODUTOS];

    lerQuantidadeProdutos(matriz, lojas, produtos);
    imprimirTabelaProdutos(matriz, lojas, produtos);

    int lojaMenosProdutos = encontrarLojaMenosProdutos(matriz, lojas, produtos);
    printf("\nA loja com menos produtos é: %d\n", lojaMenosProdutos);
}

    return SUCESSO;
}
