#include <stdio.h>

int main() {
	int mes_30[30], mes_31[31];
	int mes_fev[28], mes_bis_fev[29];
	int index, dia; 
	int max_30 = 30, max_31 = 31;
	int norm_fev = 28, bis_fev = 29;
	
	/* Gera mes de 28 dias */
	index = 0;
	for (dia=1; dia <= norm_fev; dia++) {
		mes_fev[index] = dia;
		index++;
	}

	/* Gera mes de 29 dias */
	index = 0;
	for (dia=1; dia <= bis_fev; dia++) {
		mes_bis_fev[index] = dia;
		index++;
	}

	/*Gera mes de 30 dias */
	index = 0;
	for (dia=1; dia <= max_30; dia++) {
		mes_30[index] = dia;
		index++;
	}

	/*Gera mes de 31 dias */
	index = 0;
	for (dia=1; dia <= max_31; dia++) {
		mes_31[index] = dia;
		index++;
	}
	/* Imprime o mes_fev */
	for (index=0; index <= norm_fev; index++) {
		if (index <= 9 && index >= 1) printf(" "); /* coloca espaço nos números de 1 algarismo */
		if ((index) && index % 7 == 0) printf("\n"); /* Quebra a linha a cada semana */
		if (index != norm_fev) printf("%d ", mes_fev[index]);
		else break;
	}
	printf("\n\n");

	/* Imprime o mes fev bisexto */	
	for (index=0; index <= bis_fev; index++) {
		if (index <= 9 && index >= 1) printf(" "); /* coloca espaço nos números de 1 algarismo */
		if ((index) && index % 7 == 0) printf("\n"); /* Quebra a linha a cada semana */
		if (index != bis_fev) printf("%d ", mes_bis_fev[index]);
		else break;
	}
	printf("\n\n");

	/* Imprime o mes_30 */
	for (index=0; index <= max_30; index++) {
		if (index <= 9 && index >= 1) printf(" "); /* coloca espaço nos números de 1 algarismo */
		if ((index) && index % 7 == 0) printf("\n"); /* Quebra a linha a cada semana */
		if (index != 30) printf("%d ", mes_30[index]);
		else break;
	}
	printf("\n\n");

	/* Imprime o mes_31 */
	for (index=0; index <= max_31; index++) {
		if (index <= 9 && index >= 1) printf(" "); /* coloca espaço nos numeros de 1 algarismo */
		if ((index) && index % 7 == 0) printf("\n"); /* Quebra a linha a cada semana */
		if (index != 31) printf("%d ", mes_31[index]);
		else break;
	}
	printf("\n\n");

	return (0);
}
