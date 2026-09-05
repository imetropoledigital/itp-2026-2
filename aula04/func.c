#include <stdio.h>

int soma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int transformadaFourrier(){
    //jfdjhfjdf
    return 10;
}

int main(){

    int a, b;

    printf("Digite dois numeros que deseja somar separados por vírgula.\n");
    scanf("%d,%d", &a, &b);
    int resultado = soma(a,b);

    int r = transformadaFourrier();

    

    printf("%d + %d = %d\n", a, b, resultado);

    return 0;
}