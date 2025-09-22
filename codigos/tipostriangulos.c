#include <stdio.h>
#include <math.h>
int main()
{
    int i, j;
    double x, y, z;
    double vetor[] = {x, y, z};
    double desordenados[] = {x, y, z};
    double temp;
    for (i = 0; i < 3; i++)
    {
        scanf("%lf", &vetor[i]);
        desordenados[i] = vetor[i];
    }

        for (i = 0; i < 3; i++)
        {
            for (j = i + 1; j < 3; j++)
            {
                if (desordenados[i] < desordenados[j])
                {
                    temp = desordenados[i];
                    desordenados[i] = desordenados[j];
                    desordenados[j] = temp;
                }
            }
        }
        x = desordenados[0];
        y = desordenados[1];
        z = desordenados[2];
        if (x >= y + z)
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else
        {
            if (pow(x, 2) == pow(y, 2) + pow(z, 2))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if (pow(x, 2) > pow(y, 2) + pow(z, 2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }   
            else if (pow(x, 2) < pow(y, 2) + pow(z, 2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        if (x == y && y == z)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (x == y || y == z)
        {
            printf("TRIANGULO ISOSCELES\n");
        }

    return 0;
}