#include <stdio.h>

void main() {
    float x;

    printf("Digite o valor do produto: ");
    scanf("%f", &x);

    printf("- Valor do produto com 10 por cento de desconto: %.2f\n", x*0.9);
    printf("- Valor de cada parcela de 3x: %.2f\n", x/3);
    printf("- Comissao do vendedor (a vista): %.2f\n", x*0.9*0.05);
    printf("- Comissao do vendedor (parcelado): %.2f\n", x*0.05);
}