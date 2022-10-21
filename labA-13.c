#include <stdio.h>

void main() {
    float x;
    printf("Digite um distancia em quilometros: ");
    scanf("%f", &x);
    printf("%.2f km correspondem a %.2f milhas", x, x/1.61);
}
