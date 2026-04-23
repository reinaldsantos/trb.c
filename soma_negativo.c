#include <stdio.h>

int positivo(int n) { return n >= 0; }

int main() {
    int num, soma = 0;
    do {
        printf("Numero: ");
        scanf("%d", &num);
        if (positivo(num)) soma += num;
    } while (positivo(num));
    printf("Soma: %d\n", soma);
    return 0;
}
