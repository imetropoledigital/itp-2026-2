#include <stdio.h>


int main(){
    int number;

    printf("Digite um número que eu te direi se é par ou impar: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number > 0){
        printf("O número %d é par e positivo!\n", number);
    }else {
        printf("O número %d é ímpar OU negativo\n", number);
    }

    return 0;
}