// 7
#include <stdio.h>
#include <math.h>

int main() {
    int r;
    float area = 0;
    float pi = 3.14;

    printf("Digite o raio do seu circulo: ");
    scanf("%d", &r);
    area = (pi + pow(r, 2));
    printf("O seu raio eh: %f", area);
}