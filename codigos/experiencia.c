#include <stdio.h>

int main()
{

    int i, n, x, c = 0, r = 0, s = 0, total = 0;
    char t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        scanf(" %c", &t);
        if (t == 'C')
        {
            c += x;
        }
        else if (t == 'R')
        {
            r += x;
        }
        else if (t == 'S')
        {
            s += x;
        }
    }
    total = c + r + s;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (c * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (r * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (s * 100.0) / total);

    return 0;
}