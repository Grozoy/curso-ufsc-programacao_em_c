#include <stdio.h>

int main() {
	int vetor[10];
	int *ponteiro, i;

	/* as operações a seguir são inválidas */

	vetor = vetor + 2;	/* ERRADO: vetor não é variável */	
	vetor++;		/* ERRADO: vetor não é variável */
	vetor = ponteiro;	/* ERRADO: vetor não é variável */

	return (0);
}	
