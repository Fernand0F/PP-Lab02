#include <stdio.h>

void main() {
    float x, pi=3.141592;

    printf("Digite o valor do raio do circulo em metros: ");
    scanf("%f", &x);
    printf("A area dessse circulo vale %.6f metros quadrados", x*x*pi);
}