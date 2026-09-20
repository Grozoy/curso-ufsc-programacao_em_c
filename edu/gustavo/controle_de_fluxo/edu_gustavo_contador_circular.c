#include <stdio.h>
int main()
{
     int index = 0, contador;
     char letras[8] = "Gustavo";
     for (contador=0; contador < 1000; contador++)
     {
	printf("%c",letras[index]);
	index=(index == 8)? index=0: ++index;
     }
     return (0);
}
