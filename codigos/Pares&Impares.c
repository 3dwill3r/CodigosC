#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); 
}

int cmp_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a); 
}

int main() {
    int N;
    scanf("%d", &N);

    int *pares = malloc(N * sizeof(int));
    int *impares = malloc(N * sizeof(int));
    int cont_pares = 0, cont_impares = 0;
    int num;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num % 2 == 0)
            pares[cont_pares++] = num;
        else
            impares[cont_impares++] = num;
    }

    qsort(pares, cont_pares, sizeof(int), cmp_asc);
    qsort(impares, cont_impares, sizeof(int), cmp_desc);

    for (int i = 0; i < cont_pares; i++)
        printf("%d\n", pares[i]);
    for (int i = 0; i < cont_impares; i++)
        printf("%d\n", impares[i]);

    free(pares);
    free(impares);
    return 0;
}
