#include <stdio.h>


int main() {

    int n,x,y,soma,i,maior,menor,j;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        x = 0;
        y = 0;
        scanf("%d %d", &x, &y);
        soma = 0;
        maior = 0;
        menor = 0;
        j = 0;
        if(x > y){
            maior = x;
            menor = y;
        }
        else {
            maior = y;
            menor = x;
        }
        for (j = menor + 1; j < maior; j++){
            if(j % 2 != 0){
                soma = soma + j;
            }
            }
            printf("%d\n", soma);
        }   
        
    return 0;
}