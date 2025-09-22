#include <stdio.h>

int main(){

    int nFunc,horastrab;
    double valorHora, salario;
    scanf("%d%d", &nFunc, &horastrab);
    scanf("%lf", &valorHora);
    salario = (double)horastrab * valorHora;
    printf("NUMBER = %d\n",nFunc);
    printf("SALARY = U$ %.2lf\n",salario);
    
    return 0;
}