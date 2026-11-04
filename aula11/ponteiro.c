#include <stdio.h>

int main(){

    int a = 10;
    int *pntA = &a;

    printf("O valor da a é: %d\n", a);
    printf("O endereço de a é %p \n", pntA);

    printf("O valor que o pntA aponta é: %d\n", *pntA);

    *pntA = 20;

    printf("O valor da a é: %d\n", a);


    printf("O valor do pntA %p e o que ele aponta é: %d\n", pntA, *pntA);

    pntA++;

    printf("O valor do pntA %p e o que ele aponta é: %d\n", pntA, *pntA);

    int abc[10];
    abc[0] = 20;
    abc[1] = 21;
    abc[2] = 22;
    abc[3] = 23;
    abc[4] = 24;
    abc[5] = 25;
    abc[6] = 26;
    abc[7] = 27;
    abc[8] = 28;
    abc[9] = 29;

    printf("O valor do abc é: %p \n", abc);

    printf("O valor do abc[5] é: %d \n", abc[5]);

     printf("O valor do abc[5] é: %d \n", *(abc + 5));

     int *xpto = abc;

     *(xpto + 1) = 2;


    return 0;

}
