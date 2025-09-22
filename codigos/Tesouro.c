#include <stdio.h>

int main(){
    int moedas, marinheiros;
    scanf("%d%d", &moedas, &marinheiros);
    printf("%d\n", (moedas/(marinheiros+2))*2);
    return 0;
}