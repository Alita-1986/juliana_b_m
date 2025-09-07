#include <stdio.h>
int main(){
    float nota;
    printf (" Digite a sua nota de 0 a 10: ");
    scanf ("%f",&nota);
    if (nota >= 6.0) {
      printf ("Voce tirou %f, logo está aprovado", nota);
    } else {
        printf("Voce tirou %f, logo está reprovado", nota);
    }
    
return 0;    
    }