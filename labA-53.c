#include <stdio.h>

void main() {
    float c, l, p;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &c);

    printf("Digite a largura do terreno: ");
    scanf("%f", &l);

    printf("Digite o custo do metro da tela: ");
    scanf("%f", &p);

    printf("O custo a ser pago pela tela eh de %.2f", (2*c+2*l)*p);
}