#include <stdio.h>
int main() {
    int nota;
    
    printf ("Digite a sua nota de 0 a 10\n ");
    scanf ("%d", &nota);
    switch (nota) {
      case 9:
      case 10:
        printf ("excelente");
        break;
        
      case 7:
      case 8:
        printf ("bom");
        break;
        
      case 5:
      case 6:
        printf ("regular");
        break;
        
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
          printf (" insuficiente");
          break;
        
      default:
        printf ("nota invalida");
        
    }
return 0;        
}