#include <stdio.h>


int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

int main() {
    int N;
    scanf("%d", &N); 
    
    int N1, D1, N2, D2;
    char op, barra;
    
    for (int i = 0; i < N; i++) {
        scanf("%d %c %d %c %d %c %d", &N1, &barra, &D1, &op, &N2, &barra, &D2);
        
        int NR, DR;  
        
       
        if (op == '+') {
            NR = N1 * D2 + N2 * D1;
            DR = D1 * D2;
        } else if (op == '-') {
            NR = N1 * D2 - N2 * D1;
            DR = D1 * D2;
        } else if (op == '*') {
            NR = N1 * N2;
            DR = D1 * D2;
        } else if (op == '/') {
            NR = N1 * D2;
            DR = N2 * D1;
        }

       
        int divisor = mdc(NR, DR);
        if (divisor < 0) divisor = -divisor; 

        int NRs = NR / divisor;
        int DRs = DR / divisor;

        
        if (DRs < 0) {
            DRs *= -1;
            NRs *= -1;
        }

        printf("%d/%d = %d/%d\n", NR, DR, NRs, DRs);
    }

    return 0;
}
