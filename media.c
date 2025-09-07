#include <stdio.h>

int main() {
    int numero[5] = {7, 8, 9, 15, 20};
    float media = 0;
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += numero[i];
    }

    media = soma / 5.0; 

    printf("A média é %.2f\n", media);

    return 0;
}