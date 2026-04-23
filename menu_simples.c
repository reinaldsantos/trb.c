#include <stdio.h>

void mostrarMenu() {
    printf("\n--- MENU ---\n");
    printf("1 - Saudacao\n");
    printf("2 - Mostrar um numero\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

void saudacao() {
    printf("Ola! Bem-vindo ao programa.\n");
}

void mostrarNumero() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Numero digitado: %d\n", numero);
}

int main() {
    int opcao;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        if (opcao == 1) {
            saudacao();
        } else if (opcao == 2) {
            mostrarNumero();
        } else if (opcao == 0) {
            printf("A sair do programa...\n");
        } else {
            printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
