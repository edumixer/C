#include <stdio.h>

int main() {
    int i, sum = 0, variacao, expressao;

    printf("Quantas vezes voce deseja variar o seu N?: ");
    scanf("%d", &variacao);
    printf("Digite o seu valor que voce quer calcular:");
    scanf("%d", &expressao);

    for( i = 0 ; i < variacao ; i++) {
        sum += i;
    }

    printf("O seu somatorio eh: %d", sum);
}