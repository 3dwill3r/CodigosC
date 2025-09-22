#include <stdio.h>

int main(){
    char nome[100];
    int dataNascimento, anoDesejado, idade;

    printf("\nDigite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &dataNascimento);

    printf("Digite o ano para calcular a idade: ");
    scanf("%d", &anoDesejado);

    idade = anoDesejado - dataNascimento;

    printf("\nEm 31/12/%d, %s tera %d anos.\n", anoDesejado, nome, idade);

    return 0;
}