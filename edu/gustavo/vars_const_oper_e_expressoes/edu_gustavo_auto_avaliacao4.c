#include <stdio.h>

int main() {
    int logica;
    logica = (-5 || 0) && (3 >= 2) && (1 != 0) || (3 < 0);
    printf("Esta expressão lógica é: %d", logica);
    return (0);
}
