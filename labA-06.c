#include <stdio.h>

void main() {
    float x;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &x);
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit", x, x*(9.0/5.0)+32);
}
