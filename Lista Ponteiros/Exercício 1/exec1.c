#include <stdio.h>

int main(){

    int hp = 100;
    int *ptr_hp = &hp;

    printf("HP:%d\nHP ptr:%d", hp, *ptr_hp);

    hp += 75;

    printf("\nHP ptr:%d", *ptr_hp);

    *ptr_hp -= 20;

    printf("\nHP: %d", hp);

    return 0;
}

/* *ptr_hp está atrelado ao endereço de memória de 'hp', qualquer alteração em ptr_hp vai alterar 'hp' por esse motivo.
 */