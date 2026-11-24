#include <stdio.h>

struct Produto {
    char nome[30];
    float preco;
};

void aplicarInflacao(int n, struct Produto *catalogo, float taxa) {
    for (struct Produto *p = catalogo; p < catalogo + n; p++) {
        p->preco *= (1.0f + taxa / 100.0f);
    }
}

int main() {
    struct Produto catalogo[] = {
        {"Arroz 5kg", 25.00},
        {"Cafe 500g", 18.50},
        {"Leite 1L", 4.80}
    };
    
    int n = sizeof(catalogo) / sizeof(catalogo[0]);
    float taxa = 5.0;

    printf("--- Antes do reajuste ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s: R$ %.2f\n", catalogo[i].nome, catalogo[i].preco);
    }

    aplicarInflacao(n, catalogo, taxa);

    printf("\n--- Apos aumento de %.1f%% ---\n", taxa);
    for (int i = 0; i < n; i++) {
        printf("%s: R$ %.2f\n", catalogo[i].nome, catalogo[i].preco);
    }

    return 0;
}

/* O avanço é de 36 bytes, pois char[30] ocupa 30 bytes e float ocupa 4 bytes
porém os avanços com float precisam ser múltiplos de 4, e o valor mais próximo
de 34 que obedece esse requisito é 36. */