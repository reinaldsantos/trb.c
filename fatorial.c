#include <stdio.h>

int fatorial(int n) {
    int i, fat = 1;
    for (i = 1; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    int n;
    printf("Numero: ");
    scanf("%d", &n);
    printf("Fatorial: %d\n", fatorial(n));
    return 0;
}
