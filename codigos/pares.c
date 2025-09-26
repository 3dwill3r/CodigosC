#include <stdio.h>

int main() {

    int i, valores[5],contador = 0, pares[5];

    for (i = 0; i < 5; i++){
        scanf("%d", &valores[i]);
        if(valores[i] %2 == 0){ 
            pares[contador] =  valores[i];
            contador++;
        }
    }
    printf("%d valores pares\n", contador);
}