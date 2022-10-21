#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor em acres: ");
    scanf("%f", &x);
    printf("%.4f acres equivalem a %.4f metros quadrados", x, x*4048.58);
}