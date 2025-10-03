#include <stdio.h>
#include <math.h>
int definirvalor(int a, int b, int c){
    int valor;
    int min1 = (int)fmin(a,b) + 1;
    int min2 = c - (int)fmax(a,b);
    valor = (int)fmin(min1, min2);
    return valor;
    
}


int main (){
    
    int n,i,j;
    scanf("%d", &n);
    while (n){
        for(i = 0; i < n; i++){
            for(j = 0; j < n - 1; j++){
               printf("%3d ",definirvalor(i,j,n));
            }
            printf("%3d\n",1);
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}