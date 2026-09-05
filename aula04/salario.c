#include <stdio.h>

void reajustaSalario(double salario);

void imprimeSalario(double novoSalario, double reajuste, int percentual){
    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d%% \n", percentual);
}

double calculaReajuste(double salario){
    double reajuste;
    if(salario >= 0.00 && salario <= 400.00){
        reajuste = 0.15;
    }else if (salario >= 400.01 && salario <= 800.00){
        reajuste = 0.12;
    }else if (salario >= 800.01 && salario <= 1200.00){
        reajuste = 0.10;
    }else if (salario >= 1200.01 && salario <= 2000.00){
        reajuste = 0.07;
    }else{
        reajuste = 0.04;
    }
    return reajuste;
}

int main(){
    double salario;
    scanf("%lf", &salario);
    reajustaSalario(salario);
    return 0;
}

void reajustaSalario(double salario){
    double reajuste = calculaReajuste(salario);
    double novo = salario + salario * reajuste;   
    imprimeSalario(novo, novo-salario, reajuste*100);
}

