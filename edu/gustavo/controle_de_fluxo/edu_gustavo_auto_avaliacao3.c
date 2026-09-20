#include <stdio.h>
#include <string.h>

void inverter(char str[]) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

int main() {
    char texto[] = "exemplo";
    inverter(texto);
    printf("%s\n", texto);
    return 0;
}
