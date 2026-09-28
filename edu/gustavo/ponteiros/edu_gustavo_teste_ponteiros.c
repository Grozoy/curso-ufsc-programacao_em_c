#include <stdio.h>

int main() {
	int num, *pt1, *pt2;
	int matrx [5] = {1, 3, 5, 7, 9};
	num = 55;
	pt1 = &num;
	pt2 = &matrx[0];

	printf("\nValor do ponteiro pt1: %p\n", pt1);
	printf("\nValor da variavél de pt1: %d", *pt1);
	printf("\nValor da memória em num: %p", &num);
	printf("\nValor da variavel num: %d", num);
	
	*pt1 += 15;

	printf("\n\nValor de pt1 somando valor na memoria: %p", pt1);
	printf("\nValor da variável em pt1: %d", *pt1);
	printf("\nValor da memória em num: %p", &num);
	printf("\nValor da variável num: %d", num);
	
	pt1++;
			
	printf("\n\nValor da memória em pt1: %p", pt1);
	printf("\nValor de pt1, somando + 15 ao valor: %d", *pt1);
	printf("\nValor da memória em num: %p", &num);
	printf("\nValor de num: %d\n", num);
	

	printf("\n\nValor da memória em pt2: %p", pt2);
	printf("\nValor de pt2: %d", *pt2);
	printf("\nValor de matrx: %d %d\n", matrx[0], matrx[1]);
	
	(*pt2)++;
		
	printf("\n\nValor da memória em pt2: %p", pt2);
	printf("\nValor de pt2: %d", *pt2);	
	printf("\nValor de matrx: %d %d\n", matrx[0], matrx[1]);

	(*pt2)+2;

	printf("\n\nValor da memória em pt2: %p", pt2);
	printf("\nValor de pt2: %d", *pt2);	
	printf("\nValor de matrx: %d %d\n", matrx[0], matrx[1]);


	return (0);

}
