#include <stdio.h>

int main() {
	int num, *p;
	num = 55;
	p = &num;	/* Pega o endereço de num */
	printf("\nO valor inicial de num: %d\n", num);
	*p = 100;	/* Muda o valor de num de maneira indireta */
	printf("Valor final: %d\n", num);
	return (0);	
}
