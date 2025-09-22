#include <stdio.h>

int main() {
    int N;
    int notas[]= {100, 50, 20, 10, 5, 2, 1}; 
    int qtd;

    scanf("%d", &N);
    printf("%d\n", N);

    for (int i = 0; i < 7; i++) {
        qtd = N / notas[i];   
        N = N % notas[i];     
        printf("%d nota(s) de R$ %d,00\n", qtd, notas[i]);
    }

    return 0;
}
