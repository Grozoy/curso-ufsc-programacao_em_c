#include <stdio.h>

int main() {
    int expressao0;
    expressao0 = ((10>5) || (5>10));
    int expressao1;
    expressao1 = (!(5==6) && (5!=6) && ((2>1) || (5<=4)));
    printf("A primeira expressão é: %d", expressao0);
    printf("\n\n");
    printf("A segunda expressão é: %d\n", expressao1);
    return (0);
}
