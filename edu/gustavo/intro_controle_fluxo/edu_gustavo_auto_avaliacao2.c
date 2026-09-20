#include <stdio.h>

int main() {
    char string[100];
    printf("Digite uma frase: ");
    scanf("%s", &string);
    int i, cont = 0;
    for (i=0; string[i] != '\0'; i++) {
        if (string[i] == 'a')
            ++cont;
    }
    printf("\nSua frase contem este numero de 'a(s)': %d", cont);
    printf("\nAgora vou trocar os 'a(s)' por 'b(s)'");

    for (i=0; string[i] != '\0'; i++) {
        if (string[i] == 'a')
            string[i] = 'b';
    }
    printf("\n\nSua frase com as letras trocadas é: %s", string);
    return 0;

}
