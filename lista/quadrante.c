// 14
#include <stdio.h>

int main () {
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    if( x > 0 && y > 0) {
        printf("Seus numeros estao no 1 quadrante!!!");
    }
    if( x < 0 && y > 0) {
        printf("Seus numeros estao no 2 quadrante!!!");
    }
    if( x < 0 && y < 0) {
        printf("Seus numeros estao no 3 quadrante!!!");
    }
    if( x > 0 && y < 0) {
        printf("Seus numeros estao no 4 quadrante!!!");
    }
    if( x == 0 && y == 0) {
        printf("Seus numeros estao na origem!!!");
    }
}