#include <stdio.h>

void minMax(int input[], int n, int *minPtr, int *maxPtr){
    int min, max;

    min = input[0];
    max = input[0];

    for (int i=1;i<n;i++){
        if (input[i] < min) {
            min = input[i];
        }
        if (input[i] > max){
            max = input[i];
        }
    }

    if (minPtr != NULL) *minPtr = min;
    if (maxPtr != NULL) *maxPtr = max;

}


int main(){

    int leituras[] = {24, 31, 28, 22, 35, 27};
    int min, max;
    minMax(leituras, 6, &min, &max);
    printf("min: %d max: %d \n", min, max);

    int nota;
    printf("Digite a nota: ");
    scanf("%d", &nota);
    printf("Nota é: %d\n", nota);

    return 0;
}