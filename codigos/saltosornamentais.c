#include <stdio.h>
#include <stdlib.h>

double maiorNum(double v[7], int n){
    int i;
    double m;
    m = v[0];
    for(i = 1; i < n; i++)if(v[i] > m) m = v[i];
    
    return m;
}

double menorNum(double v[7], int n){
    int i;
    double m;
    m = v[0];
    for(i = 1; i < n; i++)if(v[i] < m) m = v[i];
    
    return m;  
}

int main()
{

    int i, j, num,k;
    double notas[7];
    double cont = 0.0, ds,maior,menor, soma = 0.0;
    char nome[100];
    scanf("%d", &num);
    for(k = 0; k < num; k++){
        scanf("%s", nome);
        scanf("%lf", &ds);
        for (i = 0; i < 7; i++)scanf("%lf", &notas[i]);
        maior = maiorNum(notas,7);
        menor = menorNum(notas, 7);
        soma = 0;
        cont = 0;
        for(j = 0; j < 7; j++){
            if(notas[j] != maior && notas[j] != menor){
                soma += notas[j];
                cont++;
            }
        }
        printf("%s %.2lf\n", nome, soma * ds);
    }
    return 0;
}