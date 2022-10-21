#include <stdio.h>

void main() {
    float x;

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &x);
    printf("O salario a ser pago levando em conta a gratificacao e os impostos eh de %.2f", x*1.05*0.93);
}