#include <stdio.h>

void main() {
    float x;
    
    printf("Digite o tamanho do lado do quadrado em metros: ");
    scanf("%f", &x);
    printf("A area desse quadrado vale %.2f metros quadrados", x*x);
}