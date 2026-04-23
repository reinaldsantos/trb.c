#include <stdio.h>

void mostrarMenuPrincipal() {
    printf("\n--- MENU GERAL ---\n");
    printf("1 - Tabuada\n");
    printf("2 - Calculadora\n");
    printf("3 - Verificar se numero e par ou impar\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

int ehPar(int numero) { return numero % 2 == 0; }

void tabuada() {
    int numero, i;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

float soma(float a, float b) { return a + b; }
float subtracao(float a, float b) { return a - b; }
float multiplicacao(float a, float b) { return a * b; }
float divisao(float a, float b) { return a / b; }

void calculadora() {
    int opcao;
    float a, b;
    printf("\n--- CALCULADORA ---\n");
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    switch (opcao) {
        case 1: printf("Resultado: %.2f\n", soma(a, b)); break;
        case 2: printf("Resultado: %.2f\n", subtracao(a, b)); break;
        case 3: printf("Resultado: %.2f\n", multiplicacao(a, b)); break;
        case 4: 
            if (b != 0) printf("Resultado: %.2f\n", divisao(a, b));
            else printf("Erro: divisao por zero.\n");
            break;
        default: printf("Opcao invalida.\n");
    }
}

void verificarNumero() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf(ehPar(numero) ? "O numero e par.\n" : "O numero e impar.\n");
}

int main() {
    int opcao;
    do {
        mostrarMenuPrincipal();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: tabuada(); break;
            case 2: calculadora(); break;
            case 3: verificarNumero(); break;
            case 0: printf("A sair do sistema...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
    return 0;
}
