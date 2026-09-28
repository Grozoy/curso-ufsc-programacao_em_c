#include <stdio.h>
#include <string.h>

int main() {
	char str1[16], str2[16], str3[16], str4[16], str5[100];
	int index = 0, lenght = 16;
	int cortar_new_line = 0, decrementar;
	int cortar_espaco = 0, incrementar;
	int comprimento;


	printf("Digite a primeira palavra: ");	
	fgets(str1, lenght, stdin);
		
	
	
	printf("\nDigite a segunda palavra: ");
	fgets(str2, lenght, stdin);	
	


	printf("\nDigite a Terceira palavra: ");
	fgets(str3, lenght, stdin);
	


	printf("\nDigite a ultima palavra: ");
	fgets(str4, lenght, stdin);

	
	/* Concatenando todas as strings em str5 */
	
	/* Cortar o new line character */
	cortar_new_line = strlen(str1) - 1;
	decrementar = cortar_new_line;
	for (index = cortar_new_line; index != 0; index--) {
		--decrementar;
		if (decrementar >= 0) str1[index] = str1[decrementar];
	}
	str1[index] = ' ';
	
	strcat(str5, str1);
	

	/* Cortar o new line character */
	cortar_new_line = strlen(str2) - 1;
	decrementar = cortar_new_line;
	for (index= cortar_new_line; index != 0; index--) {
		--decrementar;
		if (decrementar >= 0) str2[index] = str2[decrementar];
		else str2[decrementar] = ' ';
	}
	str2[index] = ' ';
	
	
	/* MEIO DAS STRINGS, concatenar as duas */
	strcat(str5, str2);
	
	comprimento = strlen(str1) + strlen(str2) + 2;
	incrementar = 1;
	for (index=1; index <= comprimento; index++) {
		str5[index] = str5[++index];
		
	}


	/* Cortar o new_line character */	
	cortar_new_line = strlen(str3) - 1;
	decrementar = cortar_new_line;
	for (index=cortar_new_line; index != 0; index--) {
		--decrementar;
		if (decrementar >= 0) str3[index] = str3[decrementar];
		else str3[decrementar] = ' ';
	}
	str3[index] = ' ';
		
	/* Segundo MEIO DA STRING, concatenar as duas */
	strcat(str5, str3);
	comprimento = strlen(str1) + strlen(str2) + strlen(str3) + 3;
	incrementar = 1;
	for (index=2; index <= comprimento; index++) {
		str5[index] = str5[++index];
	}	
	

	strcat(str5, str4);
	
		
		
	printf("\n\nAgora, as suas quatro strings juntas dão: ");
	printf("%s", str5);
	
	return (0);
}
