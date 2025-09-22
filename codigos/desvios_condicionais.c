#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade < 18){
        printf("Menor de idade\n");
    }else if(idade < 60){
            printf("Voce e adulto nao idoso\n");
    }else{
            printf("Voce e idoso\n");
    }
    printf("Voce nasceu em: %d\n", 2025-idade);
    return 0;
}