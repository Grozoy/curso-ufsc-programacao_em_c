#include <stdio.h>

int main() {
    char str0[100], str1[100];
    printf("Digite duas palavras: ");
    scanf("%s %s", &str0 , &str1);
    printf("\nVocê digitou %s e %s.", str0, str1);
    printf("\nA segunda letra de cada uma de suas strings são: %c e %c", str0[1], str1[1]);
    return 0;
}
