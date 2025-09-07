#include <stdio.h>
int main() {
	int soma = 0, numero = 0;

	printf("Digite numeros para somar (0 para parar):\n");

	while (1) { // loop infinito
		
		printf("Entre com um numero inteiro: ");
		scanf("%d", &numero);

		if (numero == 0) {
			break; // sai do loop
		}

		soma = soma + numero;
		//soma += numero;
		printf("A soma atualmente eh: %d\n", soma);
		
	}

	printf("Soma total: %d\n", soma);
	
	return 0;
}
