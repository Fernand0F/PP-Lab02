#include <stdio.h>

void main() {
    int x;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);
    printf("O antecessor de %i eh %i\n", x, x-1);
    printf("O sucessor de %i eh %i", x, x+1);
}