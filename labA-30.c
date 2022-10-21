#include <stdio.h>

void main() {
    float v, c;
    
    printf("Digite um valor em reais: ");
    scanf("%f", &v);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &c);

    printf("O valor digitado em dolar vale: %.2f", v/c);
}