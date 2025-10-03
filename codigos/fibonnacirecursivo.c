#include <stdio.h>


long long int fibonacci2(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fibonacci2(n - 1) + fibonacci2(n - 2);

}

int main() {
    int n;
    scanf("%d", &n);
    while(n > 0){
        printf("%lld\n", fibonacci2(n));
        scanf("%d", &n);
    }
    return 0;
}