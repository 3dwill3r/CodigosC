#include <stdio.h>

int main()
{
    int p, j1, j2, r, a;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    if (r == 1)
    {
        // Jogador 1 roubou
        if (a == 1)
        {
            printf("Jogador 2 ganha!\n");
        }
        else
        {
            printf("Jogador 1 ganha!\n");
        }
    }
    else
    {
        // Jogador 1 não roubou
        if (a == 1)
        {
            // Acusação falsa
            printf("Jogador 1 ganha!\n");
        }
        else
        {
            // Jogo normal de par/ímpar
            int soma = j1 + j2;
            if ((soma % 2 == 0 && p == 1) || (soma % 2 != 0 && p == 0))
            {
                printf("Jogador 1 ganha!\n");
            }
            else
            {
                printf("Jogador 2 ganha!\n");
            }
        }
    }

    return 0;
}
