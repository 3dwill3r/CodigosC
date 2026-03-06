#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y, i;
    while(1){
      
        scanf("%d %d", &x, &y);
          if(x == y){
            break;
        }
        if(x > y){
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }
    }

    return 0;
}