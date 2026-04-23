#include <stdio.h>

int ehPar(int n) { return n % 2 == 0; }

int contarPares(int inicio, int fim) {
    int i, cont = 0;
    for (i = inicio; i <= fim; i++) {
        if (ehPar(i)) cont++;
    }
    return cont;
}

int main() {
    int a, b;
    printf("Inicio: ");
    scanf("%d", &a);
    printf("Fim: ");
    scanf("%d", &b);
    printf("Pares: %d\n", contarPares(a, b));
    return 0;
}
