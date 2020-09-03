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
    
    int vetor[3];
    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;
    int aux = 0;
    int sz = sizeof(vetor)/ sizeof(vetor[0]);
   
    for (int i = 0; i < sz; i++) {
        for (int j = 0; j < sz; j++) {
            if (vetor[i] < vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for ( int i = 0; i < sz; i++){
        printf(" %d ", vetor[i]);
    }
}