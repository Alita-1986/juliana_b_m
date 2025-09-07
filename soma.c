#include <stdio.h>

int main() {
    int numero[10] = {7, 8, 9, 15, 20, 4, 7, 8, 10,1};
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        soma += numero[i];
    }


    printf("A soma é %d\n", soma);

    return 0;
}