#include <stdio.h>

int ehPar(int numero) {
    return numero % 2 == 0;
}

void verificarNumeros() {
    int numero;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            if (ehPar(numero)) {
                printf("%d e par.\n", numero);
            } else {
                printf("%d e impar.\n", numero);
            }
        }

    } while (numero != 0);
}

int main() {
    verificarNumeros();
    return 0;
}
