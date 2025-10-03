#include <stdio.h>

int parouimpar(int n)
{
    int i, x;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            printf("NULL\n");
        }
        else if (x > 0 && x % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (x < 0 && x % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (x > 0 && x % 2 != 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (x < 0 && x % 2 != 0)
        {
            printf("ODD NEGATIVE\n");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    parouimpar(n);
    return 0;
}