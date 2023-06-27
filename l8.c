#include <stdio.h>
#include <string.h>

#define SUCESSO 0
#define UM 1
#define CINCO 5
#define TAMANHO3 100 
#define LOJAS 7
#define PRODUTOS 5

int matriz1[CINCO][CINCO];
int i, j;

void exercicio1(void) {
	printf("\n");
	printf("\nDigite os numeros equivalentes a elementos para fazer uma matriz 5x5:");
	for (i = SUCESSO; i < CINCO; i++) {
		for (j = SUCESSO; j < CINCO; j++) {
			scanf("%d", &matriz1[i][j]);
		}
	}
	printf("Resultado da matriz 5x5: \n");
	for (i = SUCESSO; i < CINCO; i++) {
		printf("\n");
		for (j = SUCESSO; j < CINCO; j++) {
			printf("%d\t", matriz1[i][j]);
		}
	}
	printf("\n");
}
void dadosmatriz(int x, int y, int matriz[TAMANHO3][TAMANHO3]) {
	int i, j;
	for (i = SUCESSO; i < x; i++) {
		for (j = SUCESSO; j < y; j++) {
			printf("\nDigite o valor para a posicao [%d][%d] da matriz:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}
int somamatriz(int x, int y, int matriz[TAMANHO3][TAMANHO3]) {
	int soma = SUCESSO;
	int i, j;
	for (i = SUCESSO; i < x; i++) {
		for (j = SUCESSO; j < y; j++) {
			soma += matriz[i][j];
		}
	}
	return soma;
}
void exercicio2(void) {
	int x, y;
	printf("\nDigite o valor da linha: ");
	scanf("%i", &x);
	printf("\nDigite o valor da coluna: ");
	scanf("%i", &y);
	int matriz[TAMANHO3][TAMANHO3];
	dadosmatriz(x, y, matriz);
	int soma = somamatriz(x, y, matriz);
	printf("\nO resultado da soma dos valores da matriz eh: %d", soma);
}
void calculovetor(int* tamanho, float vetor[]) {
	printf("\nDigite o valor desejado para o tamanho do vetor (Menor ou igaul a 100):");
	scanf("%i", tamanho);
	if (*tamanho > TAMANHO3) {
		printf("\nValor invalido!");
	}
	else {
		for (int i = SUCESSO; i < *tamanho; i++) {
			printf("\nInforme um numero para o vetor : ");
			scanf("%f", &vetor[i]);
		}
	}
}
void calculomatriz(int n1, int n2, int matriz[][TAMANHO3]) {
	for (int i = SUCESSO; i < n2; i++) {
		for (int j = SUCESSO; j < n1; j++) {
			printf("\nDigite o valor da matriz: ");
			scanf("%i", &matriz[i]);
			printf("\nDigite o valor da matriz: ");
			scanf("%i", &matriz[j]);
		}
	}
}
void multiplicacaovetortriz(int n1, int n2, int matriz[][TAMANHO3], float vetor[], float multiplicacao[]) {
	for (int i = SUCESSO; i < n2; i++) {
		multiplicacao[i] = 0.0;
		for (int j = SUCESSO; j < n1; j++) {
			multiplicacao[i] += matriz[i][j] * vetor[j];
		}
	}
}
void exercicio3(void) {
	float vetor[TAMANHO3];
	int tamanho = SUCESSO;
	calculovetor(&tamanho, vetor);
	int n1 = SUCESSO, n2 = SUCESSO;
	printf("\nDigite as dimensoes da matriz (n x n1):");
	scanf("%i %i", &n2, &n1);
	int matriz[TAMANHO3][TAMANHO3];
	calculomatriz(n1, n2, matriz);
	float multiplicacao[TAMANHO3];
	multiplicacaovetortriz(n1, n2, matriz, vetor, multiplicacao);
	printf("\nO resultado da multiplicacao do vetor pela matriz eh:");
	for (int i = SUCESSO; i < n2; i++) {
		printf("%.2f ", multiplicacao[i]);
	}
	printf("\n");
}
void exercicio4(void) {
	int quantidade[LOJAS][PRODUTOS];
	int total[PRODUTOS] = { SUCESSO };
	int menor_loja = SUCESSO;
	for (int i = SUCESSO; i < LOJAS; i++) {
		printf("Loja %d:\n", i + UM);
		for (int j = SUCESSO; j < PRODUTOS; j++) {
			printf("Quantidade de produtos %d: ", j + UM);
			scanf("%d", &quantidade[i][j]);
			total[j] += quantidade[i][j];
		}
		printf("\n");
	}
	printf("Tabela de Quantidade de Produtos:\n");
	for (int i = SUCESSO; i < PRODUTOS; i++) {
		printf("Produto %d: ", i + UM);
		for (int j = SUCESSO; j < LOJAS; j++) {
			printf("%d ", quantidade[j][i]);
		}
		printf("\n");
	}
	for (int i = UM; i < LOJAS; i++) {
		if (total[i] < total[menor_loja]) {
			menor_loja = i;
		}
	}
	printf("\nA loja com a menor quantidade de  produtos eh a loja: %d", menor_loja + 1);
}
int main(int argc, char** argv) {
	int menuescolha;
	do {
		printf("\nMENU EXERCICIOS:");
		printf("\nDigite o numero (1 a 4) do exercicio que deseja executar:");
		printf("\nSe desejar sair, digite 0!");
		scanf("%i", &menuescolha);
		switch (menuescolha) {
		case 0:
			break;
		case 1:
			exercicio1();
			break;
		case 2:
			exercicio2();
			break;
		case 3:
			exercicio3();
			break;
		case 4:
			exercicio4();
			break;
		default:
			printf("\nO numero digitado nao eh equivalente a nenhum exercicio da lista.");
		}
	} while (menuescolha != 0);
	return SUCESSO;
}

