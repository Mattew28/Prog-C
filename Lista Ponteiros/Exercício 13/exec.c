#include <stdio.h>
#include <string.h>

struct Veiculo {
    char matricula[10];
    int ano;
    float quilometragem;
};

void registarViagem(struct Veiculo *v, float distancia) {

    v->quilometragem += distancia;

}

int main() {
    struct Veiculo meuCarro;
    strcpy(meuCarro.matricula, "AB-12-CD");
    meuCarro.ano = 2021;
    meuCarro.quilometragem = 45000.5;

    printf("Matricula: %s (%d)\n", meuCarro.matricula, meuCarro.ano);
    printf("Quilometragem inicial: %.1f km\n", meuCarro.quilometragem);

    float distanciaViagem = 120.5;
    printf("\nA registar viagem de %.1f km...\n\n", distanciaViagem);
    registarViagem(&meuCarro, distanciaViagem);

    printf("Quilometragem atualizada: %.1f km\n", meuCarro.quilometragem);

    return 0;
}
