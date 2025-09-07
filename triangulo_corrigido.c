#include <stdio.h>
int main(){
  int a; 
  int b;
  int c;
  printf ("digite o tamanho de um lado do triangulo: ");
  scanf ("%d",&a);
  printf ("digite o tamanho do segundo lado do triangulo: ");
  scanf ("%d", &b);
  printf ("digite o tamanho do terceiro lado do triangulo: ");
  scanf ("%d", &c);
  if (a+b > c && b+c > a && a+c > b){
    printf ("é um triangulo porque a soma de dois lados é maior que o terceiro");
  } else if (a+b <= c || b+c <= a || a+c <= b) {
       printf ("não é um triangulo porque a soma de dois lados é menor ou igual ao terceiro");
  }

return 0;
}
   