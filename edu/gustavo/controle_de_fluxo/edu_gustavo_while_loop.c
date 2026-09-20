#include <stdio.h>
#include <string.h>

int main() {
	int i; 
	int lenght = 0, cont = 0;
	char buffer[50], temp[50];

	fflush(stdin);
	fgets(buffer, sizeof(buffer), stdin);

	for (i=0; buffer[i] != '\0'; i++) lenght++;
	cont = 0;
	i = (lenght - 2);
	while (i >= 0) {
		temp[cont] = buffer[i];
		cont++;
		i--;
	}
	temp[cont] = '\n';	
	printf("%s", temp);

}
