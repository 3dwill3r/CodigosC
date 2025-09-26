#include <stdio.h>
#include <math.h>

int main() {

    char op;
    double resultado = 0.0, matriz[12][12];
    int i,j, contador = 0;

    scanf(" %c", &op);
    for(i=0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);

        }
    }   
    for(i = 0; i < 12; i++){
        for(j = i+1; j < 12; j++){
            if(i + j < 11){
                resultado += matriz[i][j];
                contador++;
            }
        }
    }
    if(op == 'M'){
        printf("%.1lf\n", resultado / contador);
    }
    else {
        printf("%.1lf\n", resultado);
    }

    return 0;
}