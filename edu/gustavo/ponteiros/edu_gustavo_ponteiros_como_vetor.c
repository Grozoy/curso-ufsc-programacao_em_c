#include <stdio.h>

int main() {
	int matrx [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p;
	p=matrx;
	printf("O terceiro elemento do vetor: %d\n", p[2]);
	printf("O terceiro elemento do vetor: %d\n", *(p+2));
	return (0);
}
