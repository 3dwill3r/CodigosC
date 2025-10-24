#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int *numeros; // ponteiro para alocação dinâmica

    scanf("%d", &n);

    numeros = (int *)malloc(n * sizeof(int)); // aloca memória
    if (numeros == NULL)
    {
        printf("Erro de alocação\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    int c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    for (i = 0; i < n; i++)
    {
        if (numeros[i] % 2 == 0)
            c2++;
        if (numeros[i] % 3 == 0)
            c3++;
        if (numeros[i] % 4 == 0)
            c4++;
        if (numeros[i] % 5 == 0)
            c5++;
    }

    printf("%d Multiplo(s) de 2\n", c2);
    printf("%d Multiplo(s) de 3\n", c3);
    printf("%d Multiplo(s) de 4\n", c4);
    printf("%d Multiplo(s) de 5\n", c5);

    free(numeros); // libera memória
    return 0;
}
