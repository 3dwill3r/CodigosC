#include <stdio.h>


int main() {

    int hi,mi,hf,mf,tempohora,tempominuto,minutosiniciais,minutosfinais,tempo;
    scanf("%d%d%d%d",&hi, &mi, &hf, &mf);
    minutosiniciais = hi * 60 + mi;
    minutosfinais = hf * 60 + mf;
    if(minutosiniciais < minutosfinais) {
        tempo = minutosfinais - minutosiniciais;
    }
    else if(minutosiniciais == minutosfinais ) {
        tempo = 24 * 60;
    }
    else {
        tempo = (24 * 60 - minutosiniciais) + minutosfinais;
    }
    tempohora = tempo / 60;
    tempominuto = tempo % 60;
   
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
    return 0;
}