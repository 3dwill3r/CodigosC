#include <stdio.h>

int main(){

    char nome[51];
    int massa;
    float altura, imc;

    printf("Escreva seu nome: ");
    scanf("%s", nome);
    printf("Escreva seu peso: ");
    scanf("%d", &massa);
    printf("Escreva seu altura: ");
    scanf("%f", &altura);
    
    imc = massa/(altura * altura);

    printf("Dados:\n");
    printf("Nome: %s\n", nome);
    printf("Peso: %d kg\n", massa);
    printf("Altura: %.2f m\n", altura);
    printf("Imc: %.4f", imc);
    return 0;
}