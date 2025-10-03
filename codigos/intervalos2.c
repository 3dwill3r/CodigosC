#include <stdio.h>

int main()
{

    int x, i;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        if (x >= 10 || x <= 20)
        {
            printf("%d in", x);
        }
        else
        {
            printf("%d out", x);
        }
    }

    return 0;
}