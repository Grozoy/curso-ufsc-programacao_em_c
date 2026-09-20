#include <stdio.h>

int main() {
    int num;
    float f;
    num=10;

    /* Se não tivesemos usado o modelador abaixo, o C faria a divisão inteira entre 10 e 7. O resultado seria 1.0*/
    f=(float)num/7;
    printf("O valor de f é: %f", f);
    return (0);
}
