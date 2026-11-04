#include <stdio.h>
#include <string.h>

int main() {

    char resultado[100] = "";

    char texto1[] = "Hello";
    char texto2[] = " World"; 

    strcat(resultado, texto1);
    strcat(resultado, texto2);

    printf("%s\n", resultado);

    return 0;
}