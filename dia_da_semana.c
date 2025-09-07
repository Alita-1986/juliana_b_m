#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);

    if (numero == 1) {
         printf("É um domingo\n");
    } else if (numero == 2){
         printf("É uma segunda\n");
    } else if (numero ==3) {
        printf ("é uma terça");
    } else if (numero == 4){
        printf ("É uma quarta");
    } else if  (numero == 5) {
        printf ("é uma quinta");
    } else if (numero == 6) {
        printf ("é uma sexta"); 
    } else if (numero == 7) {
         printf ("é uma sábado");
    
    } else {
        printf ("erro");
    }


    return 0;
}