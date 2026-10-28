#include <stdio.h>

int main(){

    float saldo = 500.50;
    int *p = (int *)&saldo;

    printf("Valor apontado: %d", *p);


    return 0;
}

/* A maneira como é interpretado os bits é diferente entre int e float,
causando um erro ao tentar converter. */