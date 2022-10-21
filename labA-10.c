#include <stdio.h>

void main() {
    float x;
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &x);
    printf("%.2f km/h equivalem a %.2f m/s", x, x/3.6);
}
