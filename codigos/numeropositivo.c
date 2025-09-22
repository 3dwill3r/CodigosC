#include <stdio.h>

int main() {
    int i, contador = 0;
    double armazenar[6], positivos[6];
    for(i = 0; i < 6; i++){
        scanf("%lf", &armazenar[i]);
        if(armazenar[i] > 0){
            positivos[contador] = armazenar[i];
            contador++;
        }
    }
    printf("%d valores positivos\n", contador);
    

    return 0;
}