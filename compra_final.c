#include <stdio.h>
int main(){
  float compra;
  printf ("insira o valor da compra: ");
  scanf ("%f", &compra);
  if (compra >100) {
    printf (" o novo valor da compra com desconto é de %f", compra - (compra*0,01));
  } else {
      printf ("nao ha desconto");
  }
  
return 0;
}
   