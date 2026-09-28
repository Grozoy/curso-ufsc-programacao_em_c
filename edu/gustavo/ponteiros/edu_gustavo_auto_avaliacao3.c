#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) 
{	
	char temp0[100], temp1[100];
	int count, i, lenght = 1000;
	int mesmo_caracter[lenght];
	int *pmesmo_caracter, *pcount;
	
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

	/* Percorre a segunda string usando *s e a salva em temp1 */
	count = 0;
	while  (*s)
	{
		temp1[count] = *s;
		s++;
		count++;
	}
	

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
	
	/* Soma as ocorrencias de repetições de characters entre as matrizes */
	count = 0;
	for (i=0; i < lenght; i++) 
	{
		count += mesmo_caracter[i];
	}

	lenght = strlen(temp0);
	if (count >= lenght) return (1);
	else return (0);	

}

int main() {
	char *str1 = "galinha atravesou a rua.";
	char *str2 = "galinha.";
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
