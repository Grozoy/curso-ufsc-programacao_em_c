#include <stdio.h>

int main() {
    int v = 0, x = 1, y = 2, z = 3;
    v += x+y;
    x *= y = z + 1;
    z %= v + v + v;
    v += x += y += 2;
    printf("O valor das variáveis v, x, y e z: %d, %d, %d, %d", v, x, y, z);
}
