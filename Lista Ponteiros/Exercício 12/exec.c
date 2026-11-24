#include <stdio.h>

struct jogador{
    char nome[50]; 
    int nivel; 
    int exp; 
    float hp; 
    float mp;
};

void exibirStatus(const struct jogador *j){

    printf("Exibindo status:\n");
    printf("Nome: %s\n", j->nome);
    printf("Level: %d\n", j->nivel);
    printf("Experiencia: %d\n", j->exp);
    printf("Vida: %.2f\n", j->hp);
    printf("Mana: %2.f\n", j->mp);
}


int main(){

    struct jogador kratos = {
        "Kratos",
        10,
        259,
        32.0,
        15.0
    };
    
    exibirStatus(&kratos);


    return 0;
}

/* Utilizar ponteiro no lugar do parâmetro é mais eficiente pois
acessa somente a parte da memória requisitada e evitar fazer uma
cópia da struct toda para dentro da função, economizando memória */