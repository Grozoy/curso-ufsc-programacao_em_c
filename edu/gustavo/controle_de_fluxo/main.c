#include <stdio.h>
#include <string.h>

int main() {
	int i, lenght, cont;
	char buffer[50], temp[50];

	fflush(stdin);
	fgets(buffer, sizeof(buffer), stdin);

	lenght = (strlen(buffer)- 2);
	cont = 0;
	for (i=lenght; i >= 0; i--) {
		temp[cont] = buffer[i];
		cont++;
	}
	temp[cont] = '\n';	
	printf("%s", temp);

}
