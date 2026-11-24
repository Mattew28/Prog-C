#include <stdio.h>

float calcularMedia(int n, const float *notas){

    float total = 0;

    for(int i=0; i < n; i++){
        total += notas[i];
    }

    return total/n;

}

int main(){

    float notas[5] = {8.7, 5.6, 6.0, 9.8, 3.5};

    printf("Media das notas: %.2f", calcularMedia(5, notas));

    return 0;
}

/* error: assignment of read-only location '*notas'
    5 |     notas[0] = 10.0; */