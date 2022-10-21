#include <stdio.h>

void main() {
    float x;
    printf("Digite um volume em litros: ");
    scanf("%f", &x);
    printf("%.2f L equivalem a %.2f m3", x, x/1000);
}
