#include <stdio.h>

int main() {
    
    int x, i;
    do{
        scanf("%d", &x);
        for (i = 1; i < x; i++){
            printf("%d ", i);
        }
        if(x)printf("%d\n", x);
        
    }while(x);

    return 0;
}