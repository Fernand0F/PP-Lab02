#include <stdio.h>

void main() {
    float x;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &x);
    printf("O salario desse funcionario com um aumento de 25 por cento eh %.2f", x*1.25);
}