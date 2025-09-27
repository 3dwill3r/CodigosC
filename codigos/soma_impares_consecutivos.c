#include <stdio.h>

int main()
{
    int x, y, i, soma = 0, temp = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    for (i = x + 1; i < y; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
