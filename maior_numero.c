#include <stdio.h>

int  maior_numero (int a, int b, int c) {
  if ( a > b && a > c) {
    return a;
  } else if (b> a && b > c) {
      return b;
  } else {
     return c;
  }
}

int main(){
    int a, b, c;
     printf ("Digite 3 numeros inteiros: ");
     scanf ( "%d" "%d" "%d", &a, &b, &c);
     printf ("o maior numero digitado é %d\n", maior_numero ( a, b,c));
    
return 0;    
}