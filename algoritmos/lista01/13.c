#include<stdio.h>

/*
Elabore um algoritmo que leia uma quantidade de segundos e transforme este tempo em dias,
horas e minutos. Exemplo: 197820s. Resultado: 2 dias, 6 horas e 57 minutos.
*/

main(){
    int segundos, minutos, horas, dias;

    printf("----------------------------------------\n");
    printf("---------- CONVERSAO DE TEMPO ----------\n");
    printf("----------------------------------------\n\n");

    printf("Digite uma quantidade de segundos para ser convertidos: ");
    scanf("%i",&segundos);

    dias = segundos / 86400;
    horas = (segundos % 86400) / 3600;
    minutos = ((segundos % 86400) % 3600) / 60;

    printf("\n%i segundos = %i dias, %i horas, %i minutos\n", segundos, dias, horas, minutos);

    printf("\n----------------------------------------\n\n");
}
