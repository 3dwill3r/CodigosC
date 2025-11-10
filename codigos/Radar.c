#include <stdio.h>

int main() {
    int T, N;

    while (1) {
        scanf("%d", &T);
        if (T == 0) break; 

        for (int i = 0; i < T; i++) {
            scanf("%d", &N);
            if (N % 2 == 0)
                printf("%d\n", 2 * N - 2);
            else
                printf("%d\n", 2 * N - 1);
        }
    }

    return 0;
}
