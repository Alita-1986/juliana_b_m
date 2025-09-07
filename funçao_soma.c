#include <stdio.h>


int soma(int a, int b) {
  return a + b;
}

int main() {
  int a, b;
  
  printf("Digite dois números: \n");
  scanf("%d %d", &a, &b);


  printf("A soma dos dois números é %d\n", soma(a,b));
  
  return 0;
}