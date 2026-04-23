#include <stdio.h>

void mostrarMenu() {
    printf("\n--- CALCULADORA ---\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

float soma(float a, float b) { return a + b; }
float subtracao(float a, float b) { return a - b; }
float multiplicacao(float a, float b) { return a * b; }
float divisao(float a, float b) { return a / b; }

void executarCalculadora() {
    int opcao;
    float a, b, resultado;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &a);
            printf("Digite o segundo numero: ");
            scanf("%f", &b);
        }

        switch (opcao) {
            case 1:
                resultado = soma(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtracao(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (b != 0) {
                    resultado = divisao(a, b);
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero.\n");
                }
                break;
            case 0:
                printf("A sair...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);
}

int main() {
    executarCalculadora();
    return 0;
}
