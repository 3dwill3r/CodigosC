#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para usar o tipo bool (necessário com -std=c99)

// A função jornada agora recebe um array de long long
long long jornada(long long estrelas[], int n)
{
    // Array para rastrear se uma estrela foi atacada
    // Assumimos que n é no máximo 10^5, então um array de int é suficiente
    // 0 = não atacada, 1 = atacada
    int *atacadas_flag = (int *)calloc(n, sizeof(int));
    if (!atacadas_flag)
    {
        // Tratar erro de alocação se necessário, mas para fins de competição, ignoramos
        return -1;
    }

    int i = 0;
    long long total_ataques_distintos = 0; // Contagem final de estrelas atacadas

    while (i >= 0 && i < n)
    {
        long long antes = estrelas[i]; // número antes do roubo
        int indice_atual = i;          // Armazena o índice atual

        if (antes > 0)
        {
            // Se esta estrela ainda não foi atacada E tem carneiros (> 0)
            if (atacadas_flag[indice_atual] == 0)
            {
                atacadas_flag[indice_atual] = 1; // Marca como atacada
                total_ataques_distintos++;       // Incrementa a contagem distinta
            }

            estrelas[i]--; // Rouba 1 carneiro (mesmo que já tenha sido atacada)
        }

        // Decide próxima Estrela baseado no número antes do roubo
        // A lógica do movimento está correta
        if (antes % 2 == 0)
        {
            i--; // par → esquerda
        }
        else
        {
            i++; // ímpar → direita
        }
    }

    free(atacadas_flag); // Libera a memória alocada
    return total_ataques_distintos;
}

int main()
{
    // Aumentar n (número de estrelas) para long long não é necessário
    // se o limite for até 10^5, mas não faz mal. Mantemos int.
    int n;
    if (scanf("%d", &n) != 1)
        return 1;

    // *** CORREÇÃO: O array de estrelas deve ser long long ***
    long long *estrelas = (long long *)malloc(n * sizeof(long long));
    if (!estrelas)
        return 1;

    for (int i = 0; i < n; i++)
    {
        // *** CORREÇÃO: Usar %lld para ler long long ***
        if (scanf("%lld", &estrelas[i]) != 1)
        {
            free(estrelas);
            return 1;
        }
    }

    // A função agora retorna long long, mas o resultado é int (<= 10^5)
    long long atacadas = jornada(estrelas, n);

    long long restantes = 0;
    // O loop para somar restantes e a variável restantes estão corretos
    for (int i = 0; i < n; i++)
    {
        restantes += estrelas[i];
    }

    // *** CORREÇÃO: Usar %lld para imprimir atacadas e restantes ***
    // (Mesmo que atacadas caiba em int, é mais seguro, e restantes é long long)
    printf("%lld %lld\n", atacadas, restantes);

    free(estrelas);
    return 0;
}