#include <stdio.h>

int ehPar(int numero) {
    return numero % 2 == 0;
}

void mostrarTabuada(int numero) {
    int i, resultado;

    for (i = 1; i <= 10; i++) {
        resultado = numero * i;
        printf("%d x %d = %d", numero, i, resultado);
        
        if (ehPar(resultado)) {
            printf(" -> Par\n");
        } else {
            printf(" -> Impar\n");
        }
    }
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    mostrarTabuada(numero);
    return 0;
}
