#include <stdio.h>
#include <string.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int abas = N;
    char acao[10];

    for (int i = 0; i < M; i++)
    {
        scanf("%s", acao);
        if (strcmp(acao, "fechou") == 0)
        {
            abas += 1; // fecha 1, abre 2 → +1
        }
        else if (strcmp(acao, "clicou") == 0)
        {
            abas -= 1; // fecha 1 sem abrir → -1
        }
    }

    printf("%d\n", abas);

    return 0;
}
