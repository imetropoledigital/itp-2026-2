#include <stdio.h>

int convert(char input[], int *matricula){

    if (input[0] == '\0') return 0;

    int valor = 0;
    for (int i = 0; input[i] != '\0'; i++){
        if (input[i] < '0' || input[i] > '9') return 0; //falha
        valor = valor * 10 + (input[i] - '0');
    }
    *matricula = valor;
    return 1; //sucesso

}

int main()
{

    int a =  9;
    char input[] = "47568";

    char matriculaTxt[] = "987x6";
    int matriculaInt;

    int resultado = convert(matriculaTxt, &matriculaInt);

    if (resultado != 0){
        printf("Sucesso ao converter a matricula que é: %d\n", matriculaInt);
    }else{
        printf("Faha ao converter a matrícula! Verifique a entrada.\n");
    }

    return 0;
}