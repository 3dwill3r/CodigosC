#include <stdio.h>

int main() {

    int i, valores[5],contadorpares = 0, pares = 0,impares = 0,positivos = 0,negativos = 0;

    for (i = 0; i < 5; i++){
        scanf("%d", &valores[i]);
    }
    for ( i = 0; i < 5; i++){
        if (valores[i] % 2 == 0) {
            pares++;
        } 
        else {
            impares++;
        }

        if (valores[i] > 0) {
            positivos++;
        } 
        else if (valores[i] < 0) {
            negativos++;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
}