#include <stdio.h> 
 
int main() { 
    int notas[8] = {85, 90, 78, 92, 88, 77, 64, 10}; 
    int minimo = notas[0]; 
    int maximo = notas [0];
    for(int i = 1; i < 8; i++) { 
        if(notas[i] < minimo) { 
            minimo = notas[i]; 
        } 
    } 
    
    for (int i = 1; i<8; i ++) {
       if (notas [i]> maximo){
         maximo = notas [i];
       }
    }
    printf("Menor nota: %d\n", minimo); 
    printf ("maior nota: %d\n", maximo);

return 0; 
} 
