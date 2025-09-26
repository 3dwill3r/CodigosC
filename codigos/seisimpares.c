#include <stdio.h>

int main() {

    int i,x;
    scanf("%d", &x);
    if(x % 2 == 0){
        x++;
    }
    for(i = 0; i <= 10; i+=2){
        printf("%d\n", x + i);
    }
    return 0;
}