#include <stdio.h>

void ZerarVariaveis (int * a, int * b);
void main() {
	int num1, num2;
	num1 = 100;
	num2 = 200;
	ZerarVariaveis(&num1 , &num2);
	printf("\nAgora suas variáveis valem: %d, %d", num1, num2);
}
void ZerarVariaveis (int *a, int *b) {
	int zero = 0;
	*a = zero;
	*b = zero;
}
