#include <stdio.h>

int main() {
    int x, y;
    x=(y=2, y+3);

    printf("O valor de x e y é: %d, %d", x, y);
    return (0);
}
