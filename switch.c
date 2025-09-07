#include <stdio.h>
int main() {
	
	int dia;
	
	printf("Entre com o dia (1-7): ");
	scanf("%d", &dia);
	// validacao da entrada do usuario

	switch (dia) {
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda-feira\n");
			break;
		case 3:
			printf("Terca-feira\n");
			break;
		case 4:
			printf("Quarta-feira\n");
			break;
		case 5:
			printf("Quinta-feira\n");
			break;
		case 6:
			printf("Sexta-feira\n");
			break;
		case 7:
			printf("Sábado\n");
			break;
		default:
		printf("Dia inválido!\n");
	}
	
	printf("\ndepois do switch\n");	

	return 0;
}
