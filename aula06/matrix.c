#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));

    int image[10][1000] = {0};

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            image[i][j] = rand() % 256;
        }
    }

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}