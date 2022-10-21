#include <stdio.h>

void main() {
    float x;
    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &x);
    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius", x, 5.0*(x-32.0)/9.0);
}
