#include <stdio.h>

int main()
{
    int dia_inicio, hora_inicio, minuto_inicio, segundo_inicio;
    int dia_fim, hora_fim, minuto_fim, segundo_fim, duracao_dias, duracao_horas, duracao_minutos, duracao_segundos;
    char texto[5];
    long long int inicio_segundos, fim_segundos, duracao_total_segundos;

  
    scanf("%s %d", texto, &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);
    scanf("%s %d", texto, &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);


    inicio_segundos = segundo_inicio + minuto_inicio * 60 + hora_inicio * 3600 + dia_inicio * 86400;
    fim_segundos = segundo_fim + minuto_fim * 60 + hora_fim * 3600 + dia_fim * 86400;

    duracao_total_segundos = fim_segundos - inicio_segundos;

    
    duracao_dias = duracao_total_segundos / 86400;
    duracao_total_segundos %= 86400;

    duracao_horas = duracao_total_segundos / 3600;
    duracao_total_segundos %= 3600;

    duracao_minutos = duracao_total_segundos / 60;
    duracao_total_segundos %= 60;

    duracao_segundos = duracao_total_segundos;

    
    printf("%d dia(s)\n", duracao_dias);
    printf("%d hora(s)\n", duracao_horas);
    printf("%d minuto(s)\n", duracao_minutos);
    printf("%d segundo(s)\n", duracao_segundos);

    return 0;
}