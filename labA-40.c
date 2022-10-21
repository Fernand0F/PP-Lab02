#include <stdio.h>

void main() {
    int x;

    printf("Por quantos dias o encanador trabalhou? ");
    scanf("%i", &x);
    printf("O valor que deve ser pago eh de %.2f", (30.00*x)*0.92);
}