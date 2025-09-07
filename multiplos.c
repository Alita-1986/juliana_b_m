#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("O numero é multiplo de 3 e de 5");
    } else if (numero % 3 == 0) {
        printf("O numero é multiplo de 3");
    } else if (numero % 5 == 0) {
        printf("O numero é multiplo de 5");
    } else {
        printf("Não é multiplo de nenhum");
    }

    return 0;
}