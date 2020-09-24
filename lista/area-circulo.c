// 7
#include <stdio.h>
#include <math.h>

int main() {
    float r;
    float area = 0;
    float perimetro = 0;
    float pi = 3.14;

    printf("Digite o raio do seu circulo: ");
    scanf("%f", &r);

    area = (pi * pow(r, 2));
    perimetro = ((2 * r) * pi);
    printf("O seu raio eh: %f\n", area);
    printf("O seu perimetro eh: %f", perimetro);
}