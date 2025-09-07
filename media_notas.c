#include <stdio.h>
int main() {
  float nota1;
  float nota2;
  do {
    printf ("Digite duas notas de 0 a 10: \n");
    scanf ("%f" "%f", &nota1, &nota2);
    printf ("A média é igual a %f \n", (nota1 + nota2)/2);

  } while (nota1 >= 0 && nota2 >= 0);
  
printf ("o programa encerrou pq foi digitado nota negativa");
return 0;  
}