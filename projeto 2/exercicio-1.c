#include <stdio.h>
int main(){
int a;
    printf("Escreva o seu numero: ");
    scanf("%d", &a);
    
    if (a < 10 || a > 50 ){
        printf("Nao");
    }

    if (a %2 == 0 && a > 10){
        printf("Sim");    
    }
    else if (a %2 == 1 && a < 50){
        printf ("Sim");
    }
}