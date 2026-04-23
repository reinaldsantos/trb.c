#include <stdio.h>

int verificarTentativa(int tentativa, int secreto) {
    if (tentativa == secreto) return 0;
    else if (tentativa < secreto) return -1;
    else return 1;
}

void jogarAdivinhacao() {
    int numeroSecreto = 7;
    int tentativa, resultado;

    do {
        printf("Tente adivinhar o numero secreto: ");
        scanf("%d", &tentativa);

        resultado = verificarTentativa(tentativa, numeroSecreto);

        if (resultado == -1) {
            printf("O numero secreto e maior.\n");
        } else if (resultado == 1) {
            printf("O numero secreto e menor.\n");
        } else {
            printf("Parabens! Acertou no numero secreto.\n");
        }
    } while (resultado != 0);
}

int main() {
    jogarAdivinhacao();
    return 0;
}
