#include <stdio.h>
int main() {
  int menu;
  
  do {
   printf ("Digite um numero do menu: 1 é calcular, o quadrado de um numero 2 é calcular o cubo e 3 é sair\n");
   scanf ("%d", &menu);
   if (menu==1){
     printf (" Calcular quadrado de um número\n");
   } else if (menu == 2) {
     printf (" Calcular cubo de um número\n");
   } else if (menu == 3) {
     printf ("sair\n");
   } else {
     printf ("as opções vão ate 3\n");
   }
   
  } while (menu <= 3);

return 0;  
}
