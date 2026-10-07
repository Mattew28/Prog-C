#include <stdio.h>


void faixa(int t1, int t2, int t3, int *maior, int *menor){

    *menor = t1;
    if(t2 < *menor)
        *menor = t2;
    if(t3 < *menor)
        *menor = t3;
    
    *maior = t1;
    if(t2 > *maior)
        *maior = t2;
    if(t3 > *maior)
        *maior = t3;

}

int main(){
   
    int temp1, temp2, temp3, maiorTemp, menorTemp;

    printf("Informe tres temperaturas: ");
    scanf("%d %d %d", &temp1, &temp2, &temp3);

    faixa(temp1, temp2, temp3, &maiorTemp, &menorTemp);

    printf("\nMaior temperatura: %d", maiorTemp);
    printf("\nMenor temperatura: %d", menorTemp);

    return 0;
}