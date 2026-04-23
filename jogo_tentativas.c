#include <stdio.h>

int main() {
    int secreto = 7;
    int tentativa;
    int tentativas = 0;
    do {
        printf("Tentativa: ");
        scanf("%d", &tentativa);
        tentativas++;
        if (tentativa < secreto) printf("Maior\n");
        else if (tentativa > secreto) printf("Menor\n");
    } while (tentativa != secreto);
    printf("Acertou em %d tentativas!\n", tentativas);
    return 0;
}
