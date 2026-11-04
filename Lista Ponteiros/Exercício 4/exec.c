#include <stdio.h>

void ordenarDois(int *a, int *b){

        if(*a > *b){
            int aux = *a;
            *a = *b;
            *b = aux;
        }

    }

int main(){

    int num1, num2;

    printf("Digite o primeiro valor: ");
        scanf("%d", &num1);
    printf("\nDigite o segundo valor: ");
        scanf("%d", &num2);

    ordenarDois(&num1, &num2);

    printf("\nOrdem crescente: %d %d", num1, num2);

    return 0;
}