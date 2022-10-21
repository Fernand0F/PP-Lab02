#include <stdio.h>

void main() {
    float x;
    printf("Digite um valor em libras: ");
    scanf("%f", &x);
    printf("%.2f libras equivalem a %.2f kg", x, x*0.45);
}