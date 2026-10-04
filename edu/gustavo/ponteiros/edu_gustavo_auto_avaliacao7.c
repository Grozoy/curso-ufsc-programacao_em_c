#include <stdio.h>

int main () {
	int i=10, j=20;
	int *pti, *ptj;

	pti = &i;
	ptj = &j;

	j = pti == ptj;
	i = pti-ptj;
	pti += ptj;	/* Encontrado o errado */
	i = pti || ptj;
	return (0);
}
