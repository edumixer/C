// 12
#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o valor para o 1 lado do seu triangulo: ");
    scanf("%d", &x);
    printf("Digite o valor para o 2 lado do seu triangulo: ");
    scanf("%d", &y);
    printf("Digite o valor para o 3 lado do seu triangulo: ");
    scanf("%d", &z);

    if(x == y && x == z) {
        printf("Seu triangulo eh: Equilatero!!");
    }
    else if(x == y || y == z || x == z) {
        printf("Seu triangulo eh: Isosceles!!");
    }
    else if(x != y && y != z) {
        printf("Seu triangulo eh: Escaleno!!");
    }
}