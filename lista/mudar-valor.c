#include <stdio.h>

int main() {
    int x, y;

    printf("Digite um valor para X: ");
    scanf("%d", &x);
    printf("Digite um valor para Y: ");
    scanf("%d", &y);

    printf("O valor do seu X foi trocado para Y: %d\n", y);
    printf("O valor do seu Y foi trocado para X: %d", x);
}