// 3
#include <stdio.h>
#include <math.h>

int main () {
    float x, equacao;

    printf("Digite um f(x) para sua equacao: ");
    scanf("%f", &x);
    equacao = (sqrt(x) + (x/2) + pow(x, x));
    printf("Seu resultado eh: %f", equacao);
}