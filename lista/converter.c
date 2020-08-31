#include <stdio.h>

int celsius_to_fahr(float valor) {
	float fahr;
	int  c = 167;
    
	fahr = valor*(9.0/5.0)+32;

	printf("%3.f%cC e o mesmo que %3.f%cF", valor, c, fahr,c );
}

int fahr_to_celsius(float valor) {
    float celsius;
    int  c = 167;

    celsius = ((valor - 32) * 5/9);

    printf("%3.f%cF e o mesmo que %3.f%cC", valor, c, celsius, c);
}

int main() {
    int temperatura;
    float celsius, fahr, valor;
	int  c = 167;

    printf("========== CONVERSOR DE TEMPERATURAS ========== \n");
    printf("Digite [1] para Celsius a Fahrenheit ou [2] para Fahrenheit a Celsius: ");
    scanf("%d", &temperatura);
    if(temperatura != 1 && temperatura != 2){
        printf("Por favor, selecione as opcoes [1] ou [2].");
        return 0;
    }
    if(temperatura == 1) {
        printf("Digite sua temperatura em Celsius para Fahrenheit: ");
        
    }
    if(temperatura == 2) {
        printf("Digite sua temperatura em Fahrenheit para Celsius: ");
        
    }
	scanf("%f", &valor);
    
    
    if(temperatura == 1) {
        
        celsius_to_fahr(valor);
    }
    else if(temperatura == 2) {
        fahr_to_celsius(valor);
    }
     
}