#include <stdio.h>

int main() {
    long i;
    printf("\a");
    for (i=0; i < 10000000; i++);
    printf("\a");
    return 0;
}
