#include <stdio.h>

void main() {
    float a, b;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &a);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &b);

    printf("O valor da hipotenusa eh %.3f", sqrt(a*a+b*b));
}