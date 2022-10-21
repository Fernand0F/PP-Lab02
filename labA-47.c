#include <stdio.h>

void main() {
    int x, d1, d2, d3, d4;

    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%i", &x);

    d1 = x/1000;
    d2 = (x-(d1*1000))/100;
    d3 = (x-(d1*1000)-(d2*100))/10;
    d4 = x-(d1*1000)-(d2*100)-(d3*10);

    printf("%i\n", d1);
    printf("%i\n", d2);
    printf("%i\n", d3);
    printf("%i\n", d4);
}