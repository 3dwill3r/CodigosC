#include <stdio.h>

int main()
{
    int x, y, z, i, j, temp;
    int vetor[] = {x, y, z};
    int ordenados[] = {x,y,z};
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &vetor[i]);
        ordenados[i] = vetor[i];
    }
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (ordenados[i] > ordenados[j])
            {
                temp = ordenados[i];
                ordenados[i] = ordenados[j];
                ordenados[j] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++){
        printf("%d\n", ordenados[i]);
    }
    printf("\n");

    for (i = 0; i < 3; i++){
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}