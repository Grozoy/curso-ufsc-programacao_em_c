#include <stdio.h>
int main()
{
    int index = 0, contador;
    char letras[6] = "Paulo";
    for (contador=0; contador<1000; contador++)
    {
        if (contador%5)
        {
        printf("%c",letras[index]);
        index=(index==6)? index=0 : ++index;
        }
        else
        {
        printf(" ");
        }
    }
     return (0);
}
