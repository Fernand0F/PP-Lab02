#include <stdio.h>

void main() {
    float x;

    printf("Digite o valor do produto: ");
    scanf("%f", &x);
    printf("O valor desse produto com 12 por cento de desconto eh %.2f reais", x*0.88);
}