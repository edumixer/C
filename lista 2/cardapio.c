#include <stdio.h>

int main() {
    int num;

    printf("============================\n");
    printf("==========  MENU  ==========\n");
    printf("============================\n");
    printf("Somos do restaurante @smart_codebr e vamos apresentar para ti o nosso cardapio. \n");
    printf("[1] Strogonoff\n");
    printf("[2] Macarrao a carbonara\n");
    printf("[3] Feijoada\n");
    printf("[4] Peixe assado\n");
    printf("[5] Sair\n");
    printf("Por favor, digite o numero do seu prato: ");
    scanf("%d", &num);
    
    switch (num) {
    case 1:
        printf("Ok, iremos preparar o seu Strogonoff!!!\n");
        break;

    case 2:
        printf("Ok, iremos preparar o seu Macarrao a carbonara!!!\n");
        break;
    
    case 3:
        printf("Ok, iremos preparar a sua Feijoada!!!\n");
        break;
    
    case 4:
        printf("Ok, iremos preparar o seu Peixe assado!!!\n");
        break;
    
    case 5:
        default:
        printf("Saindo do programa!!!\n");
        break;
}
}