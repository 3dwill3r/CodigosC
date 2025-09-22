#include <stdio.h>

int main(){
    char letra = 'a'; 
    int b; 
    float c; 
    double d; 
    scanf("%d", &b);
    scanf("%f%lf", &c,&d);
    printf("%.2f\t%5.1lf\n", c,d);
    return 0;
}