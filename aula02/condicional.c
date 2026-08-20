
#include <stdio.h>

int main(){

    printf("Início da execução do programa....\n");

    int idade = 5;

    int condicao = (idade >= 18);

    printf("O valor da condição é: %d\n", condicao);

    if (1){
        printf("Sempre cai aqui!!!\n");
    }

    if (!condicao){
        printf("A idade é menor que 18\n");
    }else {
        printf("A idade é maior ou igual a 18\n");
    }

    if (idade > 18){
        printf("Idade maior de 18\n");
    }else if (idade < 18){
        printf("Idade menor que 18\n");
    }else if (idade == 18){
        printf("Idade igual a 18\n");
    }else{
        printf("Nao faz sentido cair aqui!");
    }

    printf("O programa chegou ao fim!\n");

    return 0;
}