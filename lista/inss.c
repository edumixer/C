#include <stdio.h>

int masculina(int idade, int contribuicao) {
    
    if(idade >= 65 && contribuicao >= 10) {
        printf("Aposentavel!!!");
    }
    else if(idade >= 63 && contribuicao >= 15) {
        printf("Aposentavel!!!");
    }
    else {
        printf("Voce nao esta pronto para se aposentar ainda...");
    }
}
int feminina(int idade, int contribuicao) {
    if(idade >= 63 && contribuicao >= 10) {
        printf("Aposentavel!!!");
    }
    else if(idade >= 61 && contribuicao >= 15) {
        printf("Aposentavel!!!");
    }
    else {
        printf("Voce nao esta pronto para se aposentar ainda...");
    }
}

int main() {
    char sexo;
    int idade;
    int contribuicao;

    printf("\n");
    printf("=========== APOSENTADORIA INSS ===========\n");
    printf("\n");
    printf("Digite 'F' para escolher o sexo feminino. \n");
    printf("Digite 'M' para escolher o sexo masculino. \n");
    printf("\n");
    printf("Digite abaixo o seu sexo: ");
    scanf("%s", &sexo);
    printf("Digite abaixo a sua idade: ");
    scanf("%d", &idade);
    printf("Digite abaixo quanto tempo voce tem de contribuicao: ");
    scanf("%d", &contribuicao);
    
    if(sexo == 'F') {
        feminina(idade, contribuicao);
    }
    if(sexo == 'M') {
        masculina(idade, contribuicao);
    }
    
}