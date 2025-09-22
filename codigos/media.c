#include <stdio.h>

int main()
{
    double pesoa = 3.5 ,pesob = 7.5, a, b, mediap;
    scanf("%lf%lf", &a, &b);
    mediap = ((a * pesoa) + (b * pesob)) / (pesoa + pesob);
    printf("MEDIA = %.5lf\n", mediap);
    return 0;
}