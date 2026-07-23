#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    // Garante que X seja o menor valor
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    int soma = 0;

    for (int i = X; i <= Y; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}