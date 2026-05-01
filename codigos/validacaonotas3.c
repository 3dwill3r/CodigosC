#include <stdio.h>

int main() {

    double nota, soma;
    int cont, opcao;

    while (1) {
        soma = 0;
        cont = 0;

       
        while (cont < 2) {
            scanf("%lf", &nota);

            if (nota >= 0 && nota <= 10) {
                soma += nota;
                cont++;
            } else {
                printf("nota invalida\n");
            }
        }

        printf("media = %.2lf\n", soma / 2);

       
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while (opcao != 1 && opcao != 2);

        if (opcao == 2)
            break;
    }

    return 0;
}