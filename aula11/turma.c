#include <stdio.h>
#include <stdlib.h>

double* recebeInput(int n){

   int x = 10;

    double *notas = (double *) calloc(n, sizeof(double));

    if (notas == NULL) return -1;

    printf("Digite as notas separadas por ENTER\n");
    for (int i=0;i<n;i++){
        scanf("%lf", &notas[i]);
    }

    return notas;

}


int main(){

    int n;
    printf("Digite o tamanho da turma: ");
    scanf("%d", &n);
    printf("O tamanho da turma é de %d alunos.\n", n);
   
    double* notas = recebeInput(n);

    int acimaMedia = 0;

    double somatorio = 0, media = 0;
    for (int i=0;i<n;i++){
        somatorio += notas[i];
    }

    media = somatorio / n;

    for (int i=0;i<n;i++){
        if (notas[i] > media) acimaMedia++;
    }

    printf("A turma tem média %lf e %d acima da média\n", media, acimaMedia);

    free(notas);

    return 0;
}