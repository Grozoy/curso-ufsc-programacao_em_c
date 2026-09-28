#include <stdio.h>

int main() {
	int vetor[10];
	int *ponteiro;

	/* As operações abaixo são válidas */

	ponteiro = vetor;	/* CERTO: ponteiro é variável */
	ponteiro = vetor+2;	/* CERTO: ponteiro é variável */

	return (0);
}
