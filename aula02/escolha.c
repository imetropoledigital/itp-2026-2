#include <stdio.h>

int main(){

    int opcao;
    printf("Escolha uma opção de 0-3: ");
    scanf("%d", &opcao);

    if (opcao == 0){
        printf("O usuário quer a opção 0\n");
    }else if (opcao == 1){
        printf("O usuário quer a opção 1\n");
    }else if (opcao == 2){
        printf("O usuário quer a opção 2\n");
    }else if (opcao == 3){
        printf("O usuário quer a opção 3\n");
    }else{
        printf("Opção inválida!\n");
    }

    printf("---------------------\n");

    switch (opcao){
        case 0:
            printf("O usuário quer a opção 0\n");
            break;
        case 1:
            printf("O usuário quer a opção 1\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("O usuário quer a opção 2 ou 3 ou 4\n");
            // break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}