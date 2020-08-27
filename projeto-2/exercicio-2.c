#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b, int c) {

    if(a > b) {
        return a;
    }
    if( b > c) {
        return b;
    }
    if( c > a) {
        return c;
    }
    if( a > c) {
        return a;
    }
    if( b > a) {
        return b;
    }
    if( c > b) {
        return c;
    }
}


int main () {
    int a, b, c;
    printf("Insira seu primeiro valor: ");
    scanf("%d",&a);
    printf("Insira seu segundo valor: ");
    scanf("%d",&b);
    printf("Insira seu terceiro valor: ");
    scanf("%d",&c);
    printf("\n O maior numero entre todos eh: %d", maior(a, b, c));
}