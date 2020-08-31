#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, heron;
    int k = 253;

    printf("Digite o 1 valor para o seu triangulo: ");
    scanf("%f", &a);
    printf("Digite o 2 valor para o seu triangulo: ");
    scanf("%f", &b);
    printf("Digite o 3 valor para o seu triangulo: ");
    scanf("%f", &c);

    p = ((a + b + c) / 2);
    heron = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A area do seu triangulo eh %3.3fm%c", heron, k);
}