#include <stdio.h>
int main(){
      int a;
      int b;
      
      printf ("Digite um numero:  \n");
      scanf ("%d", &a);
      printf ("Digite o segundo numro: \n");
      scanf ("%d",&b);
      if (a > b){
           printf ("o maior número é a" );
      }if (a < b){
           printf ("o maior numero é b");
      } if (a == b){ 
          printf ("a é igual a b");
        }
      
      return 0;  
      
    }