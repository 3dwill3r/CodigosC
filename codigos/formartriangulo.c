#include <stdio.h>

int maiorlado(int a, int b, int c) {
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    return maior;
}

int forma_triangulo(int a, int b, int c) {
    int maior = maiorlado(a, b, c);
    if (maior == a) return b + c > a;
    if (maior == b) return a + c > b;
    return a + b > c;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (forma_triangulo(a, b, c) ||
        forma_triangulo(a, b, d) ||
        forma_triangulo(a, c, d) ||
        forma_triangulo(b, c, d))printf("S\n");
    else printf("N\n");

    return 0;
}
