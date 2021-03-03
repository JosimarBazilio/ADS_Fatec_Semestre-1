#include<stdio.h>

/*
Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos(Km),
e uma determinada velocidade(Km/h),
diga qual o tempo médio que levará para chegada à esse local.
*/

main(){
    int tempo;
    float distancia, velocidade;

    printf("---------------------------------\n");
    printf("---------- TEMPO MEDIO ----------\n");
    printf("---------------------------------\n\n");

    printf("Informe a distancia a ser percorrida(KM): ");
    scanf("%f",&distancia);
    printf("Informe a velocidade(km/h): ");
    scanf("%f",&velocidade);

    tempo = 60 * distancia / velocidade;

    if (tempo % 60 != 0){
        if (tempo / 60 >= 1){
            printf("\nO tempo para percorrer o percurso sera cerca de %ih e %im\n", tempo/60, tempo%60);
        }
        else{
            printf("\nO tempo para percorrer o percurso sera cerca de %im\n", tempo%60);
        }
    }else {
        printf("\nO tempo para percorrer o percurso sera cerca de %ih\n", tempo/60);
    }

    printf("\n---------------------------------\n\n");
}
