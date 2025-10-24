#include <stdio.h>
#include <stdlib.h>


int main() {

    
    int i, n, y, menor , posicao = 0;
    scanf("%d", &n);
    int *x = malloc(n * sizeof(int));
        for(i = 0; i < n; i++ ){
            scanf("%d", &y);
            x[i] = y;
    }
    menor = x[0];
    for(i = 0; i < n; i++){
        if(x[i] < menor){
            menor = x[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor,posicao);
    

    return 0;
}