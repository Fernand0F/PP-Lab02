#include <stdio.h>

void main() {
    int h1, m1, s1, d, h2, m2, s2;

    printf("Hora do inicio da experiencia: ");
    scanf("%i", &h1);

    printf("Minuto do inicio da experiencia: ");
    scanf("%i", &m1);

    printf("Segundo do inicio da experiencia: ");
    scanf("%i", &s1);

    printf("Duracao da experiencia em segundos: ");
    scanf("%i", &d);

    h2 = d/3600;
    m2 = (d%3600)/60;
    s2 = (d%3600)%60;

    printf("A experiencia acabou aos %i:%i:%i", (h1+h2)%24, m1+m2, s1+s2);

}