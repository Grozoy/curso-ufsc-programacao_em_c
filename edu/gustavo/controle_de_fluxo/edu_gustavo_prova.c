#include <stdio.h>

int main() {
	int a = 1, b = 2, c = 3;
	int x = 0;

	x = a < b ? a < c ? a : c : b < c ? b : c;

	printf("%d" , x);
}
