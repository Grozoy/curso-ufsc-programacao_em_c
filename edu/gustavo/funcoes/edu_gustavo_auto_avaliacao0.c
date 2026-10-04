#include <stdio.h>

int EPar (int a)
{
	if (a%2)
		return 0;
	else
		return 1;
}

int EDivisivel (int a, int b)
{
	if (EPar(a) || a == 2){ 
		if (a % b == 0)
			return (1);
	} 
	else return (0);
}

int main () {
	int a = 144, b = 12;

	if (EDivisivel(a , b))
		printf("È divisivel.\n");
	else
		printf("Não é divissível.\n");
	return (0);
}
