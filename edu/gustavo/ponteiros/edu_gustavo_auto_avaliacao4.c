#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) 
{	
	char temp0[100], temp1[100], temp2[100];
	int count, i, lenght = 1000, lenght1;
	int mesmo_caracter[lenght];
	int *pmesmo_caracter;
	int flag, qtd_acertos;
	
	/* Preenche a matriz, mesmo caracter de zeros */
	for (i=0; i < lenght; i++) mesmo_caracter[i] = 0;
	
	/* Percorre a primeira string usando *t e a salva em temp0 */
	count = 0;
	while (*t) 
	{
		temp0[count] = *t;
		t++;
		count++;
	}
	temp0[count] = *t;	

	/* Percorre a segunda string usando *s e a salva em temp1 */
	count = 0;
	while  (*s)
	{
		temp1[count] = *s;
		s++;
		count++;
	}
	temp1[count] = *s;

	/* Parte principal da função
	 * percorre a segunda string e registra cada ocorrencia de mesmo caracter em um vetor */	
	s = &temp1[0];
	pmesmo_caracter = &mesmo_caracter[0];
	while (*s) 
	{		
		t = &temp0[0];
		while (*t) 
		{
		
			if (*s == *t) 
			{
				(*pmesmo_caracter)++;
				t++;
			}
			else 
			{ 
				t++;
				pmesmo_caracter++;
			}			
		}	
		s++;
		pmesmo_caracter++;
	}
	t = &temp0[0];
	
	/* Volta *s para a posição após o primeiro espaço */
	while (*s != ' '){
		s--;
	}
	*s++;
	
	i=0;
	while (*s) {
		temp2[i] = *s;
		i++;
		s++;	
	}
		
	while (*s != ' '){
		s--;
	}
	*s++;
	
	/* Soma as ocorrencias de repetições de characters entre as matrizes */
	count = 0;
	qtd_acertos = 0;
	
	lenght1 = strlen(temp2);
	for (i=0; i < lenght1; i++) {
		if (*s == *t) qtd_acertos += 1;
		s++;
		t++;
	}	
	

	if (qtd_acertos == lenght1)
		return (1);
	else
		return (0);
			
}

int main() {
	char *str1 = "galinha .bat";	/* O ' ' é necessário para o programa começar a verificar a "Ultima palavra" */
	char *str2 = ".bat";
	int contem_os_caracteres;
	
	contem_os_caracteres = strend(str1, str2);

	if (contem_os_caracteres != 0) 
	{
		printf("A primeira string contem os caracteres da segunda string\n");
	}
	else 
	{
		printf("A primeira string não contem todos os caracteres da segunda string\n");
	}

	return (0);
}
