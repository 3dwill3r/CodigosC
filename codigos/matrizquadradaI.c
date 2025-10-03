#include <stdio.h>
#include <math.h>

int main (){
    
    int n,i,j;
    scanf("%d", &n);
    while (n){
        for(i = 0; i < n; i++){
            for(j = 0; j < n - 1; j++){
                printf("%3d ", (int)fmin((int)fmin(i,j)+1, n - (int)fmax(i,j)));
            }
            printf("%3d\n", (int)fmin((int)fmin(i,j)+1, n - (int)fmax(i,j)));
        }
        printf("\n");
        scanf("%d", &n);
    }
    
    return 0;
}