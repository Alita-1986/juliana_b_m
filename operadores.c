#include <stdio.h>

/*********************************************************************
Especificadores de formato:

%d - int
%f - float
%c - char
%s - string (array de char)
%p - ponteiro (endereço de memória)

Caracteres de escape (tem uma barra antes e não são impressos na tela)
'\n' - nova linha; leva o cursor para a próxima linha
'\t' - tabulação; avança o cursor 4 espaços (depende do sistema operacional)
'\0' - caractere nulo; serve para finalizar uma string 

Comando para compilar no terminal

gcc operadores.c -o teste

teste é um nome que você escolheu, pode ser qualquer nome.
será o nome do executável criado.

operadores.c é o seu código fonte

*********************************************************************/
int main() {
	int a = 10, b = 3;

	printf("Adicao: %d\n", a + b); // 13
	printf("Subtracao: %d\n", a - b); // 7
	printf("Multiplicacao: %d\n", a * b);// 30
	printf("Divisao: %d\n", a / b); // 3 (divisão inteira)
	printf("Resto: %d\n", a % b); // 1

	float c = 10.0;
	printf("Divisao float: %.2f\n", c / b); // 3.33

	int x = 5;
	printf("Valor inicial de x: %d\n", x);
	printf("Pre-incremento ++x: %d\n", ++x); // 6 (incrementa antes de usar)
	printf("Valor final       : %d\n", x); // 6
	
	printf("Pos-incremento x++: %d\n", x++); // 6 (incrementa depois de usar)
	printf("Valor final       : %d\n", x); // 7

	return 0;
}
