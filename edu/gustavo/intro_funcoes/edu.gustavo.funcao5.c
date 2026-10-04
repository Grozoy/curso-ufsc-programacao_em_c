#include <stdio.h>

float prod (float x, float y){
    return (x*y);
}

int main(){
    float saida;
    saida = prod(45.2 , 0.0067);
    printf("O produto é %f\n", saida);
    return 0;
}
