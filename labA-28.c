#include <stdio.h>

void main()
{
    float x, y, z;

    printf("Digite um valor: ");
    scanf("%f", &x);
    printf("Digite outro valor: ");
    scanf("%f", &y);
    printf("Digite outro valor: ");
    scanf("%f", &z);

    printf("A soma dos quadrados desses 3 valores eh: %.2f", (x*x)+(y*y)+(z*z));
}
