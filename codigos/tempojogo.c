#include <stdio.h>

int main()
{
    int x, y, tempo;
    scanf("%d%d", &x, &y);
    if (x < y)
    {
        tempo = y - x;
    }
    else if (x >= y)
    {
        tempo = (24 - x) + y;
    }
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
}