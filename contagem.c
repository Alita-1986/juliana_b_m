#include <stdio.h>

int main() {
    char palavra[20] = "pokemon";  
    int tamanho = 0;

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    printf("O número de caracteres é %d\n", tamanho);

    return 0;
}