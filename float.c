#include <stdio.h>


int main(){
   
    float pi = 3.14; 
    int *p = (int *)pi;
    /* (um cast forçado, que o compilador permite), e sabendo que int e float
    são interpretados de formas diferentes na memória, explique por que *p não vai mostrar 3, nem nada parecido com 3.14 — e por que, na
    prática, misturar o tipo do ponteiro com o tipo da variável apontada é uma fonte de bugs difíceis de encontrar. */

    return 0;
}