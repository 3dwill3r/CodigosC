#include <stdio.h>
#include <string.h>

int main() {
    char entrada[10];
    int soma = 0;
    int resultados = 0;

    while (resultados < 3) {
        scanf(" %[^\n]", entrada); 
        
        if (strcmp(entrada, "caw caw") == 0) {
            printf("%d\n", soma);
            soma = 0;
            resultados++;
        } else {
            int valor = 0;
            if (entrada[0] == '*') valor += 4; 
            if (entrada[1] == '*') valor += 2;
            if (entrada[2] == '*') valor += 1;
            soma += valor;
        }
    }

    return 0;
}
