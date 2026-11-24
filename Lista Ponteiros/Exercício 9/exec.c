#include <stdio.h>

void aumentarBrilho(int n, int *pixel, int valor){

    for(int *p = pixel; p < pixel + n; p++){
        *p += valor;
        if(*p > 255){
            *p = 255;
        }

    }

}

int main(){

    int imagem[3] = {133, 180, 245};
    int n = 3;

    aumentarBrilho(n, imagem, 15);

    for(int i=0; i < 3; i++){
        printf("%d ", imagem[i]);
    }


    return 0;
}