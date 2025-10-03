#include <stdio.h>

long long int calcularFatorial(int n){
    if(n == 0){
        return 1;
    }
    long long int fat = 1;
    int i;
    for (i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}


int main(){
    int n;
    scanf ("%d", &n);
    printf("%ld\n", calcularFatorial(n));
    return 0;
}