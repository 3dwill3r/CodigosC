#include <stdio.h>

int main(){

    int idade,ano = 365, mes = 30, dias,resto_ano, resto_mes;
    scanf("%d", &idade);
    ano = idade / ano;
    resto_ano = idade % 365;
    mes = resto_ano / mes;
    resto_mes = resto_ano % 30;
    dias = resto_mes;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);
    return 0;
}