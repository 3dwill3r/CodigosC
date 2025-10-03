#include <stdio.h>

long long int fibonacci(int n){
    long long int atual = 1, anterior = 0, aux;
    int i;
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    for(i = 3; i <= n; i++){
        aux = atual;
        atual = atual + anterior;
        anterior = aux;
    }
    return atual;
}


int main(){
    int n;
    scanf("%d", &n);
    while(n > 0){
        printf("%lld\n", fibonacci(n));
        scanf("%d", &n);
    }
    return 0;
}