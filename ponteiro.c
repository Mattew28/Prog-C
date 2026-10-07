#include <stdio.h>


int dividir(int a, int b, int *resultado){

        if(b != 0){
            *resultado = a / b;
            return 0;
        }
        else{
            return -1;
        }
    }

int main(){

    int quociente = 0, teste;


    teste = dividir(54, 0, &quociente);

    if(teste == 0){
        printf("\nValor do quociente: %d", quociente);
    }else{
        printf("\nNão foi possível calcular.");
    }

    return 0;
}