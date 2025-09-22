#include <stdio.h>

int main() {
    int i,j;
    float n;
    int cent;
    int cedulas[]= {10000, 5000, 2000, 1000, 500, 200}; 
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int qtd;

    scanf("%f", &n);
    n *= 100;
    cent = n;
    
    printf("NOTAS:\n"); 
    for (i = 0; i < 6; i++) {
        qtd = cent / cedulas[i];   
        cent = cent % cedulas[i];
        printf("%d nota(s) de R$ %.2f\n", qtd, (cedulas[i]/100.0));
    }

    printf("MOEDAS:\n");
    for (j = 0; j < 6; j++){
        qtd = cent / moedas[j];
        cent = cent % moedas[j];
        printf("%d moeda(s) de R$ %.2f\n", qtd, (moedas[j]/100.0));
    }
    


    return 0;
}
