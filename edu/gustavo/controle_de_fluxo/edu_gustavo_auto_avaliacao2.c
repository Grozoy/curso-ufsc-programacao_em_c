#include <stdio.h>

int main() {
    int i;
    char string[100];
    printf("Digite um pequeno texto: ");
    gets(string);

    for (i=0; string[i]!='\0'; i++) {
        switch (string[i]) {
            case ' ':
                string[i] = '\n';
            break;
            case '\t':
                string[i] = '\n';
            break;
        }
    }
    printf("%s", string);
}
