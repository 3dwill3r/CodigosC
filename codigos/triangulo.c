#include <stdio.h>

int main() {

    float a,b,c,perim,area;
    scanf("%f%f%f", &a,&b,&c);
    if(a+b > c && a+c > b && b+c > a){
        perim = a + b + c;
        printf("Perimetro = %.1f\n", perim);
    }
    else{
        area = (a+b) * c/2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}