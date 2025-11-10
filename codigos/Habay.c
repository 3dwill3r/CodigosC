#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char opcao[4];
    int ordem;
} Pessoa;

int comparar(const void *a, const void *b) {
    Pessoa *p1 = (Pessoa *)a;
    Pessoa *p2 = (Pessoa *)b;
    return strcmp(p1->nome, p2->nome);
}

int jaExiste(Pessoa v[], int tamanho, char nome[]) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(v[i].nome, nome) == 0)
            return 1;
    }
    return 0;
}

int main() {
    Pessoa pessoas[1000];
    int count = 0;
    char nome[100], opcao[4];

    while (1) {
        scanf("%s", nome);
        if (strcmp(nome, "FIM") == 0)
            break;
        scanf("%s", opcao);

        strcpy(pessoas[count].nome, nome);
        strcpy(pessoas[count].opcao, opcao);
        pessoas[count].ordem = count;
        count++;
    }

    Pessoa yes[1000], no[1000];
    int y = 0, n = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(pessoas[i].opcao, "YES") == 0) {
            if (!jaExiste(yes, y, pessoas[i].nome))
                yes[y++] = pessoas[i];
        } else {
            no[n++] = pessoas[i];
        }
    }

    qsort(yes, y, sizeof(Pessoa), comparar);
    qsort(no, n, sizeof(Pessoa), comparar);

    for (int i = 0; i < y; i++)
        printf("%s\n", yes[i].nome);
    for (int i = 0; i < n; i++)
        printf("%s\n", no[i].nome);

    printf("\n");

    // Determinar o vencedor
    int indiceVencedor = 0;
    for (int i = 1; i < y; i++) {
        int lenAtual = strlen(yes[i].nome);
        int lenVencedor = strlen(yes[indiceVencedor].nome);
        if (lenAtual > lenVencedor)
            indiceVencedor = i;
        else if (lenAtual == lenVencedor &&
                 yes[i].ordem < yes[indiceVencedor].ordem)
            indiceVencedor = i;
    }

    printf("Amigo do Habay:\n%s\n", yes[indiceVencedor].nome);
    return 0;
}
