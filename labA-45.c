#include <stdio.h>

void main() {
    char x;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &x);

    printf("%c -> %c", x, ((int) x) + 32);
}