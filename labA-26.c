#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor em metros quadrados: ");
    scanf("%f", &x);
    printf("%.4f metros quadrados equivalem a %.4f hectares", x, x*0.0001);
}