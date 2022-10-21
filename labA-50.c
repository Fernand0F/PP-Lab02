#include <stdio.h>

void main() {
    int n, a;

    printf("Digite o ano atual: ");
    scanf("%i", &a);

    printf("Digite sua idade: ");
    scanf("%i", &n);

    printf("Seu ano de nascimento foi %i", a - n);
}