#include <stdio.h>

int main()
{

    char op;
    double matriz[12][12];
    double resultado = 0.0;
    int i, j, contador = 0;
    scanf(" %c", &op);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (i + j < 11)
            {
                resultado += matriz[i][j];
                contador++;
            }
        }
    }
    if (op == 'S')
    {
        printf("%.1lf\n", resultado);
    }

    else if (op == 'M')
    {
        resultado /= contador;
        printf("%.1lf\n", resultado);
    }

    return 0;
}