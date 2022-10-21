#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor em quilogrmas: ");
    scanf("%f", &x);
    printf("%.2f kg equivalem a %.2f libras", x, x/0.45);
}