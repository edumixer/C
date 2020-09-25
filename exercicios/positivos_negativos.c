// Joao Victor Carrisimi

#include <stdio.h>

int main() {
	int numeros, quantidade_positivo = 0, quantidade_negativo = 0;

    printf("Digite valores positivos e negativos: \n");
	scanf("%d", &numeros);
	
    while (numeros != 0) {
        if (numeros > 0) {
            quantidade_positivo += 1;
        }
        if (numeros < 0) {
            quantidade_negativo += 1;
        }
    scanf("%d", &numeros);
    }

    printf("Voce digitou %d numeros positivos \n", quantidade_positivo);
    printf("Voce digitou %d numeros negativos", quantidade_negativo);
	
}