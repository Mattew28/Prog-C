#include <stdio.h>

void converteTempo(int total_segundos, int *horas, int *minutos, int *segundos){
    *horas = total_segundos / 3600;
    *minutos = (total_segundos % 3600) / 60;
    *segundos = (total_segundos % 3600) % 60;
}


int main(){

    int valor, seg, min, hor;

    printf("Digite um valor para segundos:");
    scanf("%d", &valor);

    converteTempo(valor, &hor, &min, &seg);

    printf("\nHora:%d\nMin:%d\nSeg:%d", hor, min, seg);

    return 0;
}