#include <stdio.h>

int main() {
	float f;
	float *pf;
	pf = &f;
	
	scanf("%f",pf);	
	
	printf("\n%f\n", *pf);
	return (0);
}
