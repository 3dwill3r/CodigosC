#include <stdio.h>

int main()
{
    int n, matricula, matriculaMaior;
    double nota, maiorNota = -1.0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %lf", &matricula, &nota);

        if (nota > maiorNota)
        {
            maiorNota = nota;
            matriculaMaior = matricula;
        }
    }

    if (maiorNota >= 8.0)
    {
        printf("%d\n", matriculaMaior);
    }
    else
    {
        printf("Minimum note not reached\n");
    }

    return 0;
}
