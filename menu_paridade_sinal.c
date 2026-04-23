#include <stdio.h>

int ehPar(int n) { return n % 2 == 0; }
void sinal(int n) {
    if (n > 0) printf("Positivo\n");
    else if (n < 0) printf("Negativo\n");
    else printf("Zero\n");
}
void tabuada(int n) {
    int i;
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

int main() {
    int op, n;
    do {
        printf("\n1-Paridade 2-Sinal 3-Tabuada 0-Sair: ");
        scanf("%d", &op);
        if (op != 0) {
            printf("Numero: ");
            scanf("%d", &n);
        }
        if (op == 1) printf(ehPar(n) ? "Par\n" : "Impar\n");
        else if (op == 2) sinal(n);
        else if (op == 3) tabuada(n);
    } while (op != 0);
    return 0;
}
