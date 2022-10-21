#include <stdio.h>

void main() {
    int x,y,z;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);
    printf("Digite outro numero inteiro: ");
    scanf("%i", &y);
    printf("Digite outro numero inteiro: ");
    scanf("%i", &z);

    printf("%i + %i + %i = %i", x, y, z, x+y+z);
}
