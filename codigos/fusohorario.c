#include <stdio.h>

int main() {
    int s, t, f, chegada;
    scanf("%d %d %d", &s, &t, &f);
    
    chegada = s + t + f;

    // Normaliza para 0-23
    if (chegada >= 24) {
        chegada -= 24;
    } else if (chegada < 0) {
        chegada += 24;
    }

    printf("%d\n", chegada);
    
    return 0;
}
