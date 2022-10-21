#include <stdio.h>

void main() {
    float x, y;

    printf("Digite a coordenado X do ponto: ");
    scanf("%f", &x);

    printf("Digite a coordenado Y do ponto: ");
    scanf("%f", &y);

    printf("A distancia desse ponto da origem eh de %.2f", sqrt(x*x+y*y));
}