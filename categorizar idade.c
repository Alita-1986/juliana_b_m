#include <stdio.h>
int main(){
   int idade;
   printf ("Digite a sua idade:  ");
   scanf ("%d", &idade);
   if (idade>=0 && idade <=12){
     printf ("voce é criança, pois possui %d anos", idade);
   } else if (idade>=13 && idade <= 17){
        printf ("Voce é adolescente, pois possui %d anos", idade);
   } else if (idade>=18 && idade <=59){
        printf ("Voce é adulto, pois possui %d anos", idade);
   } else if(idade >=60){
        printf ("Voce é idoso, pois possui %d anos", idade);
   }

return 0;
    }