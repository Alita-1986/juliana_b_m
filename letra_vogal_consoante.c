#include <stdio.h>

int main() {
    char letra;
    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("É uma vogal\n");
    } else {
        printf("É uma consoante\n");
    }

    return 0;
}