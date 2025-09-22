#include <stdio.h>

int main()
{
    char nome[100];
    double salarioFixo, totalvendas, comissao = 0.15, salarioFinal;
    scanf("%s", nome);
    scanf("%lf%lf", &totalvendas, &salarioFixo);
    salarioFinal = (salarioFixo * comissao) + totalvendas;
    printf("TOTAL = R$ %.2lf\n", salarioFinal);

    return 0;
}