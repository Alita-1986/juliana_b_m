#include <stdio.h>


int eh_par(int a) {
  if (a % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int a;
  
  printf("Digite um número inteiro: \n");
  scanf("%d", &a);

 
  if (eh_par(a)) {
    printf("1, logo é par\n");
  } else {
    printf("0, logo é ímpar\n");
  }

  return 0;
}