#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor em metros: ");
    scanf("%f", &x);
    printf("%.2f m equivalem a %.2f jardas", x, x/0.91);
}