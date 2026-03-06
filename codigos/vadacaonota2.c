#include <stdio.h>

int main() {
    double nota,soma = 0;
    int cont = 0;
    while (cont < 2){
        scanf("%lf", &nota);
        if (nota >= 0 && nota <= 10){
            soma += nota;
            cont++;
        }else{
            printf("nota invalida\n");
        }
    }
    
    printf("media = %.2lf\n", soma/2);

    return 0;
}