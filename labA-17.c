#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor de comprimento em centimetros: ");
    scanf("%f", &x);
    printf("%.2f cm equivalem a %.2f polegadas", x, x/2.54);
}
