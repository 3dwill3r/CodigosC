#include <stdio.h>

int main() {

    int x, y, maior, menor,i,soma;
    
    while(1)
    {
        
        scanf("%d %d", &x, &y);

        if ( x <= 0 || y <= 0) {
            break;
        }

        if (x > y) {
            maior = x;
            menor = y;
        } else {
            maior = y;
            menor = x;
        }
        soma = 0;
        for( i = menor; i <= maior; i++){
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);
    } 

    return 0;
}
