#include <stdio.h>

int realizarSaque(float *saldo, float valor){
    if(valor > *saldo)
        return 0;
    if(saldo > 0){
        *saldo -= valor;
        return 1;
    }
}

int main(){

    float numero = 0, dinheiro = 0;

    printf("Informe seu saldo: ");
        scanf("%f", &dinheiro);
    printf("\nInforme o valor a ser subtraido:");
        scanf("%f", &numero);
    
    int opcao = realizarSaque(&dinheiro, numero);
    
    if(opcao == 1){
        printf("\nSucesso, novo valor: %.2f", dinheiro);
    }else{
        printf("\nErro, saldo insuficiente.");
    }

    return 0;
}