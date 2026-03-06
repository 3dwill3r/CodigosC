#include <stdio.h>
#include <stdlib.h>

void dividir(int n) {
    double x, y;

    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &x, &y);

        if (y == 0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1lf\n", x / y);
        }
    }
}
int main() {

    double x, y;
    int n;
    scanf("%d", &n);
    dividir(n);

    return 0;
}