#include <stdio.h>

void main() {
    float hd, hs;
    int d;

    printf("Altura do degrau da escada: ");
    scanf("%f", &hd);

    printf("Altura que deseja subir: ");
    scanf("%f", &hs);

    d = (int) (hs / hd) + 1;

    printf("O numero de desgraus necessarios para subir essa altura eh %i", d);
}