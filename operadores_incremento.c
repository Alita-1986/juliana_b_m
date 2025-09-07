#include <stdio.h>

int main() {
    int a = 5;
    int b;
    
    b = a++;  // Pos-incremento
    // 1. primeiro usa o valor de a, entao b recebe o valor 5
    // 2. depois incrementa a de uma unidade; agora a vale 6
    printf("a = %d, b = %d\n", a, b);  // a = 6, b = 5
    
    a = 5;  // Resetando o valor
    
    b = ++a;  // Pre-incremento
    // 1. primeiro incrementa o valor de a; agora a vale 6
    // 2. depois usa do valor de a, no caso para colocar em b; entao b recebe o valor 6   
    printf("a = %d, b = %d\n", a, b);  // a = 6, b = 6
    
   
	// Uma maneira facil de lembrar eh olhar a posição do ++:

	// Se vem antes da variavel (++n), incrementa antes de usar

	// Se vem depois da variavel (n++), incrementa depois de usar    
    
    return 0;
}
