#include <stdio.h>

void main() {
    int s1, h, m, s2;

    printf("Digite um valor de tempo em segundos: ");
    scanf("%i", &s1);

    h = s1/3600;
    m = (s1%3600)/60;
    s2 = (s1%3600)%60;

    printf("%i segundos equivalem a %i horas, %i minutos e %i segundos", s1, h, m, s2);
}