#include <stdio.h>
#include <string.h>

int StrLen (char *string) {
	int count = 0;
	while (*string) 
	{
		string++;
		count++;
	}
	return count;
}
void StrCat (char *destino, char *origem) 
{
	while (*destino) destino++;	
	
	while (*origem) {
		*destino=*origem;
		*origem++;
		*destino++;
	}
	*destino='\0';
}
int main() {
	char str1[100], str2[100];
	int lenght;
	
	printf("Digite uma string: ");
	gets(str1);

	lenght = StrLen(str1);
	printf("A string que voce digitou tem o comprimento: %d\n", lenght); 

	strcpy(str2, "Você digitou a string: ");	/* Copia vc digitou... */
	StrCat(str2, str1);				/* Concatena vc digitou + str1 */
	printf("\n\n%s\n", str2);

	return (0);
}
