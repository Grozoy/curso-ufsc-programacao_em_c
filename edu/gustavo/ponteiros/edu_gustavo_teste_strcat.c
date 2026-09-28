#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	printf("Digite uma palavra: ");
	scanf("%s", &str1[0]);
	strcpy(str2 ,"Você digitou a string ");
	strcat(str2, str1);
	printf("%s", str2);
	return (0);
}
