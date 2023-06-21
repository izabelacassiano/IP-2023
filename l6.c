#include <stdio.h>

#define TAMANHO1 20
#define TAMANHO2 10
#define TAMANHO3 10

#define SUCESSO 0;

int encontrarMenor(int vetor[], int tamanho) {
    int menor = vetor[0];
    int indiceMenor = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            indiceMenor = i;
        }
    }

    return indiceMenor;
}

int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    int indiceMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            indiceMaior = i;
        }
    }

    return indiceMaior;
}

void questao1() {
    int valores[TAMANHO1];

    printf("Digite 20 valores inteiros:\n");
    for (int i = 0; i < TAMANHO1; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int indiceMenor = encontrarMenor(valores, TAMANHO1);
    int indiceMaior = encontrarMaior(valores, TAMANHO1);

    printf("O menor valor é %d, no índice %d.\n", valores[indiceMenor], indiceMenor);
    printf("O maior valor é %d, no índice %d.\n", valores[indiceMaior], indiceMaior);
}

void multiplicarVetorPorEscalar(float vetor[], int tamanho, float escalar) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] *= escalar;
    }
}

void questao2() {
    float vetor[TAMANHO2];
    float escalar;

    printf("Digite %d valores reais:\n", TAMANHO2);
    for (int i = 0; i < TAMANHO2; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("Digite um valor escalar: ");
    scanf("%f", &escalar);

    multiplicarVetorPorEscalar(vetor, TAMANHO2, escalar);

    printf("Resultado da multiplicação do vetor pelo escalar:\n");
    for (int i = 0; i < TAMANHO2; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

float calcularProdutoEscalar(int vetor1[], int vetor2[], int tamanho) {
    float produtoEscalar = 0.0;

    for (int i = 0; i < tamanho; i++) {
        produtoEscalar += vetor1[i] * vetor2[i];
    }

    return produtoEscalar;
}

void questao3() {
    int vetor1[TAMANHO3];
    int vetor2[TAMANHO3];

    printf("Digite %d valores inteiros para o primeiro vetor:\n", TAMANHO3);
    for (int i = 0; i < TAMANHO3; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite %d valores inteiros para o segundo vetor:\n", TAMANHO3);
    for (int i = 0; i < TAMANHO3; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    float produtoEscalar = calcularProdutoEscalar(vetor1, vetor2, TAMANHO3);

    printf("O produto escalar dos dois vetores é %.2f\n", produtoEscalar);
}

float calcularMedia(int vetor[], int tamanho) {
    float soma = 0.0;

    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return soma / tamanho;
}

void questao4() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite %d números inteiros para o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    float media = calcularMedia(vetor, tamanho);

    printf("A média aritmética dos valores é %.2f\n", media);
}

void questao5() {
    int valores[TAMANHO1];

    printf("Digite 20 valores inteiros:\n");
    for (int i = 0; i < TAMANHO1; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int indiceMenor = encontrarMenor(valores, TAMANHO1);
    int indiceMaior = encontrarMaior(valores, TAMANHO1);

    printf("O menor valor é %d, no índice %d.\n", valores[indiceMenor], indiceMenor);
    printf("O maior valor é %d, no índice %d.\n", valores[indiceMaior], indiceMaior);
}

void questao6() {
    float vetor[TAMANHO2];
    float escalar;

    printf("Digite %d valores reais:\n", TAMANHO2);
    for (int i = 0; i < TAMANHO2; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("Digite um valor escalar: ");
    scanf("%f", &escalar);

    multiplicarVetorPorEscalar(vetor, TAMANHO2, escalar);

    printf("Resultado da multiplicação do vetor pelo escalar:\n");
    for (int i = 0; i < TAMANHO2; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

void questao7() {
    int vetor1[TAMANHO3];
    int vetor2[TAMANHO3];

    printf("Digite %d valores inteiros para o primeiro vetor:\n", TAMANHO3);
    for (int i = 0; i < TAMANHO3; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite %d valores inteiros para o segundo vetor:\n", TAMANHO3);
    for (int i = 0; i < TAMANHO3; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    float produtoEscalar = calcularProdutoEscalar(vetor1, vetor2, TAMANHO3);

    printf("O produto escalar dos dois vetores é %.2f\n", produtoEscalar);
}

void calcularFibonacci(int vetor[], int tamanho) {
    vetor[0] = 1;
    vetor[1] = 1;

    for (int i = 2; i < tamanho; i++) {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }
}

void questao8() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int fibonacci[N];

    calcularFibonacci(fibonacci, N);

    printf("Série de Fibonacci com os primeiros %d termos:\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
}

int main() {
    int opcao;

    do {
        printf("\nMENU:\n");
        printf("Questão 01\n");
        printf("Questão 02\n");
        printf("Questão 03\n");
        printf("Questão 04\n");
        printf("Questão 05\n");
        printf("Questão 06\n");
        printf("Questão 07\n");
        printf("Questão 08\n");
        printf("Escolha a opção (0 para sair): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("\nEncerrando o programa...\n");
                break;
            case 1:
                questao1();
                break;
            case 2:
                questao2();
                break;
            case 3:
                questao3();
                break;
            case 4:
                questao4();
                break;
            case 5:
                questao5();
                break;
            case 6:
                questao6();
                break;
            case 7:
                questao7();
                break;
            case 8:
                questao8();
                break;
            default:
                printf("\nOpção inválida!\n");
                break;
        }
    } while (opcao != 0);

    return SUCESSO;
}
