#include <stdio.h>

void mostrarMenu() {
    printf("\n--- CONVERSAO DE TEMPERATURA ---\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

float celsiusParaFahrenheit(float c) { return (c * 9 / 5) + 32; }
float fahrenheitParaCelsius(float f) { return (f - 32) * 5 / 9; }

void executarConversao() {
    int opcao;
    float temp, resultado;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temp);
                resultado = celsiusParaFahrenheit(temp);
                printf("Resultado: %.2f F\n", resultado);
                break;
            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temp);
                resultado = fahrenheitParaCelsius(temp);
                printf("Resultado: %.2f C\n", resultado);
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
    executarConversao();
    return 0;
}
