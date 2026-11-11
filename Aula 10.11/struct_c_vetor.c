#include <stdio.h>
#include <string.h>

typedef struct produto {
    char nome[30];
    float preco;
    int estoque;
} Produto ;


float valor_total_estoque(int n, Produto *c){
    float total = 0;
    for(int i = 0; i < n; i++) {
        total += c[i].preco * c[i].estoque;
    }

    return total;
}

float valor_total_estoque_p(int n, Produto *c){
    float total = 0;
    for(Produto *p=c; p < c + n; p++) {
        total += p->preco * p->estoque;
    }

    return total;
}

int main(){

    Produto catalogo[50];

    float total = 0;

    strcpy(catalogo[0].nome, "Serrote");
    catalogo[0].preco = 35.0;
    catalogo[0].estoque = 5;
    strcpy(catalogo[1].nome, "Torquimetro");
    catalogo[1].preco = 60.0;
    catalogo[1].estoque = 10;

    for(int i = 0; i < 2; i++){
        printf("%s - R$ %2.f (%d unid)\n", 
            catalogo[i].nome, catalogo[i].preco, catalogo[i].estoque);

       // total += catalogo[i].preco * catalogo[i].estoque;
    }

    printf("\nValor total em estoque: R$ %2.f", valor_total_estoque(2, catalogo));
    printf("\nValor total em estoque: R$ %2.f", valor_total_estoque_p(2, catalogo));

    return 0;
}