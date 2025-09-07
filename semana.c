#include <stdio.h>
int main() {
    int dia;
    printf ("Digite um numero de 1 a 7: ");
    scanf ("%d", &dia);
    switch (dia) {
      case 1:
        printf ("segunda");
        break;
      case 2: 
        printf ("terça");
        break;
        
      case 3: 
        printf ("quarta");
        break;
        
      case 4: 
        printf ("quinta");
        break;
      
      case 5: 
        printf ("sexta");
        break;
        
      case 6:
        printf ("sabado");
        break;
        
      case 7: 
        printf ("domingo");
        break; 
        
      default:
        printf ("dia invalido");
    }
    
return 0;    
}