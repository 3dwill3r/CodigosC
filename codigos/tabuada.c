#include <stdio.h>

int tabuada(int n){
    int i;
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i,n, i*n);
    }
    return i * n;
}

int main(){
    int n;
    scanf("%d", &n);
    tabuada(n);
    return 0;
}