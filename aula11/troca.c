#include <stdio.h>

void troca(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){

    int a = 10;
    int b = 20;


    printf("O valor de a %d é e b é %d\n", a, b);
    troca(&a,&b);
    printf("O valor de a %d é e b é %d\n", a, b);

    return 0;
}