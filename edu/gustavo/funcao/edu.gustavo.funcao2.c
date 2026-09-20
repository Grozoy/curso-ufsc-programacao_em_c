#include <stdio.h>

void square (int x) { /* Calcula o quadrado */
    printf("O quadrado é %d", x*x);
}

void main () {
    int num;
    printf("Entre um numero ");
    scanf("%d", &num);
    printf("\n\n");
    square(num);
}
