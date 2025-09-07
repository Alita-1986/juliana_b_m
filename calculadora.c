#include <stdio.h>
int main() {
    float numero1;
    float numero2;
    char operador;
    printf ("Digite dois numeros e um operador: (+, -, *, /) ");
    scanf ("%f" "%f" "%c", &numero1, &numero2, &operador);
    switch (operador) {
      case '+':
        printf ("a soma é %f\n", numero1 + numero2);
        break;
        
      case '-':
        printf ("a subtração é %f\n", numero1 - numero2);
        break;
        
      case '*':
        printf ("a multiplicação é %f\n", numero1 * numero2);
        break;
        
      case '/':
        if (numero2 !=0){
          printf (" resultado da divisão %f\n", numero1/numero2);
        } else {
          printf ("divisão invalida");
          break;
        }
        
      default:
        printf ("operador invalido");
        break;
    }
return 0;        
}