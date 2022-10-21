#include <stdio.h>

void main() {
    float x, pi=3.141592;
    printf("Digite o valor de um angulo em graus: ");
    scanf("%f", &x);
    printf("%.2f graus equivalem a %.2f radianos", x, x*pi/180);
}
