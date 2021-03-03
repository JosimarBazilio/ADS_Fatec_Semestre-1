#include<stdio.h>
#include<math.h>

/*
Calcule a área de um círculo.
A área de um círculo é calculada multiplicando o raio^2 por PI (3.14159).
*/

main(){
    float raio, area;

    printf("----------------------------------------\n");
    printf("---------- Area de um circulo ----------\n");
    printf("----------------------------------------\n\n");

    printf("Informe o raio do circulo: ");
    scanf("%f",&raio);

    area = pow(raio,2) * M_PI;

    printf("\nArea: %.2f\n", area);

    printf("\n----------------------------------------\n\n");
}
