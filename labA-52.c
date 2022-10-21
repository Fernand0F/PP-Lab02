#include <stdio.h>

void main() {
    float j1, j2, j3, p, p1, p2, p3;

    printf("Valor do premio: ");
    scanf("%f", &p);

    printf("Valor investido pelo apostador 1: ");
    scanf("%f", &j1);

    printf("Valor investido pelo apostador 2: ");
    scanf("%f", &j2);

    printf("Valor investido pelo apostador 3: ");
    scanf("%f", &j3);

    p1 = (j1*p)/(j1+j2+j3);
    p2 = (j2*p)/(j1+j2+j3);
    p3 = (j3*p)/(j1+j2+j3);

    printf("Valor a ser pago para cada apostador:\n");
    printf("Apostador 1: %.2f\n", p1);
    printf("Apostador 2: %.2f\n", p2);
    printf("Apostador 3: %.2f\n", p3);
}