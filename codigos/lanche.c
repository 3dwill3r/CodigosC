#include <stdio.h>

int main()
{
    int a;
    double b, total;

    scanf("%d %lf", &a, &b);

    switch (a)
    {
    case 1:
        total = b * 4.00;
        break;
    case 2:
        total = b * 4.50;
        break;
    case 3:
        total = b * 5.00;
        break;
    case 4:
        total = b * 2.00;
        break;
    case 5:
        total = b * 1.50;
        break;
    default:
        total = 0.0;
        break;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}
