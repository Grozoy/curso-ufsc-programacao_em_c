#include <stdio.h>

int main() {
	int y, *p, x;
	y = 0;
	p = &y;		/* Aqui p aponta para y */
	x = *p;		/* x pega o valor de p */
	x = 4;		/* x muda de 0 para 4 */
	(*p)++;		/* p que era 0, incrementa 1 */
	x--;		/* x decrementa -1, e agora vale 3 */
	(*p) += x;	/* o ponteiro de y(1), recebe e soma + 3 */
	printf("y = %d\n", y);	/* y vale 4, porque as alterações em p estão no
				   mesmo endereço. */
	return (0);
}
