#include <stdio.h>

int main()
{
    double A, B, aumento;
    scanf("%lf %lf", &A, &B);

    aumento = ((B - A) / A) * 100.0;

    printf("%.2lf%%\n", aumento);

    return 0;
}
