#include <stdio.h>

void main() {
    float x;
    printf("Digite um numero real: ");
    scanf("%f", &x);
    printf("O quadrado de %.2f eu %.2f", x, x*x);
}
