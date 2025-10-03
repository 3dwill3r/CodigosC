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
// responsivo
long long int calcularFatorial2(int n){
    if (n == 0 || n == 1){
        return 1;
    }  
    return n * calcularFatorial2(n-1);
    
}

int main(){
    int n;
    scanf ("%d", &n);
    printf("%ld\n", calcularFatorial2(n));
    return 0;
}