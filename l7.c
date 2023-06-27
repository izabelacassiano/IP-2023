#include <stdio.h>
#include <string.h>


#define SUCESSO 0
#define TAMANHO1 51
#define TAMANHO2 201
#define UM 1

void exercicio1(void) {
	printf("\n");
	char string[TAMANHO1];
	int contazero = SUCESSO;
	int i;
	printf("\nDigite uma string: ");
	fgets(string, TAMANHO1, stdin);
	for (i = SUCESSO; string[i] != '\0'; i++) {
		if (string[i] == ' ') {
			contazero++;
		}
	}
	printf("\nA string informada possui %d espacos vazios.", contazero);
}
void exercicio2(void) {
	printf("\n");
	char string[TAMANHO1];
	char stringfinal[TAMANHO1];
	int i, j;
	printf("\nDigite uma string: ");
	fgets(string, TAMANHO1, stdin);
	for (i = SUCESSO, j = SUCESSO; string[i] != '\0'; i++) {
		if (string[i] != ' ') {
			stringfinal[j] = string[i];
			j++;
		}
	}
	stringfinal[j] = '\0';
	printf("O resultado da string informada sem espacos eh: %s", stringfinal);
}
int calculovogais(char *string) {
	int calculo = SUCESSO;

	while (*string) {
		char ltr = *string;
		if (ltr == 'a' || ltr == 'e' || ltr == 'i' || ltr == 'o' || ltr == 'u') {
			calculo++;
		}
		if (ltr == 'A' || ltr == 'E' || ltr == 'I' || ltr == 'O' || ltr == 'U') {
			calculo++;
		}
		string++;
	}
	return calculo;
}
void exercicio3(void) {
	printf("\n");
	char string[TAMANHO1];
	printf("\nDigite uma string: ");
	fgets(string, TAMANHO1, stdin);
	int vogal = calculovogais(string);
	printf("\nO numero de vogais na string eh igual a: %d", vogal);
}
void conversao(char* string) {
	int i;
	int tamanho = strlen(string);
	if (string[SUCESSO] >= 'a' && string[SUCESSO] <= 'z') {
		string[SUCESSO] = toupper(string[SUCESSO]);
	}
	for (i = UM; i < tamanho; i++) {
		if (string[i] == ' ') {
			if (string[i + UM] >= 'a' && string[i + UM] <= 'z') {
				string[i + UM] = toupper(string[i + UM]);
			}
		}
	}
}
void exercicio4(void) {
	printf("\n");
	char string[TAMANHO1];
	printf("\nDigite uma string de mais de uma palavra:");
	fgets(string, TAMANHO1, stdin);
	conversao(string);
	printf("\n Resultado da string com as letras inicias de toda palavra em maiusculo:");
	printf("%s\n", string);
}
void exercicio5(void) {
	printf("\n");
	char palavra[TAMANHO1];
	int i, j;
	int palindromo = UM;
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	j = strlen(palavra) - UM;
	for (i = SUCESSO; i < j; i++, j--) {
		if (palavra[i] != palavra[j]) {
			palindromo = SUCESSO;
			break;
		}
	}
	if (palindromo)
		printf("\nA palavra digitada eh um palindromo.");
	else
		printf("\nA palavra digitada nao eh um palindromo.");
}
void exercicio6(void) {
	printf("\n");
	char frase[TAMANHO2];
	char frasesemespacos[TAMANHO2];
	int i, j;
	int palindromo = UM;
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	int indice = SUCESSO;
	for (i = SUCESSO; frase[i] != '\0'; i++) {
		if (frase[i] >= 'a' && frase[i] <= 'z') {
			frasesemespacos[indice] = frase[i];
			indice++;
		}
		else if (frase[i] >= 'A' && frase[i] <= 'Z') {
			frasesemespacos[indice] = frase[i] - 'A' + 'a';
			indice++;
		}
	}
	frasesemespacos[indice] = '\0';
	j = strlen(frasesemespacos) - UM;
	for (i = SUCESSO; i < j; i++, j--) {
		if (frasesemespacos[i] != frasesemespacos[j]) {
			palindromo = SUCESSO;
			break;
		}
	}
	if (palindromo)
		printf("\nA frase digitada eh um palindromo.");
	else
		printf("\nA frase digitada nao eh um palindromo.");
}
int main(int argc, char** argv) {
	int menuescolha;
	do {
		printf("\nMENU EXERCICIOS:\n");
		printf("\nDigite o numero do exercicio que deseja executar( 1 a 6)");
		printf("\nSe desejar sair digite 0!\n");
		scanf("%i", &menuescolha);
		getchar();
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
		case 5:
			exercicio5();
			break;
		case 6:
			exercicio6();
			break;
		default:
			printf("Nao existe esse exercicio na Lista 07");
		}
	} while (menuescolha != 0);
	return SUCESSO;
}
