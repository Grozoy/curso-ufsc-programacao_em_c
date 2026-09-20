#include <stdio.h>

int main(){
    char str[10] = "joao";
    printf("String: %s", str);
    printf("\nSegunda letra da string: %c", str[1]);
    str[1] = 'U';
    printf("\nAgora mudando a segunda letra para: %c", str[1]);
    printf("\n\nA string fica agora: %s", str);
    return (0);
}
