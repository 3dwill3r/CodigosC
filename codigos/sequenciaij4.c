#include <stdio.h>

int main() {
    for (int i = 0; i <= 20; i += 2) {
        double I = i / 10.0;

        for (int j = 1; j <= 3; j++) {
            double J = j + I;
            printf("I=%g J=%g\n", I, J);
        }
    }
    return 0;
}
