#include <stdio.h>

int divisivelPor5(int numero) {
    return numero % 5 == 0;
}

void mostrarDivisiveis() {
    int i;
    printf("Numeros divisiveis por 5 de 1 a 50:\n");
    for (i = 1; i <= 50; i++) {
        if (divisivelPor5(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    mostrarDivisiveis();
    return 0;
}
