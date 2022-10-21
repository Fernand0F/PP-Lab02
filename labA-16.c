#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor de comprimento em polegadas: ");
    scanf("%f", &x);
    printf("%.2f polegadas equivalem a %.2f cm", x, x*2.54);
}
