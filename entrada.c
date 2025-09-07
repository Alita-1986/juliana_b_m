#include <stdio.h>
int main() {
  int numero;
  printf ("Digite um numero entre 1 e 10: \n" );
  scanf ("%d", &numero);
  while (numero > 10 || numero < 1) {
    printf ("Digite um numero novamente: \n");
    scanf ("%d", &numero);
  }
  printf (" parabens voce digitou o numero %d", numero);
return 0;  
}
   