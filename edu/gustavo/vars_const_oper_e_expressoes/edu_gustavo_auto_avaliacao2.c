#include <stdio.h>

int main() {
    int x, y, z;
    x=y=10;
    z=++x;
    x=-x;
    y++;
    x=x+y-(--z);

    printf("O valor de x: %d", x);
    printf("\nO valor de y: %d", y);
    printf("\nO valor de z: %d", z);
    return (0);
}
