#include <stdio.h>

void main() {
    int x;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);
    printf("((3 x %i) + 1) + ((2 x %i) - 1) = %i", x, x, ((3*x)+1)+((2*x)-1));
}