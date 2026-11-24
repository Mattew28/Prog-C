#include <stdio.h>
#include <math.h>

struct coordenada{
    float x;
    float y;
};

int main(){


    struct coordenada pontoA, pontoB;

    pontoA.x = 1.5;
    pontoA.y = 2.0;

    pontoB.x = 3.0;
    pontoB.y = 2.5;

    float distancia = sqrt(pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2));

    printf("Distancia entre os pontos A e B: %.2f", distancia);

    return 0;
}