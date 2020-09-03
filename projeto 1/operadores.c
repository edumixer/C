#include <stdio.h>
int main() {
    double x;
    double y;
    printf("Digite seu numero 1: ");
    scanf("%lf", &x);
    printf("Seu 1 numero foi de: %lf\n", x);

    printf("Digite seu numero 2: ");
    scanf("%lf", &y);
    printf("Seu 2 numero foi de: %lf\n", y);
    printf("\n");
    printf("A soma entre os produtos foi de: %lf\n", x+y);
    printf("A subtracao entre os produtos foi de: %lf\n", x-y);
    printf("A multiplicacao entre os produtos foi de: %lf\n", x*y);
    printf("A divisao entre os produtos foi de: %lf\n", x/y);
}