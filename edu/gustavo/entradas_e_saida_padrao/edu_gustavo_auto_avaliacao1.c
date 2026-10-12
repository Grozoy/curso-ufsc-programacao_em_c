#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	char string[100], c;
	int i, count = 0;
	
	printf("Digite uma frase para eu escrever em um arquivo: ");
	fgets(string, sizeof(string), stdin);
	
	fp = fopen("arquivo.txt", "w");
	if (!fp) 
	{
		printf("Erro, não foi possível abrir o arquivo.");
		exit(0);
	}
	for (i=0; string[i]; i++) {
		putc(string[i], fp);
	}
	fclose(fp);
	
	fp = fopen("arquivo.txt", "r");
	if (!fp) {
		printf("Erro, não foi possível abrir o arquivo.");
		exit(0);
	}
	for (i=0; (c = getc(fp)) != EOF; i++) {
		count++;
	}
	fclose(fp);
	count--;
	printf("Seu arquivo contem %d, caracteres.", count);
	return 0;
		
	
	

	
}