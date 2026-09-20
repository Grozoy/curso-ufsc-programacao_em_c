#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num>10) printf("\nNumero maior que 10.");
    if (num==10) {
        printf("\n\nVocê acertou!");
        printf("\nO numero é igual a 10.");
    }
    if (num<10) printf("\nNumero menor que 10.");
    return (0);
}
