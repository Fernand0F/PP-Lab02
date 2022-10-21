#include <stdio.h>

void main() {
    float x;
    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &x);
    printf("%.2f m/s equivalem a %.2f km/h", x, x*3.6);
}
