#include <stdio.h>

int soma (int x, int y){
    return (x + y);
}

void main(){
    int saida;
    saida = soma(1 , 2);
    printf("A soma é %d\n", saida);
}
