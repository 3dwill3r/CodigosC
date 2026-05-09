#include <stdio.h>

int main() {

    int inter, gremio;
    int opcao = 1;
    int total = 0, vInter = 0, vGremio = 0, empates = 0;

    while (opcao == 1) {

        scanf("%d %d", &inter, &gremio);

        total++;

     
        if (inter > gremio) {
            vInter++;
        } else if (gremio > inter) {
            vGremio++;
        } else {
            empates++;
        }

        do {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    break;
                case 2:
                    break;
                default:
                    break;
            }

        } while (opcao != 1 && opcao != 2);
    }

  
    printf("%d grenais\n", total);
    printf("Inter:%d\n", vInter);
    printf("Gremio:%d\n", vGremio);
    printf("Empates:%d\n", empates);

  
    if (vInter > vGremio) {
        printf("Inter venceu mais\n");
    } else if (vGremio > vInter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}