#include <stdio.h>

void main() {
    float x, pi=3.141592;
    printf("Digite o valor de um angulo em radianos: ");
    scanf("%f", &x);
    printf("%.2f radianos equivalem a %.2f graus", x, x*180/pi);
}
