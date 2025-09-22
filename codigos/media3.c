#include <stdio.h>

int main()
{
    double a, b, c, d, mediap, pesototal = 10, exame, mediaexame;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    mediap = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / pesototal;
    printf("Media: %.1f\n", mediap);
    if (mediap >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (mediap < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else if (mediap >= 5 || mediap <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1f\n", exame);
        mediaexame = (mediap + exame) / 2;
        if(mediaexame >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",mediaexame);
        }
        else{
            printf("Aluno reprovado\n");
            printf("Media final: %.1f\n", mediaexame);
        }
    }
    return 0;
}