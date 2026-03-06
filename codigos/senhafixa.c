#include <stdio.h>
#include <stdlib.h>

int main() {

    int senha, tentativas = 0;

    while (1) {
        scanf("%d", &senha);
        tentativas++;

        if (senha == 2002) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}