#include <stdio.h>

int main(){

    int j,i,n,m,maiorPeso = 0, menorPeso = 9999, media = 0;
    printf("Informe a quantidade de bois: \n");
    scanf("%d", &n);    
    if(n >= 1){
    for(i = 0; i < n; i++){
        printf("Informe o peso de cada boi: ");
        scanf("%d", &m);
        if(m > maiorPeso){
            maiorPeso = m;
        }
        if(m < menorPeso){
            menorPeso = m;
        }
        media = media + m;
    }
    media = media/n;
    printf("\nO boi com maior peso e: %d\n", maiorPeso);
    printf("\nO boi com menor peso e: %d\n", menorPeso);
    printf("\nA media do peso dos bois e: %d\n", media);
    }
    else{
        printf("Nao existem bois na fazenda!");
    }
    return 0;
}