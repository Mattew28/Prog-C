#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[] = "Linguagem C";
    
    char *p = texto; 
    int vogais = 0;

    while (*p != '\0') {
        char c = tolower(*p);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
            p++; 
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}
