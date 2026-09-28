#include <stdio.h>

int main () {
	int num[100];
	int count = 0;
	int totalnums;
	do {
		printf("\nEntre com um numero (-999 p/ termmar): \n");
		scanf("%d", &num[count]);
		count++;
		if (count-1 == 100) {
			printf("Voce exedeu o limte do buffer. Terminando...\n");
			break;
		}
	} while (num[count-1] != -999);
	totalnums = count - 1;
	printf("\n\n\tOs números que você digitou foram:\n\n");
	for (count=0; count < totalnums; count++)
		printf(" %d", num[count]);
	return (0);
}
