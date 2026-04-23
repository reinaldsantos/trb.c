#include <stdio.h>

void tabuada() {
    int i, j;
    
    for (i = 1; i <= 10; i++) {
        printf("
Tabuada do %d
", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d
", i, j, i * j);
        }
    }
}

int main() {
    tabuada();
    return 0;
}
