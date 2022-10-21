#include <stdio.h>

void main() {
    float hdt, htm;

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &hdt);

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &htm);

    printf("O valor a ser pago ao funcionario eh de %.2f", hdt*htm*1.1);
}