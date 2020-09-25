// Joao Victor Carrisimi

#include <stdio.h>

int main() {
	int lista, i, numeros = 0 , quantidade_positivo = 0, quantidade_negativo = 0, quantidade_zero = 0;

    printf("Digite qual vai ser o tamanho da sua lista: ");
	scanf("%d", &lista);

    printf("Agora digite os numeros: \n");
    for (i = 0; i < lista; i++) {
	    scanf("%d", &numeros);
        if (numeros > 0) {
            quantidade_positivo += 1;
        }
        else if (numeros < 0) {
            quantidade_negativo += 1;
        }
        else if (numeros == 0) {
            quantidade_zero += 1;
        }
    }
    
    printf("Voce digitou %d numeros positivos \n", quantidade_positivo);
    printf("Voce digitou %d numeros negativos \n", quantidade_negativo);
    printf("Voce digitou %d numeros zeros", quantidade_zero);
}