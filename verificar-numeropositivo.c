#include <stdio.h>
int main(){
int numero;

    printf("Digite um numero: ");
    scanf ("%d", &numero);
    if (numero > 0){
      printf ("numero positivo");
    } else if (numero <0){
      printf ("numero negativo");
    }
    else {
      printf("numero é igual a 0");
    } 
    return 0;
}