#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *p;
	char str[30], frase[] = "Este arquivo e chamado: ";
	char resposta[80];
	int i;
	
	/*Lê o nome do arquivo a ser aberto */
	printf("\nEntre com um nome para o arquivo: \n");
	fgets(str, 29, stdin);
	for (i=0; str[i] != '\0'; i++) if (str[i] == '\n') str[i] = '\0';
	if(!(p = fopen(str, "w"))) 
	{
		printf("\nErro impossível abrir o arquivo\n");
		exit(1);
	}
	
	/* Se não houver erro, imprime no arquivo, e o fecha */
	fputs(frase, p);
	fputs(str, p);
	fclose(p);
	
	/* Abre novamente e lê */
	p = fopen(str, "r");
	fgets(resposta, 79, p);
	printf("\n\n%s\n", resposta);
	fclose(p);
	remove(str);
	return 0;
}
