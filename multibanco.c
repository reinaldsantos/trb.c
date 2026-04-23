#include <stdio.h>

void menu() {
    printf("\n--- MULTIBANCO ---\n");
    printf("1 - Consultar saldo\n2 - Depositar\n3 - Levantar\n0 - Sair\nEscolha: ");
}

void consultar(float saldo) { printf("Saldo: %.2f\n", saldo); }
float depositar(float saldo) {
    float valor;
    printf("Valor: ");
    scanf("%f", &valor);
    return saldo + valor;
}
float levantar(float saldo) {
    float valor;
    printf("Valor: ");
    scanf("%f", &valor);
    if (valor <= saldo) return saldo - valor;
    else {
        printf("Saldo insuficiente!\n");
        return saldo;
    }
}

int main() {
    float saldo = 100;
    int op;
    do {
        menu();
        scanf("%d", &op);
        if (op == 1) consultar(saldo);
        else if (op == 2) saldo = depositar(saldo);
        else if (op == 3) saldo = levantar(saldo);
    } while (op != 0);
    return 0;
}
