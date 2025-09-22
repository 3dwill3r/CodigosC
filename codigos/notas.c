#include <stdio.h>

int main(){
    int n1, n2, n3, n4;
    float media;
    char nome[51];
    
    printf("Escreva o nome do aluno: ");
    scanf("%s", nome);
    printf("Escreva a primeira nota: ");
    scanf("%d", &n1);
    printf("Escreva a segunda nota: ");
    scanf("%d", &n2);
    printf("Escreva a terceira nota: ");
    scanf("%d", &n3);
    printf("Escreva a quarta nota: ");
    scanf("%d", &n4);

    media = (float)(n1 + n2 + n3 + n4)/4;

    printf("Resultado: \n");
    printf("Nome: %s\n", nome);
    printf("Média: %.2f\n", media);
}