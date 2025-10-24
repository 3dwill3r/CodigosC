#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    char j1[20], j2[20];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", j1);
        scanf("%s", j2);

        if (strcmp(j1, j2) == 0)
        { // Mesma escolha
            if (strcmp(j1, "pedra") == 0)
            {
                printf("Sem ganhador\n");
            }
            else if (strcmp(j1, "papel") == 0)
            {
                printf("Ambos venceram\n");
            }
            else if (strcmp(j1, "ataque") == 0)
            {
                printf("Aniquilacao mutua\n");
            }
        }
        else
        { // Diferentes
            if ((strcmp(j1, "ataque") == 0 && strcmp(j2, "pedra") == 0) ||
                (strcmp(j1, "ataque") == 0 && strcmp(j2, "papel") == 0) ||
                (strcmp(j1, "pedra") == 0 && strcmp(j2, "papel") == 0))
            {
                printf("Jogador 1 venceu\n");
            }
            else
            {
                printf("Jogador 2 venceu\n");
            }
        }
    }

    return 0;
}
