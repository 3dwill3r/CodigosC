#include <stdio.h>

int calcquadrado(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    calcquadrado(n);
    return 0;
}