// 5
#include <stdio.h>

int main() {
    int b = 0, h = 0;
    float area = 0;

    printf("Digite a base do seu triangulo: ");
    scanf("%d", &b);
    printf("Digite a altura do seu triangulo: ");
    scanf("%d", &h);

    area = ((b * h) / 2);
    printf("A area do seu triangulo eh: %f", area);
}