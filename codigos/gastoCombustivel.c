#include <stdio.h>

int main(){

    int tempo, km;
    double resultado;
    scanf("%d%d", &tempo, &km);
    resultado = (double)(tempo * km)/12;
    printf("%.3lf\n", resultado);
    return 0;
}