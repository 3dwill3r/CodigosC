#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char cor[10];
    char tamanho;
} Camiseta;


int comparar(const void *a, const void *b) {
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;

   
    int corCmp = strcmp(c1->cor, c2->cor);
    if (corCmp != 0)
        return corCmp;


    if (c1->tamanho != c2->tamanho)
        return c2->tamanho - c1->tamanho;


    return strcmp(c1->nome, c2->nome);
}

int main() {
    int N, first = 1;

    while (scanf("%d", &N) && N != 0) {
        Camiseta lista[60];
        getchar(); 

        for (int i = 0; i < N; i++) {
            fgets(lista[i].nome, sizeof(lista[i].nome), stdin);
            lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0'; 

            scanf("%s %c", lista[i].cor, &lista[i].tamanho);
            getchar(); 
        }

        qsort(lista, N, sizeof(Camiseta), comparar);

        if (!first)
            printf("\n");
        first = 0;

        for (int i = 0; i < N; i++)
            printf("%s %c %s\n", lista[i].cor, lista[i].tamanho, lista[i].nome);
    }

    return 0;
}
