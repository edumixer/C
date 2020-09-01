#include <stdio.h>

int main() {
    int a, m, d, a2, m2, d2;
    int c = 167;

    printf("=========== COMPARACAO DE TEMPO ===========\n");
    printf("\n");
    printf("1%c calendario...\n", c);
    printf("Digite um dia: ");
    scanf("%d", &d);
    if(d > 31) {
        printf("-------- Por favor, insira um dia entre 1 a 31!!! -------- ");
        return 1;
    }
    printf("Digite um mes: ");
    scanf("%d", &m);
    if(m > 12) {
        printf("-------- Por favor, insira um mes entre 1 a 12!!! --------");
        return 1;
    }
    printf("Digite um ano: ");
    scanf("%d", &a);
    printf("O 1%c calendario digitado foi: %d/%d/%d\n", c, d, m, a);
    
    printf("\n");
    
    printf("Agora escreva o 2%c calendario...\n", c);
    printf("Digite um dia: ");
    scanf("%d", &d2);
    if(d2 > 31) {
        printf("-------- Por favor, insira um dia entre 1 a 31!!! -------- ");
        return 1;
    }
    printf("Digite um mes: ");
    scanf("%d", &m2);
    if(m2 > 12) {
        printf("-------- Por favor, insira um mes entre 1 a 12!!! --------");
        return 1;
    }
    printf("Digite um ano: ");
    scanf("%d", &a2);
    printf("O 2%c calendario digitado foi: %d/%d/%d\n", c, d2, m2, a2);

    printf("\n");
    printf("================\n");

    if(a < a2) {
        printf("O ano do seu 1%c calendario eh mais velho", c);
    }
    else if(a2 < a) {
        printf("O ano do seu 2%c calendario eh mais velho", c);
    }
    else if(m < m2) {
        printf("O mes do seu 1%c calendario eh mais velho", c);
    }
    else if(m2 < m) {
        printf("O mes do seu 2%c calendario eh mais velho", c);
    }
    else if(d < d2) {
        printf("O dia do seu 1%c calendario eh mais velho", c);
    }
    else if(d2 < d) {
        printf("O dia do seu 2%c calendario eh mais velho", c);
    }
    else if(a == a2 && m == m2 && a == a2) {
        printf("-------- O dia, mes e ano sao iguais!!! --------");
    }
// nao foi feito para datas como 29 de fevereiro...somente para datas com dia entre 1-31 e mes com 1-12   
}