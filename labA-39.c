#include <stdio.h>

void main() {
    float x=780000, g1, g2, g3;

    g1 = x * 0.46;
    g2 = x * 0.32;
    g3 = x - (g1 + g2);

    printf("Valor ganhado por cada um dos ganhadores:\n");
    printf("- O primeiro ganhador recebera %.2f\n", g1);
    printf("- O segundo ganhador recebera %.2f\n", g2);
    printf("- O terceiro ganhador recebera %.2f\n", g3);
}