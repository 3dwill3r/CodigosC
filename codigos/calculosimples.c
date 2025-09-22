#include <stdio.h>

int main()
{
    int cod1, num1, cod2, num2;
    double valoruni1, valoruni2, valor;
    scanf("%d%d", &cod1, &num1);
    scanf("%lf", &valoruni1);
    scanf("%d%d",&cod2, &num2);
    scanf("%lf", &valoruni2);
    valor = (num1 * valoruni1) + (num2 * valoruni2); 
    printf("VALOR A PAGAR: R$ %.2lf\n", valor);
    
    return 0;
}