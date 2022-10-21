#include <stdio.h>

void main() {
    float h, r, pi=3.141592;

    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &h);

    printf("Digite o valor do raio do cilindro: ");
    scanf("%f", &r);

    printf("O volume desse cilindro eh %f", pi*r*r*h);
}