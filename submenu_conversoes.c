#include <stdio.h>

void menuPrincipal() {
    printf("\n--- MENU PRINCIPAL ---\n");
    printf("1 - Matematica\n2 - Conversoes\n0 - Sair\nEscolha: ");
}

void menuMatematica() {
    printf("\n--- MATEMATICA ---\n");
    printf("1 - Soma\n2 - Multiplicacao\n0 - Voltar\nEscolha: ");
}

void menuConversoes() {
    printf("\n--- CONVERSOES ---\n");
    printf("1 - Celsius -> Fahrenheit\n2 - Fahrenheit -> Celsius\n0 - Voltar\nEscolha: ");
}

float soma(float a, float b) { return a + b; }
float multiplicacao(float a, float b) { return a * b; }
float cToF(float c) { return (c * 9 / 5) + 32; }
float fToC(float f) { return (f - 32) * 5 / 9; }

void executarMatematica() {
    int op;
    float a, b;
    do {
        menuMatematica();
        scanf("%d", &op);
        if (op == 1 || op == 2) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
        }
        if (op == 1) printf("Resultado: %.2f\n", soma(a, b));
        else if (op == 2) printf("Resultado: %.2f\n", multiplicacao(a, b));
    } while (op != 0);
}

void executarConversoes() {
    int op;
    float temp;
    do {
        menuConversoes();
        scanf("%d", &op);
        if (op == 1) {
            printf("Celsius: ");
            scanf("%f", &temp);
            printf("F: %.2f\n", cToF(temp));
        } else if (op == 2) {
            printf("Fahrenheit: ");
            scanf("%f", &temp);
            printf("C: %.2f\n", fToC(temp));
        }
    } while (op != 0);
}

int main() {
    int op;
    do {
        menuPrincipal();
        scanf("%d", &op);
        if (op == 1) executarMatematica();
        else if (op == 2) executarConversoes();
    } while (op != 0);
    return 0;
}
