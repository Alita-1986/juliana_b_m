#include <stdio.h>
int main(){
      int a;
      int b;
      
      printf ("Digite um numero:  ");
      scanf ("%d", &a);
      printf ("Digite o segundo numero: ");
      scanf ("%d",&b);
      if (a > b){
           printf ("o maior número é %d", a );
      }if (a < b){
           printf ("o maior numero é %d", b);
      } if (a == b){ 
          printf (" os numeros digitados sao iguais");
        }
      
      return 0;  
      
    }