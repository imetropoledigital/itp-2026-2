#include <stdio.h>


char toUppercase(char input){
    return input - 32;
}

char toLowerCase(char input){
    return input + 32;
}


int main(){

    char input = 'k';
    char output = toUppercase(input);

    int tamanho = sizeof(output);

    printf("Tamanho: %d\n", tamanho);

    printf("Input: %c - output: %c \n", input, output);

    unsigned int maxInt = 2147483647;
    maxInt = maxInt + 1;
    int tam = sizeof(maxInt);
    printf("Tamanho maxInt: %d\n", tam);
    printf("Maximo inteiro: %u\n", maxInt);


}