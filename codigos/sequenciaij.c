#include <stdio.h>

int main() {
    int i, j, inicioJ = 7;

    for (i = 1; i <= 9; i += 2) {
        for (j = inicioJ; j >= inicioJ - 2; j--) {
            printf("I=%d J=%d\n", i, j);
        }
        inicioJ += 2;
    }

    return 0;
}
