#include <stdio.h>
#include <string.h>

int main() {
	char str1[16], str2[16], str3[16], str4[16], str5[64];
	int index = 0, comprimento = 0, incrementar, decrementar;

	printf("Digite a primeira palavra: ");
	fgets(str1, sizeof(str1), stdin);

	printf("Digite a segunda palavra: ");
	fgets(str2, sizeof(str2), stdin);

	printf("Digite a terceira palavra: ");
	fgets(str3, sizeof(str3), stdin);

	printf("Digite a ultima palavra: ");
	fgets(str4, sizeof(str4), stdin);


	/* Deslocando primeira string para a direita */
	strcpy(str5, str1);
	
	/* Tira o primeiro '\n' */	
	comprimento = strlen(str5); /* Medir até character '\n' da str */
	decrementar = comprimento; /* pega a ultima letra da str digitada */
	str5[comprimento] = ' ';
	for (index=comprimento; index >= 0; index--) {
		str5[index] = str5[--decrementar];
	}
	str5[0] = ' '; /* Substitui a primeira posição por ' ' */


	/* Deslocando a segunda string para a direita */
	strcat(str5, str2); /* Esse fucker adiciona um '\n' no meio das strings! */
	

	/* Tira o segunda '\n' */
	comprimento = strlen(str1);
	str5[comprimento] = ' '; /* Tira o character '\n' do meio*/	
	decrementar = comprimento; /* Decrementar a partir do character ' ' da string*/
	for (index=comprimento; index > 0; index--) {
		str5[index] = str5[--decrementar];
	}
	
	str5[1] = ' '; /* Substituir a segunda letra por ' '. */


	/* Agora tirar o '\n' no final da string */
	/*
	comprimento = strlen(str5);
	str5[comprimento] = ' ';
	decrementar = comprimento - 1;  Decrementa a partir do character ' ' da string 
	for (index=comprimento; index > 1; index--) {
		str5[index] = str5[--decrementar];
	}
	
	str5[2] = ' ';  Substituir a terceira letra por ' '. */

	
	/* Acrecentar a terceira string */
	strcat(str5, str3);
	/* Retirar o terceiro '\n' no meio */
	comprimento = strlen(str1) + strlen(str2);
	str5[comprimento] = ' ';
	decrementar = comprimento;
	for (index=comprimento; index > 2; index--) {
		str5[index] = str5[--decrementar];
	}
	str5[2] = ' '; /* Substitui a quarta letra por ' '. */


	/* Retira o quarto '\n' da string */
	comprimento = strlen(str5);
	str5[comprimento] = ' ';
	decrementar = comprimento - 1;
	for (index=comprimento; index > 3; index--) {
		str5[index] = str5[--decrementar];
	}	
	str5[3] = ' ';


	/* Acrecentar a ultima string */
	strcat(str5, str4);
	

	printf("\nConcatenando suas strings: %s", str5);
	return (0);
}
