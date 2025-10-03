#include <stdio.h>

int calcquadrado(int n)
{
    int i;
    for (i = 2; i <= n; i+=2){
        printf("%d^2 = %d\n", i, i * i);
    }
    
    return i;
}

int main()
{
    int n;
    scanf("%d", &n);
    calcquadrado(n);
    return 0;
}