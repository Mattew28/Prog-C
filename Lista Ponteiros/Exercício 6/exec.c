#include <stdio.h>

void substituirErro(int n, float *vetor, float erro, float novoValor) {
    for (float *p = vetor; p < vetor + n; p++) {
        if (*p == erro) {
            *p = novoValor;
        }
    }
}

int main(void) {
    float leituras[] = {12.5, 14.2, -1.0, 15.3, 10.8, -1.0, 11.1};
    int n = sizeof(leituras) / sizeof(leituras[0]);

    substituirErro(n, leituras, -1.0f, 0.0f);

    for (float *p = leituras; p < leituras + n; p++) {
        printf("%.1f ", *p);
    }
    printf("\n");

    return 0;
}

/* v[10] aloca um endereço fixo na memória enquanto *u gera um
endereço dinâmico que pode ser mutável de acordo com a preferência. */