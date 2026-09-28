#include <stdio.h>

int main() {
	int num, valor;
	int *p;
	num = 55;
	p = &num;	/* Pega o endereço de num */
	valor = *p;	/* Valor igualado de forma indireta */
	printf("\n%d\n", valor);
	printf("Endereço para onde o ponteiro aponta: %p\n", p);
	printf("valor da variável apontada: %d\n", *p);
	return (0);
}
