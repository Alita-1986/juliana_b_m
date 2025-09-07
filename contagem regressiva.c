#include <stdio.h>
int main() {
  int numero;
  printf ("Digite um numero inteiro positivo: \n" );
  scanf ("%d", &numero);
  while (numero >= 0) {
    printf ("Valor de numero: %d \n", numero);
    numero--;
  }
return 0;  
}
   