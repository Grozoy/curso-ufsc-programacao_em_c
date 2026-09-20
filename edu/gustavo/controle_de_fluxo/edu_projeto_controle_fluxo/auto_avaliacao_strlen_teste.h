#ifndef AUTO_AVALIACAO_STRLEN_TESTE_H_INCLUDED
#define AUTO_AVALIACAO_STRLEN_TESTE_H_INCLUDED

#include <stdio.h>
#include <string.h>

int teste_com_strlen(){
    char buffer[50];
    int i, lenght, cont = 0;
    int c;

    while((c= getchar()) != '\n' && c != EOF);
    fgets(buffer, sizeof(buffer), stdin);

    lenght = strlen (buffer);
    char temp[lenght];


    for (i=lenght; i >= 0; i--) {
        temp[cont] += buffer[i];
        cont++;
        }
    for (i=0; i < lenght; i++) printf("%c", temp[i]);
}


#endif // AUTO_AVALIACAO_STRLEN_TESTE_H_INCLUDED
