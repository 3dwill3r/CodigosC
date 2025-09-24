#include <stdio.h>


int main() {

    int i, j = 0;
    double positivos[6] = {}, media = 0, aux;
    for(i = 0; i < 6; i++){
        scanf("%lf", &aux);
        if(aux > 0){
            positivos[j++] = aux;
        }
    }
    for(i = 0; i < j; i++){
        media += positivos[i];
    }
    printf("%d valores positivos\n", j);
    printf("%.1lf\n",media/j);
    return 0;
}