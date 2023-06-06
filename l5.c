#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

#define SUCESSO 0

float soma(float n1Soma, float n2Soma) {
    return (n1Soma + n2Soma);
}

float produto(float n1Produto, float n2Produto) {
    return (n1Produto * n2Produto);
}

float quociente(float n1Quociente, float n2Quociente) {
    return (n1Quociente / n2Quociente);
}

int idade(int ano, int meses, int dias) {
    int diastot = ((ano * 365) + (meses * 30) + (dias));
    return diastot;
}

void Tempoexprimento(int sec) {
    int horas = (sec / 3600);
    int minutos = ((sec % 3600) / 60);
    int segundos = ((sec % 3600) % 60);
    printf("A quantidade total de horas eh: %ih %im %is\n", horas, minutos, segundos);
}

int EhPrimo(int n1) {
    int contadorNumPrimo = 0;
    for (int i = 1; i <= n1; i++) {
        if (n1 % i == 0) {
            contadorNumPrimo++;
        }
    }
    if (contadorNumPrimo > 2) {
        printf("O numero inserido nao eh primo.");
    }
    else {
        printf("O numero inserido eh primo.");
    }
    return n1;
}

int calculaFatorial(int numFatorial) {
    if (numFatorial >= 0 && numFatorial == (int)numFatorial) {
        int fatorial = 1;
        for (int i = 1; i <= numFatorial; i++) {
            fatorial *= i;
        }
        printf("O fatorial eh: %i", fatorial);
    }
    else {
        printf("\nDigite um numero inteiro e positivo");
    }
    return numFatorial;
}

void notasAluno(float* nota1, float* nota2, float* nota3, float* mediaNotasAlunos) {
    printf("\nDigite a nota 1:");
    scanf("%f", nota1);

    printf("\nDigite a nota 2:");
    scanf("%f", nota2);

    printf("\nDigite a nota 3:");
    scanf("%f", nota3);

    *mediaNotasAlunos = (*nota1 + *nota2 + *nota3) / 3;
}

void foiAprovado(float mediaNotasAlunos) {
    if (mediaNotasAlunos >= 60 && mediaNotasAlunos <= 100) {
        printf("\nAluno Aprovado");
    }
    else {
        printf("\nAluno Reprovado");
    }
}

void nAlunos(int* quantidadeAlunos, int* alunosAprovados, int* alunosReprovados) {
    float nota1 = 0, nota2 = 0, nota3 = 0, mediaNotasAlunos = 0;

    printf("\nDigite a quantidade de alunos que voce quer calcular a media: ");
    scanf("%i", quantidadeAlunos);

    for (int a = 1; a <= *quantidadeAlunos; a++) {
        notasAluno(&nota1, &nota2, &nota3, &mediaNotasAlunos);
        foiAprovado(mediaNotasAlunos);

        if (mediaNotasAlunos >= 60) {
            (*alunosAprovados)++;
        }
        else {
            (*alunosReprovados)++;
        }
    }

    printf("\nAlunos Aprovados: %i", *alunosAprovados);
    printf("\nAlunos Reprovados: %i", *alunosReprovados);
    printf("\nPercentual de aprovacao da turma: %.2f%%", (*alunosAprovados * 100.0) / *quantidadeAlunos);
}

int main(int argc, char** argv) {
    int ano, dias, meses;
    int segundos;
    int opcaoExercicio;
    int contadorFuncaoCalculos = 1;
    int quantidadeAlunos = 0, alunosAprovados = 0, alunosReprovados = 0;
    int numFatorial;
    int n1;
    float n1Soma, n2Soma;
    float n1Produto, n2Produto;
    float n1Quociente, n2Quociente;
    float totsoma, totproduto, totquociente;

    do {
        printf("\nDigite o numero de 1 a 8 do exercicio que deseja executar:");
        printf("\nDigite 0 para sair.");
        printf("\nOpcao:");
        scanf("%i", &opcaoExercicio);

        switch (opcaoExercicio) {
        case 1:
            while (contadorFuncaoCalculos != 0) {
                printf("\n1-Soma");
                printf("\n2-Produto");
                printf("\n3-Quociente");
                printf("\n0-Sair");
                printf("\nEscolha a opcao desejada: ");
                scanf("%i", &opcaoExercicio);

                switch (opcaoExercicio) {
                case 1:
                    printf("\nDigite os dois numeros a serem somados:");
                    printf("\nNumero 1:");
                    scanf("%f", &n1Soma);
                    printf("\nNumero 2:");
                    scanf("%f", &n2Soma);

                    totsoma = soma(n1Soma, n2Soma);
                    printf("\nResultado=%f", totsoma);
                    break;

                case 2:
                    printf("\nDigite os dois numeros a serem multiplicados:");
                    printf("\nNumero 1:");
                    scanf("%f", &n1Produto);
                    printf("\nNumero 2:");
                    scanf("%f", &n2Produto);

                    totproduto = produto(n1Produto, n2Produto);
                    printf("\nResultado=%f", totproduto);
                    break;

                case 3:
                    printf("\nDigite os dois numeros a serem divididos:");
                    printf("\nNumero 1:");
                    scanf("%f", &n1Quociente);
                    printf("\nNumero 2:");
                    scanf("%f", &n2Quociente);

                    totquociente = quociente(n1Quociente, n2Quociente);
                    printf("\nResultado=%f", totquociente);
                    break;

                case 0:
                    contadorFuncaoCalculos = 0;
                    break;

                default:
                    printf("Escolha de 0 a 3");
                    break;
                }
            }
            break;

        case 2:
            printf("\nDigite a quantidade de anos, meses e dias da sua idade:");
            printf("\nAnos:");
            scanf("%i", &ano);
            printf("\nMeses:");
            scanf("%i", &meses);
            printf("\nDias:");
            scanf("%i", &dias);

            int idd = idade(ano, meses, dias);
            printf("Dias totais: %i\n", idd);
            break;

        case 3:
            printf("\nDigite a quantidade de segundos:");
            scanf("%i", &segundos);
            Tempoexprimento(segundos);
            break;

        case 4:
            printf("Insira o numero:");
            scanf("%i", &n1);
            EhPrimo(n1);
            break;

        case 5:
            printf("Insira o numero inteiro e positivo:");
            scanf("%i", &numFatorial);
            calculaFatorial(numFatorial);
            break;

        case 7:
            nAlunos(&quantidadeAlunos, &alunosAprovados, &alunosReprovados);
            break;

        case 0:
            opcaoExercicio = 0;
            break;

        default:
            printf("Escolha uma opcao de 1 a 8.");
            break;
        }
    } while (opcaoExercicio != 0);
    return SUCESSO;
}
