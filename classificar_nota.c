#include <stdio.h>

int notaValida(float nota) {
    return nota >= 0 && nota <= 20;
}

void classificarNota(float nota) {
    if (nota < 10) printf("Reprovado\n");
    else if (nota < 14) printf("Suficiente\n");
    else if (nota < 18) printf("Bom\n");
    else printf("Muito Bom\n");
}

int main() {
    float nota;

    do {
        printf("Digite uma nota de 0 a 20: ");
        scanf("%f", &nota);

        if (!notaValida(nota)) {
            printf("Nota invalida. Tente novamente.\n");
        }
    } while (!notaValida(nota));

    classificarNota(nota);
    return 0;
}
