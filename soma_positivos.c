#include <stdio.h>

int numeroValido(int numero) {
    return numero > 0;
}

void somarNumeros() {
    int numero, soma = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numeroValido(numero)) {
            soma += numero;
        }
    } while (numero != 0);

    printf("Soma dos numeros positivos: %d\n", soma);
}

int main() {
    somarNumeros();
    return 0;
}
