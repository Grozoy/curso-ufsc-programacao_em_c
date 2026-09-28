#include <stdio.h>
#include <string.h>

int main() {
	int size;
	char str[100];
	printf("Entre com uma string: ");
	gets (str);
	size=strlen(str);
	printf("\n\nA string que você digitou tem o tamanho %d", size);
	return (0);

}

