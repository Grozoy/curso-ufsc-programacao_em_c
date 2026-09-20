#include <stdio.h>

int prod (int x, int y){
    return (x*y);
}

void main (){
    int saida;
    saida = prod(12, 7);
    printf("O valor do produto é %d", saida);
}
