#include <stdio.h>

int main()
{
    int N, caso = 1;

    while (scanf("%d", &N) != EOF)
    {
        int total = 1; // começa com 1 por causa do zero (0 aparece 1 vez)
        for (int i = 1; i <= N; i++)
        {
            total += i;
        }

        if (total == 1)
            printf("Caso %d: %d numero\n", caso, total);
        else
            printf("Caso %d: %d numeros\n", caso, total);

        // imprime a sequência
        printf("0");
        for (int i = 1; i <= N; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" %d", i);
            }
        }
        printf("\n\n");
        caso++;
    }

    return 0;
}
