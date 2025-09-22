#include <stdio.h>

int main()
{

    double salario = 0, porcentagem = 0, reajuste = 0, percentual = 0;
    scanf("%lf", &salario);
    if (salario >= 0 && salario <= 400)
    {
        percentual = 15;
        porcentagem = salario * 0.15;
        salario = salario + porcentagem;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", porcentagem);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    else if (salario >= 400 && salario <= 800)
    {
        percentual = 12;
        porcentagem = salario * 0.12;
        salario = salario + porcentagem;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", porcentagem);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    else if (salario >= 800 && salario <= 1200)
    {
        percentual = 10;
        porcentagem = salario * 0.10;
        salario = salario + porcentagem;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", porcentagem);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    else if (salario >= 1200 && salario <= 2000)
    {
        percentual = 7;
        porcentagem = salario * 0.07;
        salario = salario + porcentagem;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", porcentagem);
        printf("Em percentual: %.0f %%\n", percentual);
    }
    else if (salario >= 2000.00)
    {
        percentual = 4;
        porcentagem = salario * 0.04;
        salario = salario + porcentagem;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", porcentagem);
        printf("Em percentual: %.0f %%\n", percentual);
    }

    return 0;
}