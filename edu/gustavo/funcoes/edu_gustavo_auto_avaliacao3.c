#include <stdio.h>

void levetor(int *vet, int dimensão);

int main() {
	int line , vetor [9];
	int lenght, i, j ;
	int *pt1 = &vetor[0];
	
	printf("Digite uma sequência de 1 a 9 números, serparados por espaço: ");	
	for (i=0; i < 9; i++) 
		scanf("%d", &vetor[i]);
	

	for (i=0; i < 9; i++) {
		printf("%d ",  *pt1);
		pt1++;
	}

	printf("\n\n");
	pt1 = &vetor[0];
	levetor(pt1, 5); 
}


void levetor(int *vet, int dimensao)
{
	int count;

	for (count=0; count < dimensao; count++){
		printf("%d ", *vet);
		vet++;
	}

} 
