#include <stdio.h>

int main() {
    int historico[5] = {10, 20, 30, 40, 50};

    for (int *p = &historico[4]; p >= historico; p--) {
        printf("%d ", *p);
    }
    
    printf("\n");
    return 0;
}
