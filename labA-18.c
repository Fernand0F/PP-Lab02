#include <stdio.h>

void main() {
    float x;
    printf("Digite um volume em metros cubicos: ");
    scanf("%f", &x);
    printf("%.2f m3 equivalem a %.2f L", x, x*1000);
}
