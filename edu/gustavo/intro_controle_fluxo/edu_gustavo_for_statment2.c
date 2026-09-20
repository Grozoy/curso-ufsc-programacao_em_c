#include <stdio.h>

int main() {
    char string[100];
    int i, count;
    printf("Digite uma frase: ");
    gets(string);

    count = 0;
    for (i=0; string[i]!='\0'; i++) {
        if (string[i] == 'a')
            ++count;
    }
    printf("O numero de caracteres 'c' na frase é: %d", count);
    return (0);
}
