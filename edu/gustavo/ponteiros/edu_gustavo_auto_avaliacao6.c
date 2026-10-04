#include <stdio.h>

int main() 
{
	int matrx [100] [100];
	int *p, *q, i, j, count;
	
	p = &matrx[0][0];

	for (i=0; i < 10000; i++) {	
		*p = 0;
		p++;
	}

	
	count = 1;
	p = &matrx[0][0];
	q = &count;
	for (i=0; i < 10000; i++) {
		*p = *q;
		(*q)++;
		p++;
	}
	
	p = &matrx[0][0];
	
	for (i=0; i < 100; i++) 
		for (j=0; j < 100; j++)
			printf("%d ", matrx[i][j]);	
			
	
	return (0);	
}
	
