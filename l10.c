#include <stdio.h>
#define SUCESSO 0
#define max_nome 10
#define max_curso 20
#define max_notas 3

// Questao 1
typedef struct Aluno
{
    int matricula;
    char nome[max_nome];
    char curso[max_curso];
    float altura;

} aluno;

aluno dadosAluno(aluno aluno1)
{
    printf("Digite o numero de matricula do aluno:\n ");
    scanf("%d", &aluno1.matricula);
    getchar();
    printf("Digite o nome do aluno:\n ");
    fgets(aluno1.nome, max_nome, stdin);
    printf("Digite o curso do aluno:\n ");
    scanf(aluno1.curso, max_curso, stdin);
    printf("Digite a altura do aluno:\n ");
    scanf("%f", &aluno1.altura);
    getchar();

    return (aluno1);
}

void imprimirDadosAluno(aluno aluno1)
{
    printf("Num. Matricula: %d\n", aluno1.matricula);
    printf("Nome: %s", aluno1.nome);
    printf("Curso: %s", aluno1.curso);
    printf("Altura: %2.f\n", aluno1.altura);
}

void imprimirDadosVetorAluno(aluno *aluno1, int quantidadeAlunos)
{
    int i;

    for (i = 0; i < quantidadeAlunos; i++)
    {

        printf("Dados Aluno:\n ");
        printf(" Num. Matricula: %d\n", aluno1[i].matricula);
        printf("Nome: %s", aluno1[i].nome);
        printf("Curso: %s", aluno1[i].curso);
        printf("Altura: %2.f\n", aluno1[i].altura);
    }
}

void exercicio1()
{

    aluno aluno1;

    aluno1 = dadosAluno(aluno1);

    imprimirDadosAluno(aluno1);

}
typedef struct Aluno
{
    int matricula;
    char nome[max_nome];
    char curso[max_curso];
    float altura;
    float nota1, nota2, nota3;

} aluno;

aluno dadosAluno(aluno aluno1)
{
    printf("Digite o numero de matricula do aluno:\n ");
    scanf("%d%*c", &aluno1.matricula);
    getchar();
    printf("Digite o nome do aluno:\n ");
    fgets(aluno1.nome, max_nome, stdin);
    printf("Digite o curso do aluno:\n ");
    scanf(aluno1.curso, max_curso, stdin);
    printf("Digite a altura do aluno:\n ");
    scanf("%f%*c", &aluno1.altura);
    getchar();
    printf("Digite a nota 1 do aluno: ");
    scanf("%f%*c", &aluno1.nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f%*c", &aluno1.nota2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f%*c", &aluno1.nota3);


    return (aluno1);
}

void imprimirDadosAluno(aluno aluno1)
{
    printf(" Num Matricula: %d\n", aluno1.matricula);
    printf("Nome: %s", aluno1.nome);
    printf("Curso: %s", aluno1.curso);
    printf("Altura: %2.f\n", aluno1.altura);
    printf("Notas: %2.f, %2.f, %2.f", aluno1.nota1, aluno1.nota2, aluno1.nota3);
    printf("Media das notas: %2.f", aluno1.mediaNotas)
}

void imprimirDadosVetorAluno(aluno *aluno1, int quantidadeAlunos)
{
    int i;

    for (i = 0; i < quantidadeAlunos; i++)
    {

        printf("Dados do Aluno:\n ");
        printf(" Num.Matricula: %d\n", aluno1[i].matricula);
        printf("Nome: %s", aluno1[i].nome);
        printf("Curso: %s", aluno1[i].curso);
        printf("Altura: %2.f\n", aluno1[i].altura);
    }
}


void exercicio2()
{

    aluno aluno1;

    aluno1 = dadosAluno(aluno1);

    imprimirDadosAluno(aluno1);

    aluno1.mediaNotas =  aluno1.nota1 +  aluno1.nota2 +  aluno1.nota3/3;

}

int main(int argc , char** argv) {

    int questao;
 do
 {
     printf("Digite o numero da questao escolhida (1 a 3): ");
     scanf("%d", &questao);

    switch (questao)
     {
        case 1:
            exercicio1();
            break;
        case 2:
            exercicio2();
            break;
        case 3:
            exercicio3();
            break;
default:
         break;
     }
 } while (questao != 0);
return SUCESSO;
 }
