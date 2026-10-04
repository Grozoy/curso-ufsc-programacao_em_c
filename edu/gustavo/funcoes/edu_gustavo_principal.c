#include <stdio.h>
#include "edu_gustavo_funcao.h"
int main () {
	int num;
	printf("Entre com numero: ");
	scanf("%d", &num);
	if (EPar(num))
		printf("\nO número é par.\n");
	else 
		printf("\nO número é impar.\n");
	return (0);
}
