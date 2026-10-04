#include <stdio.h>
#include "edu_gustavo_funcao1.h"

int main () {
	int num1, num2;
	printf("Digite um número: ");
	scanf("%d", &num1);
	printf("Digite outro número: ");
	scanf("%d", &num2);

	if (EDivisivel(num1, num2))
		printf("%d É divisivel por %d\n", num1, num2);
	else 
		printf("%d Não é divisível por %d.\n", num1, num2);
	return 0;
}
