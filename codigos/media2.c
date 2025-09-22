#include <stdio.h>

int main()
{
    double pesoa = 2 ,pesob = 3,pesoc = 5, a, b,c, mediap;
    scanf("%lf%lf%lf", &a, &b,&c);
    mediap = ((a * pesoa) + (b * pesob) + (c * pesoc)) / (pesoa + pesob + pesoc);
    printf("MEDIA = %.1lf\n", mediap);
    return 0;
}