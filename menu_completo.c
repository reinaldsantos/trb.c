#include <stdio.h>

int ehPar(int n) { return n % 2 == 0; }
void tabuada(int n) {
    int i;
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}
float media() {
    float n, soma = 0;
    int cont = 0;
    do {
        printf("Numero (-1 para sair): ");
        scanf("%f", &n);
        if (n != -1) {
            soma += n;
            cont++;
        }
    } while (n != -1);
    return (cont > 0) ? soma / cont : 0;
}
void calculadora() {
    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    printf("Soma: %.2f\n", a + b);
}

int main() {
    int op, n;
    do {
        printf("\n1-Calc 2-Tabuada 3-Media 4-Par/Impar 0-Sair: ");
        scanf("%d", &op);
        if (op == 1) calculadora();
        else if (op == 2) {
            printf("Numero: ");
            scanf("%d", &n);
            tabuada(n);
        }
        else if (op == 3) printf("Media: %.2f\n", media());
        else if (op == 4) {
            printf("Numero: ");
            scanf("%d", &n);
            printf(ehPar(n) ? "Par\n" : "Impar\n");
        }
    } while (op != 0);
    return 0;
}
