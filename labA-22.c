#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor em jardas: ");
    scanf("%f", &x);
    printf("%.2f jardas equivalem a %.2f metros", x, x*0.91);
}