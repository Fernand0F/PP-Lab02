#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor em hectares: ");
    scanf("%f", &x);
    printf("%.4f hectares equivalem a %.4f metros quadrados", x, x*10000);
}