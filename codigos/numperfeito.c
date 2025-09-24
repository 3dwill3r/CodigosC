#include <stdio.h>


int main() {


    int n,i,contador = 0, numero = 1, quantidade;
    scanf("%d", &n);
    while (quantidade < n ){
        contador = 0;
        for(i = 1; i < numero; i++){
            if(numero % 1 == 0){
                contador += 1;
            }
        }
        if(numero == contador) {
            printf("%d ", numero);
            quantidade++;
        }
    }
    printf("%d\n", &contador);
    return 0;
}