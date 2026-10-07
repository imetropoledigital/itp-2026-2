#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int TAM = 100;

    int input[TAM];

    srand(time(NULL));

    for (int i=0;i<TAM;i++){
        input[i] = rand();
    }

    long int soma = 0;
    for (int i=0;i<TAM;i++){
        soma += input[i];
        printf("%d - soma parcial: %ld\n", input[i], soma);
    }

    printf("A soma dos N elementos do vetor é %ld\n", soma);

    return 0;
}