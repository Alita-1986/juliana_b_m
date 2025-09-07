#include <stdio.h>
int main() {
  int aleatorio = 99;
  int numero;
  do {
    printf ("Digite um numero de 0 a 100: ");
    scanf ("%d", &numero);
    if (numero > aleatorio ){
       printf (" o numero é maior que o aleatorio");
    } else if (numero < aleatorio){
        printf (" numero menor que o aleatorio");
    } else if (numero == aleatorio) {
      printf ("acertou\n");
    }

  } while (numero >= 0 && numero <= 100);
  
printf ("voce nao digitou um numero entre 0 a 100");

return 0;  

}
