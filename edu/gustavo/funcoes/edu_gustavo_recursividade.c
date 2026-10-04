#include <stdio.h>
int fat(int n) 
{
	if (n)
		return n * fat(n-1);
	else
		return 1;
}
int main ()
{
	int i;
	printf("Digite um valor para n: ");
	scanf("%d", &i);
	printf("\nO fatorial de %d é %d", i, fat(i)); 
	return 0;	
}

