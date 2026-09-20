#include <stdio.h>

int main() {
	int i = 0, cont = 1;
	char string[50];

	fgets(string, sizeof(string), stdin);
	printf("\n");

	do {
		if (i % 5 == 0){
		printf("%d:%c ",i, string[i]);
		}
		i++;
	}
	while (string[i] != '\0');
	printf("\n");

	return (0);

}
