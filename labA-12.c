#include <stdio.h>

void main() {
    float x;
    printf("Digite um distancia em milhas: ");
    scanf("%f", &x);
    printf("%.2f milhas correspondem a %.2f km", x, x*1.61);
}
