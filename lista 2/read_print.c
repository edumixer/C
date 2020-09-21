#include <stdio.h>

int main() {
    int number;

    printf("Insira um numero e eu irei printar ate esse numero: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        for(int j = 1; j <= i; j++) {
            printf(" %d ", j);
        }
        printf("\n"); 
    }

}