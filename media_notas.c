#include <stdio.h>

int main() {
    float nota, soma = 0;
    int cont = 0;
    do {
        printf("Nota (-1 para sair): ");
        scanf("%f", &nota);
        if (nota != -1) {
            soma += nota;
            cont++;
        }
    } while (nota != -1);
    if (cont > 0) printf("Media: %.2f\n", soma / cont);
    else printf("Sem dados.\n");
    return 0;
}
