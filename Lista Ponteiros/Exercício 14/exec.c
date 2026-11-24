#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    float media_final;
};

int melhorAluno(int n, const struct Aluno *turma) {
    int indice_maior = 0;

    for (int i = 1; i < n; i++) {
        if (turma[i].media_final > turma[indice_maior].media_final) {
            indice_maior = i;
        }
    }

    return indice_maior;
}

int main() {
    struct Aluno turma[5] = {
        {"Ana Silva", 8.5},
        {"Bruno Costa", 9.2},
        {"Carla Souza", 7.8},
        {"Diego Lima", 9.2},
        {"Elena Rocha", 8.9}
    };

    int indice = melhorAluno(5, turma);

    printf("Melhor aluno: %s\n", turma[indice].nome);
    printf("Media final: %.2f\n", turma[indice].media_final);

    return 0;
}