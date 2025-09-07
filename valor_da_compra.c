#include <stdio.h>
int main(){
  float compra;
  float desconto = (compra * 0,01);
  scanf ("%f", &compra);
  if (compra >100) {
    printf (" o novo valor da compra com desconto é de %f", compra - desconto);
  } else {
      printf ("nao ha desconto");
  }
  
return 0;
}
   