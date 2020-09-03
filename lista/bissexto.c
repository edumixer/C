#include <stdio.h>

int main() {
    int ano;

    printf("\n======= CALCULADOR DE ANO BISSEXTO =======\n");
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d eh um ano BISSEXTO", ano);
    }
    else {
        printf("%d NAO eh um ano bissexto", ano);
    }
    
}