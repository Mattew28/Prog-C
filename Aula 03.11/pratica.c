#include <stdio.h>

int main(){

    typedef unsigned char UChar;
    typedef int *PInt;

    UChar z = 'a';

    int w = 120;
    PInt pp;
    pp = &w;
    *pp = 7;

    typedef struct ponto Ponto;
    struct ponto {
        float x;
        float y;
    };

    //struct ponto sp;
    Ponto sp;
    sp.x = 10;
    sp.y = 20;

    printf("x=%.2f y=%.2f z=%d w=%d pp=%d", sp.x, sp.y, z, w, *pp);


    return 0;
}