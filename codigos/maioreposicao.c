#include <stdio.h>
#include <stdlib.h>
int main() {

    int i,n,maior,posicao;
    scanf("%d", &maior);
    posicao = 1;

    for(i = 2; i <= 100; i++){
        scanf("%d", &n);
        if(n > maior){  
            maior = n;
            posicao = i;
    }
    }
    printf("%d\n%d\n", maior, posicao);


    return 0;
}