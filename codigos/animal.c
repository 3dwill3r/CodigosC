#include <stdio.h>
#include <string.h>
int main()
{

    char tipo[100], especie[100], niveltrofico[100];
    scanf("%s%s%s", tipo, especie, niveltrofico);
    if (strcmp(tipo,"vertebrado") == 0)
    {
        if (strcmp(especie, "ave") == 0)
        {
            if (strcmp(niveltrofico, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if (strcmp(niveltrofico,  "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        else if (strcmp(especie, "mamifero") == 0)
        {
            if (strcmp(niveltrofico,  "onivoro") == 0)
            {
                printf("homem\n");
            }
            else if (strcmp(niveltrofico, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(tipo, "invertebrado") == 0)
    {
        if (strcmp(especie, "inseto") == 0)
        {
            if (strcmp(niveltrofico, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if (strcmp(niveltrofico, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if (strcmp(especie, "anelideo") == 0)
        {
            if (strcmp(niveltrofico, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if (strcmp(niveltrofico, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}