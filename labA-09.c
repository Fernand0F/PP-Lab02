#include <stdio.h>

void main() {
    float x;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &x);
    printf("%.2f graus Celsius equivalem a %.2f Kelvin", x, x+273.15);
}
