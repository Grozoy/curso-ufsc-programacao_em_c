#include <stdio.h>

int main() {
    int a = 17, b = 3;
    int x, y;
    float z = 17, z1, z2;
    x = a / b;
    y = a % b;
    z1 = z / b;
    z2 = a / b;

    printf("O valor de x: %d", x);
    printf("\nO valor de y: %d", y);
    printf("\nO valor de z1: %f", z1);
    printf("\nO valor de z2: %f", z2);

    return (0);
}
