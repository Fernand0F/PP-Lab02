#include <stdio.h>

void main() {
    float x;
    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &x);
    printf("%.2f Kelvin equivalem a %.2f graus Celsius", x, x-273.15);
}
