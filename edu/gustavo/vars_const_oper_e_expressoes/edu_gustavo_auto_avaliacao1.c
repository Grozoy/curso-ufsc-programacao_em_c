#include <stdio.h>

short num0 = 10;

int main() {

short nums1_5[] = {20, 30, 40, 50, 60};
char palavra [] = {'c', 'o', 'e', 'l', 'h', 'o'};

int lenght_nums1_5 = sizeof(nums1_5) / sizeof(nums1_5[0]);

/* Inicializa a array com todos os numeros com o tamanho de 4 bits para cada elemento*/
int numeros[6];

/* Declara cada numero da segunda array a partir da possição 1*/
numeros[0] = num0;
int y = 0;
for (y=0;y < lenght_nums1_5; y++) numeros[y+1] = nums1_5[y];



/* Pega o tamanho das arrays principais numeros e palavra*/
int lenght_numeros_arr = sizeof(numeros) / sizeof(numeros[0]);
int lenght_palavra_arr = sizeof(palavra) / sizeof(palavra[0]);


printf("As variáveis inteiras tem os números: ");
int i = 0;
for (i=0; i < lenght_numeros_arr; i++) printf("%d ", numeros[i]);

printf("\nO animal contido nas variáveis caractere é o: ");
int x = 0;
for (x=0; x < lenght_palavra_arr; x++) printf("%c", palavra[x]);

}
