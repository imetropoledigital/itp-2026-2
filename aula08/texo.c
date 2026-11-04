#include <stdio.h>
#include <string.h>

int main() {

    char texto[50];
    printf("Digite seu nome: ");
    scanf("%s", texto);

    printf("Seu noime tem: %zu caracteres.\n", strlen(texto));

    return 0;
}