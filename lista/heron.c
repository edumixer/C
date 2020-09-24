#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, heron;
    int k = 253;

    printf("Digite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);
    printf("Digite um valor para C: ");
    scanf("%f", &c);

    s = ((a + b + c) / 2);
    heron = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("A area do seu triangulo eh %3.3fm%c", heron, k);
}