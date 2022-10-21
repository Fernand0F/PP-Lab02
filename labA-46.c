#include <stdio.h>

void main() {
    int x, d1, d2, d3;

    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%i", &x);

    d1 = x/100;
    d2 = (x-(d1*100))/10;
    d3 = (x-(d1*100)-(d2*10));

    printf("Numero gerado: %i%i%i",d3, d2, d1);
}